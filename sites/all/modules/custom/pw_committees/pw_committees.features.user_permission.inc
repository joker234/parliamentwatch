<?php
/**
 * @file
 * pw_committees.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_committees_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in committee'.
  $permissions['delete terms in committee'] = array(
    'name' => 'delete terms in committee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in committee_types'.
  $permissions['delete terms in committee_types'] = array(
    'name' => 'delete terms in committee_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in committee'.
  $permissions['edit terms in committee'] = array(
    'name' => 'edit terms in committee',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in committee_types'.
  $permissions['edit terms in committee_types'] = array(
    'name' => 'edit terms in committee_types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
