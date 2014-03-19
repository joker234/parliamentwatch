<?php
/**
 * @file
 * pw_committee_memberships.ds.inc
 */

/**
 * Implements hook_ds_custom_fields_info().
 */
function pw_committee_memberships_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'commiittee_memberships';
  $ds_field->label = 'CM Political Role';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'user' => 'user',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|b95cb9c9cd6cf7580ca164c0ed2eb8aa',
    'block_render' => '1',
  );
  $export['commiittee_memberships'] = $ds_field;

  return $export;
}
