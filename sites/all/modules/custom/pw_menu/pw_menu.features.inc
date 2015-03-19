<?php
/**
 * @file
 * pw_menu.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pw_menu_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pw_menu_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pw_menu_image_default_styles() {
  $styles = array();

  // Exported image style: pw_tb_span3.
  $styles['pw_tb_span3'] = array(
    'name' => 'pw_tb_span3',
    'label' => 'pw_tb_span3',
    'effects' => array(
      3 => array(
        'label' => 'Skalieren und zuschneiden',
        'help' => 'Skalieren und zuschneiden wird das Seitenverhältnis des ursprünglichen Bildes erhalten, und dann die überstehenden Ränder entfernen. Dies ist besonders nützlich für die Erstellung von perfekt quadratischen Vorschaubildern ohne Verzerrung des Bildes.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '200',
          'height' => '133',
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
