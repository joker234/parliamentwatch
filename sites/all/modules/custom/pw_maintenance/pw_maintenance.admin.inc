<?php

/**
 * @file pw_maintenance.admin.inc
 *
 */


/**
 * Form builder.
 */
function pw_maintenance_clear_constituencies($form, &$form_state) {

  // parliament for clearing constituencies
  $voc = taxonomy_vocabulary_machine_name_load('parliaments');
  $terms = taxonomy_term_load_multiple(array(), array('vid' => $voc->vid));
  foreach ($terms as $tid => $term) {
    $empty_term_ids = pw_maintenance_get_constituencies($tid);
    $options[$tid] = $term->name . " (" . sizeof($empty_term_ids) . " empty terms)";
  }
  $form['pw_maintenance_clear_constituencies_parliament'] = array(
    '#type' => 'select',
    '#title' => t('Parliament'),
    '#options' => $options,
    '#required' => TRUE,
  );

  // add submit button
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Clear Empty Constituencies',
  );

  // add custom submit handler
  $form['#submit'][] = 'pw_maintenance_clear_constituencies_submit';
  return $form;
}

/**
 * Form submit handler.
 */
function pw_maintenance_clear_constituencies_submit($form, &$form_state) {

  // selected parliament
  $parliament_tid = $form['pw_maintenance_clear_constituencies_parliament']['#value'];

  // get empty terms
  $empty_term_ids = pw_maintenance_get_constituencies($parliament_tid);

  // delete terms
  $terms = taxonomy_term_load_multiple($empty_term_ids);
  foreach ($terms as $tid => $term) {
    drupal_set_message($term->name.' ('.$term->tid.'), '.$term->uuid.' - deleted');
    taxonomy_term_delete($tid);
  }

  drupal_set_message(sizeof($empty_term_ids) . " terms deleted");
}

/**
 * Get emtpy terms in vocabulary constituency
 */
function pw_maintenance_get_constituencies($parliament_tid) {

  $empty_term_ids = array();

  // constituency
  $constituency_voc = taxonomy_vocabulary_machine_name_load('constituency');

  // query for all constituency terms tagged with parliament
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
    ->propertyCondition('vid', $constituency_voc->vid)
    ->fieldCondition('field_parliament', 'tid', $parliament_tid);
  $result = $query->execute();
  if ($result['taxonomy_term']) {
    $term_ids = array_keys($result['taxonomy_term']);

    // load terms which have no users in relation and have no children
    $empty_term_ids = db_query("SELECT td.tid 
      FROM taxonomy_term_data td
      LEFT OUTER JOIN field_revision_field_user_constituency fr_const ON fr_const.entity_type = 'user' AND fr_const.field_user_constituency_tid  = td.tid
      LEFT OUTER JOIN taxonomy_term_hierarchy th ON td.tid = th.parent
      WHERE fr_const.entity_id IS NULL AND th.tid IS NULL AND td.tid IN (:term_ids)
      GROUP BY td.tid", array(':term_ids' => $term_ids))->fetchCol();
    $terms = taxonomy_term_load_multiple($empty_term_ids);

    // try to find a second constituency with same name
    foreach($terms as $term){
      $non_empty_query = db_query("SELECT td.tid 
      FROM taxonomy_term_data td
      INNER JOIN field_revision_field_parliament fr_parliament ON fr_parliament.entity_type = 'taxonomy_term' AND fr_parliament.entity_id = td.tid 
      WHERE td.vid = :vid AND td.tid NOT IN (:empty_term_id) AND td.name = :empty_term_name AND fr_parliament.field_parliament_tid = :parliament_tid
      GROUP BY td.tid",
        array(
          ':vid' => $term->vid,
          ':empty_term_id' => $empty_term_ids,
          ':empty_term_name' => $term->name,
          ':parliament_tid' => $parliament_tid,
        )
      );

      // a second constituency not exists
      if($non_empty_query->rowCount() == 0){
        $empty_term_ids = array_diff($empty_term_ids, [$term->tid]);
      }
      // removes fetched ids from empty ids to ensure, that two empty constituencies with the same name not getting deleted
      // and one of both still gets deleted
      else{
        $empty_term_ids = array_diff($empty_term_ids, $non_empty_query->fetchCol());
      }
    }
  }
  return $empty_term_ids;
}

/**
 * Form builder for merging users.
 */
function pw_maintenance_user_merge($form, &$form_state) {

  $form['user_source'] = array(
    '#type' => 'textfield',
    '#title' => t('User source'),
    '#autocomplete_path' => 'user/autocomplete',
    '#default_value' => '',
    '#required' => TRUE,
  );

  $form['user_target'] = array(
    '#type' => 'textfield',
    '#title' => t('User target'),
    '#autocomplete_path' => 'user/autocomplete',
    '#default_value' => '',
    '#required' => TRUE,
  );

  // add submit button
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Merge Users',
  );

  // add custom submit handler
  $form['#submit'][] = 'pw_maintenance_user_merge_submit';

  return $form;
}

/**
 * Form submit handler.
 * Merges one user into another by running through all tables and updates them.
 */
function pw_maintenance_user_merge_submit($form, &$form_state) {

  // user
  global $user;

  // selected users to merge
  $user_source = user_load_by_name($form['user_source']['#value']);
  if(!$user_source){
    drupal_set_message('User '.$form['user_source']['#value'].' not exists.', 'error');
    return FALSE;
  }
  $user_target = user_load_by_name($form['user_target']['#value']);
  if(!$user_target){
    drupal_set_message('User '.$form['user_target']['#value'].' not exists.', 'error');
    return FALSE;
  }
  if($user_source->uid == $user_target->uid){
    drupal_set_message('Can not merge user object into itself.', 'error');
    return FALSE;
  }

  // load all database schemes
  $schemes = drupal_get_schema(NULL, TRUE);
  $excluded_tables = array('feeds_item', 'users', 'users_roles', 'user_archive_cache', 'webform_views_untersttzen_sie_abgeordnetenwatchde');
  $schemes = array_diff_key($schemes, array_flip($excluded_tables));
  ksort($schemes);

  foreach($schemes as $table => $schema){

    // update tables with columns uid
    if(array_key_exists('uid', $schema['fields'])){
      db_update($table)
        ->fields(array(
          'uid' => $user_target->uid,
        ))
        ->condition('uid', $user_source->uid)
        ->execute();
    }

    // update tables with columns entity_type=user and entity_id excluding field_data-tables which will be handled by user_delete later
    if(array_key_exists('entity_id', $schema['fields']) && array_key_exists('entity_type', $schema['fields']) && !preg_match('/^field_data_/', $table)){
      db_update($table)
        ->fields(array(
          'entity_id' => $user_target->uid,
        ))
        ->condition('entity_id', $user_source->uid)
        ->condition('entity_type', 'user')
        ->execute();
    }

    // update references to the user stored eg. in node fields
    $field_name = preg_replace('/^field_[^_]+_/', '', $table);
    if(array_key_exists($field_name.'_target_id', $schema['fields'])){
      $field_info = field_info_field($field_name);
      if($field_info['settings']['target_type'] == 'user'){

        // update entities
        if (preg_match('/^field_data_/', $table)) {
          $efq_query = new EntityFieldQuery();
          $efq_query->fieldCondition($field_name, 'target_id', $user_source->uid);
          $result = $efq_query->execute();
          foreach ($result as $key => $entity_ids) {
            $entities = call_user_func($key . '_load_multiple', array_keys($entity_ids));
            foreach ($entities as $entity) {
              $entity->{$field_name}[LANGUAGE_NONE][0]['target_id'] = $user_target->uid;
              call_user_func($key . '_save', $entity);
            }
          }
        }
        else {
          // update revisions
          db_update($table)
            ->fields(array(
              $field_name . '_target_id' => $user_target->uid,
            ))
            ->condition($field_name . '_target_id', $user_source->uid)
            ->execute();
        }
      }
    }
  }

// add redirect from the source user to the target one
  if(module_exists('redirect')){
    $redirect = new stdClass();
    redirect_object_prepare($redirect, array(
        'source' => 'profile/'.$user_source->name,
        'redirect' => 'profile/'.$user_target->name,
      )
    );
    redirect_save($redirect);
  }

// connect all user revisions with the target user
  db_update("user_revision")
    ->fields(array(
      'name' => $user_target->name,
    ))
    ->condition('uid', $user_target->uid)
    ->execute();

// update associated files
  db_update("file_usage")
    ->fields(array(
      'id' => $user_target->uid,
    ))
    ->condition('id', $user_source->uid)
    ->condition('type', 'user')
    ->execute();

// delete all entries from meta table related to the source user
  db_delete('user_archive_cache')
    ->condition('uid', $user_source->uid)
    ->execute();

// user names for output
  $user_source_fullname = _pw_get_fullname($user_source);

// remove source user from system
  user_delete($user_source->uid);

// clear field caches to refresh field information in forms
  field_cache_clear();

// rebuild meta table
  pw_userarchives_cron($user_target->uid);

// message to the frontend
  $msg = 'User '.$user_source_fullname.' merged into '.l(_pw_get_fullname($user_target), 'user/'.$user_target->uid);
  drupal_set_message($msg);
  watchdog('pw_maintenance', $msg);
}


