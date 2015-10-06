<?php
/**
 * @file
 * pw_dialogues.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_dialogues_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_dialogues_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function pw_dialogues_node_info() {
  $items = array(
    'dialogue' => array(
      'name' => t('Dialogue'),
      'base' => 'node_content',
      'description' => t('A dialogue. The node content is the question, comments are answers by the politician or further questions. Node and questions have the same fields.'),
      'has_title' => '1',
      'title_label' => t('Titel'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
