<?php
/**
 * @file
 * pw_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function pw_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-pw_menu_participate_donate'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_menu_participate_donate',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Unabhängigkeit sichern',
    'visibility' => '0',
  );

  $export['block-pw_menu_press_contact'] = array(
    'cache' => -1,
    'css_class' => 'clearfix',
    'custom' => '0',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'machine_name' => 'pw_menu_press_contact',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => 'Ihr Ansprechpartner',
    'visibility' => '0',
  );

  $export['tb_megamenu-menu-main-menu-de'] = array(
    'cache' => '-1',
    'css_class' => 'desktop-only',
    'custom' => '0',
    'delta' => 'menu-main-menu-de',
    'i18n_block_language' => array(),
    'i18n_mode' => '0',
    'module' => 'tb_megamenu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'abgeordnetenwatch' => array(
        'region' => 'menu',
        'status' => '1',
        'theme' => 'abgeordnetenwatch',
        'weight' => '0',
      ),
      'blank' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'blank',
        'weight' => '0',
      ),
      'pw_seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pw_seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  return $export;
}