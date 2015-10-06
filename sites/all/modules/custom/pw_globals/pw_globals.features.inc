<?php
/**
 * @file
 * pw_globals.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_globals_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function pw_globals_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Einfache Seite'),
      'base' => 'node_content',
      'description' => t('Benutzen Sie <em>Einfache Seiten</em> für statischen Inhalt, wie z.B. eine „Über uns“ Seite.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
