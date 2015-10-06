<?php
/**
 * @file
 * pw_mass_mailing.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pw_mass_mailing_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer views_send'.
  $permissions['administer views_send'] = array(
    'name' => 'administer views_send',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'attachments with views_send'.
  $permissions['attachments with views_send'] = array(
    'name' => 'attachments with views_send',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'mass mailing with views_send'.
  $permissions['mass mailing with views_send'] = array(
    'name' => 'mass mailing with views_send',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'views_send',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'send link to pw login once'.
  $permissions['send link to pw login once'] = array(
    'name' => 'send link to pw login once',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'pw_login_once',
  );

  // Exported permission: 'use link to pw login once'.
  $permissions['use link to pw login once'] = array(
    'name' => 'use link to pw login once',
    'roles' => array(
      'Candidate' => 'Candidate',
      'Content Manager' => 'Content Manager',
      'Deputy' => 'Deputy',
      'Politician' => 'Politician',
      'Premium User' => 'Premium User',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'pw_login_once',
  );

  // Exported permission: 'use text format html_mail'.
  $permissions['use text format html_mail'] = array(
    'name' => 'use text format html_mail',
    'roles' => array(
      'Content Manager' => 'Content Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
