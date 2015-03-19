<?php
/**
 * @file
 * pw_menu.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function pw_menu_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'file|image|pw_file_tb_megamenu';
  $ds_fieldsetting->entity_type = 'file';
  $ds_fieldsetting->bundle = 'image';
  $ds_fieldsetting->view_mode = 'pw_file_tb_megamenu';
  $ds_fieldsetting->settings = array(
    'field_image_copyright' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'copyright',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['file|image|pw_file_tb_megamenu'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|page|teaser_mega_menu';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'page';
  $ds_fieldsetting->view_mode = 'teaser_mega_menu';
  $ds_fieldsetting->settings = array(
    'node_link' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link text' => 'Read more',
        'wrapper' => '',
        'class' => '',
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'read-more',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_reset',
        ),
      ),
    ),
    'field_teaser_image' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_minimal',
        ),
      ),
    ),
    'field_teaser_headline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'h3',
          'ow-cl' => 'node-title',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|page|teaser_mega_menu'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function pw_menu_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'pw_file_tb_megamenu';
  $ds_view_mode->label = 'pw_file_tb_megamenu';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['pw_file_tb_megamenu'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'teaser_mega_menu';
  $ds_view_mode->label = 'Teaser Mega Menu';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['teaser_mega_menu'] = $ds_view_mode;

  return $export;
}
