<?php

/**
 * @file
 * Includes main hooks.
 */

/**
 * Updates stats for users.
 *
 * 1. Fetch highest and actual vid of every grouped item.
 * 2. Modify query object and re-fetch data using the vids.
 * 3. Do the delete and update queries
 * 4. Update fields, index, etc.
 *
 */

function pw_userarchives_cron($uid = NULL) {

  // timespan
  $request_timespan = time() - (20000000000 * 60 * 60);

  // db_select: user revision
  $query = db_select('user_revision', 'ur');
  $query->addExpression('MAX(ur.vid)', 'vid');

  // join taxonomy terms to get parliament name
  $query->join('field_revision_field_user_parliament', 'u_parl', "u_parl.entity_type = 'user' AND ur.vid = u_parl.revision_id");
  $query->join('taxonomy_term_data', 'parliament', 'parliament.tid = u_parl.field_user_parliament_tid');

  // join fractions to get fraction tid
  $query->leftJoin('field_revision_field_user_fraction', 'fraction_tid', "fraction_tid.entity_type = 'user' AND fraction_tid.revision_id = ur.vid");
  $query->leftJoin('taxonomy_term_data', 'fraction', 'fraction.tid = fraction_tid.field_user_fraction_tid');

  // join revisionable roles to get user_role
  $query->join('field_revision_field_user_roles_for_view_mode_s', 'role_tid', "role_tid.entity_type = 'user' AND role_tid.revision_id = ur.vid");
  $query->join('taxonomy_term_data', 'role', 'role.tid = role_tid.field_user_roles_for_view_mode_s_tid');

  // query conditions
  $query->condition('ur.status', '1');
  if ($uid != NULL) {
    $query->condition('ur.uid', $uid);
  }
  $query->condition('ur.timestamp', $request_timespan, '>');
  $query->condition('role.name', array('Deputy', 'Candidate'));
  $query->groupBy('ur.uid, u_parl.field_user_parliament_tid, role_tid.field_user_roles_for_view_mode_s_tid, fraction_tid.field_user_fraction_tid');

  // fetch all vids as flat array
  $vids = $query->execute()->fetchCol();

  // return if no revision were found (e.g. non-politician)
  if(empty($vids)){
    return;
  }

  // second step: modify query and get items by vids

  // add fetched vids as condition
  $query->condition('ur.vid', $vids);

  // unset group and max(vid) expression
  array_pop($query->getGroupBy());
  array_pop($query->getExpressions());

  // readd vid as regular field
  $query->addField('ur', 'vid', 'vid');

  // add all the other fields (and joins)
  $query->addField('ur', 'uid'); // NOTE: keep as index 1 for fetchCol
  $query->addField('ur', 'name', 'user_name');
  $query->addField('parliament', 'name', 'parliament_name');
  $query->addField('fraction', 'name', 'fraction_name');
  $query->addExpression('LOWER(role.name)', 'user_role');

  // join parliament election to get timestamp for elections
  $query->leftJoin('field_revision_field_parliament_election', 'pe', "pe.entity_type='taxonomy_term' AND pe.entity_id = u_parl.field_user_parliament_tid");
  $query->addExpression('UNIX_TIMESTAMP(pe.field_parliament_election_value)', 'timestamp');

  // join joined to get valid from
  $query->leftJoin('field_revision_field_user_joined', 'user_joined', "user_joined.entity_type = 'user' AND user_joined.revision_id = ur.vid");
  $query->addField('user_joined', 'field_user_joined_value', 'user_joined');

  // join retired to get valid until
  $query->leftJoin('field_revision_field_user_retired', 'user_retired', "user_retired.entity_type = 'user' AND user_retired.revision_id = ur.vid");
  $query->addField('user_retired', 'field_user_retired_value', 'user_retired');

  // join dialogues fields to get number of questions
  $query->leftJoin("field_data_field_dialogue_recipient", "dia_rp", "dia_rp.entity_type = 'node' AND dia_rp.field_dialogue_recipient_target_id = ur.uid");
  $query->leftJoin("field_data_field_parliament", "dia_parl", "dia_parl.entity_type = 'node' AND dia_parl.entity_id = dia_rp.entity_id AND dia_parl.field_parliament_tid = parliament.tid");
  $query->leftJoin("field_data_field_dialogue_before_election", "dia_election", "dia_election.entity_type = 'node' AND dia_election.entity_id = dia_parl.entity_id AND
           CASE
           WHEN role.name = 'Candidate' THEN dia_election.field_dialogue_before_election_value = 1
           ELSE dia_election.field_dialogue_before_election_value = 0
           END");
  $query->leftJoin("node", "n", "dia_rp.entity_id = n.nid AND n.status = 1");
  $query->addExpression("IFNULL(COUNT(DISTINCT dia_election.entity_id), 0)", "number_of_questions");

  // join comments to dialogues to get number of answers without standard replies
  $query->leftJoin("comment", "c", "dia_election.entity_id = c.nid AND c.status = 1");
  $query->leftJoin("field_data_field_dialogue_is_standard_reply", "standard_reply", "standard_reply.entity_type = 'comment' AND standard_reply.entity_id = c.cid");
  $query->addExpression("IFNULL(COUNT(DISTINCT c.nid), 0) - IFNULL(SUM(standard_reply.field_dialogue_is_standard_reply_value), 0)", "number_of_answers");

  // join users to get actual profile
  $query->leftJoin("users", "u", "ur.vid = u.vid");
  $query->groupBy('ur.vid');
  $query->addExpression("NOT ISNULL(u.vid)", "actual_profile");

  // join user archive cache for comparing
  $query->leftJoin('user_archive_cache', 'uac', "ur.vid = uac.vid");
  $query->where('(ISNULL(uac.number_of_questions)
          OR uac.number_of_questions != number_of_questions
          OR uac.number_of_answers != number_of_answers)');

  // nothing to update
  if(empty($query) || $query->execute()->rowCount() == 0){
    return;
  }

  // fetch vids and uids
  $result = $query->execute()->fetchAllAssoc('vid', PDO::FETCH_ASSOC);
  $uids = array_unique(array_column($result, 'uid'));
  $vids = array_column($result, 'vid');

  // delete archive cache
  db_delete('user_archive_cache')
    ->condition('vid', $vids)
    ->execute();

  // insert by select query
  db_insert('user_archive_cache')
    ->from($query)
    ->execute();

  // set actual / newest profile
  if(!isset($_REQUEST['form_id'])){
    foreach ($uids as $uid) {

      // restore to newest profile, especially after importing older profiles
      pw_reset_actuale_profile($uid);
    }
  }

  // update fields
  foreach ($result as $row) {

    $user_revision = user_revision_load($row['uid'], $row['vid']);
    if($user_revision){
      $revision_edit = array();
      $revision_edit['field_user_questions_get'][LANGUAGE_NONE][0]['value'] = $row['number_of_questions'];
      $revision_edit['field_user_answers_give'][LANGUAGE_NONE][0]['value'] = $row['number_of_answers'];

      // reset pictures which have a null value
      if(key_exists('und', $user_revision->field_user_picture) && $user_revision->field_user_picture['und'][0] === NULL){
        $revision_edit['field_user_picture'] = array();
      }
      _user_revision_edit_save($user_revision, $revision_edit);
    }
  }

  // update politician index
  $politician_index = search_api_index_load("politician_index");
  if($politician_index){
    search_api_index_specific_items($politician_index, $uids);
  }

  return "Done";
}

/**
 * Deletes old user revisions from database.
 */
function pw_delete_old_user_revisions($uid = NULL) {
  $days_buffer = 0;
  $time_buffer = time() - (86400 * $days_buffer);

  // query for all revision which are older than X days and which are not in the user_archive_cache table
  $query = db_select('user_revision', 'ur');
  $query->addField('ur', 'uid');
  $query->addField('ur', 'vid');
  $query->addField('uac', 'id');
  $query->join('field_revision_field_user_roles_for_view_mode_s', 'ro', 'ro.entity_id=ur.uid AND ro.revision_id=ur.vid');
  $query->join('taxonomy_term_data', 'rn', 'rn.tid=ro.field_user_roles_for_view_mode_s_tid');
  $query->leftJoin('user_archive_cache', 'uac', 'ur.uid = uac.uid AND ur.vid = uac.vid');
  $query->join('users', 'u', 'ur.uid = u.uid AND ur.vid != u.vid');
  if($uid !== NULL) {
    $query->condition('ur.uid', $uid);
  }
  $query->condition('ur.timestamp', $time_buffer, '<');
  $query->condition('rn.name', 'Politician');
  $query->isNull('id');
  $result = $query->execute();
  $number_of_revisions = $result->rowCount();

  // revisions found
  if ($number_of_revisions > 0) {

    // delete all those revisions
    while ($revision = $result->fetchObject()) {
      user_revision_delete($revision);
    }

    // leave a message
    watchdog('pw_userarchives', ':number_of_revisions user revisions deleted which were older than :days_buffer days and were not associated with user_archive_cache', array(
      ':number_of_revisions' => $number_of_revisions,
      ':days_buffer' => $days_buffer
    ));
  }
}

/**
 * Chaecks and resets user revision to actual (newest) profile
 * @param $uid
 */
function pw_reset_actuale_profile($uid) {

  // load current profile
  $user = user_load($uid, TRUE);

  if(!$user){
    return;
  }

  // load newest profile
  $query = db_select('user_archive_cache', 'uac');
  $query->addField('uac', 'vid');
  $query->condition('uac.uid', $uid);
  $query->orderBy('uac.timestamp', 'DESC');
  $query->orderBy('uac.user_role=\'deputy\'', 'DESC');
  $query->orderBy('uac.vid', 'DESC');
  $result = $query->execute()->fetchAssoc();
  $newest_vid = $result['vid'];

  // check if current vid is newest
  if($user->vid != $newest_vid){

    // load full revision
    $user_revision = user_revision_load($uid, $newest_vid);

    // retrieve roles and add them to user object
    $role_tids = _pw_array_flatten($user_revision->field_user_roles_for_view_mode_s, FALSE);
    $roles_terms = taxonomy_term_load_multiple($role_tids);
    $user_revision->roles = [];
    foreach($roles_terms as $role_term){
      $role =  user_role_load_by_name($role_term->name);
      $user_revision->roles[$role->rid] = $role->name;
    }
    $user_revision->revision = 1;

    // add custom abort flag to prevent from circular updates
    $user_revision->abort_update = 1;
    $user_revision->log = t('Copy of the revision from %date.', array('%date' => format_date($user_revision->revision_timestamp)));
    user_save($user_revision, (array) $user_revision);
    watchdog('user', 'reverted %title revision %revision.', array('%title' => $user_revision->name, '%revision' => $user_revision->vid));
  }
}
