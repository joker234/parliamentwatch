<?php
/**
 * @file
 * pw_api.features.inc
 */

/**
 * Implements hook_views_api().
 */
function pw_api_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
