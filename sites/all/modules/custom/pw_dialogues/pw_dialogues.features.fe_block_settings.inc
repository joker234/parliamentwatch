<?php
/**
 * @file
 * pw_dialogues.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_dialogues_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['pw_dialogues-qa-stat-parties'] = array(
    'cache' => '-1',
    'css_class' => '',
    'custom' => '0',
    'delta' => 'qa-stat-parties',
    'module' => 'pw_dialogues',
    'node_types' => array(),
    'pages' => '<?php
if($term = menu_get_object(\'taxonomy_term\', 2)){
  return $term->vocabulary_machine_name == "parliaments";
}
?>',
    'roles' => array(),
    'themes' => array(
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'parliamentwatch' => array(
        'region' => 'sidebar_second',
        'status' => '1',
        'theme' => 'parliamentwatch',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '2',
  );

  return $export;
}
