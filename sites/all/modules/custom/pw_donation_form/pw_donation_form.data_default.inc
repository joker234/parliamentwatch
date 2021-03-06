<?php
/**
 * @file
 * pw_donation_form.data_default.inc
 */

/**
 * Implements hook_data_default().
 */
function pw_donation_form_data_default() {
  $export = array();

  $data_table = new stdClass();
  $data_table->disabled = FALSE; /* Edit this to true to make a default data_table disabled initially */
  $data_table->api_version = 1;
  $data_table->title = 'Webform views untersttzen sie abgeordnetenwatchde';
  $data_table->name = 'webform_views_untersttzen_sie_abgeordnetenwatchde';
  $data_table->table_schema = array(
    'description' => 'VIEW',
    'fields' => array(
      'sid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => 'The unique identifier for this submission.',
      ),
      'uid' => array(
        'type' => 'int',
        'size' => 'normal',
        'unsigned' => TRUE,
        'not null' => TRUE,
        'default' => 0,
        'description' => 'The id of the user that completed this submission.',
      ),
      'donation_frequency' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'donation_amount' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'donation_free_amount' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'donation_target' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'message' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'donation_target_council' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'node_path' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'status' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_payment_instrument' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'option_receipt' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_contribution_status' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_accordion' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_amount' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'personal_prefix' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_direct_debit_authority' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_groups' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'personal_firstname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_description' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_contribution_type' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'civicrm_date_start' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'personal_lastname' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'personal_email' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'personal_phone' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'address_street' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'address_zipcode' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_sepa_holder' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_direct_debit_holder' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'address_city' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_sepa_iban' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_direct_debit_account' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'address_country' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_sepa_bic' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_direct_debit_bank' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'option_newsletter' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'option_not_anonymous' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_tab_direct_debit' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'payment_tab_sepa' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '341',
        'not null' => FALSE,
        'description' => '',
      ),
      'submitted' => array(
        'type' => 'datetime',
        'size' => 'normal',
        'not null' => FALSE,
        'description' => '',
      ),
      'remote_addr' => array(
        'type' => 'varchar',
        'size' => 'normal',
        'length' => '128',
        'not null' => FALSE,
        'description' => 'The IP address of the user that submitted the form.',
      ),
    ),
    'name' => 'webform_views_untersttzen_sie_abgeordnetenwatchde',
  );
  $data_table->meta = array(
    'fields' => array(
      'sid' => array(),
      'uid' => array(),
      'donation_frequency' => array(),
      'donation_amount' => array(),
      'donation_free_amount' => array(),
      'donation_target' => array(),
      'message' => array(),
      'donation_target_council' => array(),
      'node_path' => array(),
      'status' => array(),
      'civicrm_payment_instrument' => array(),
      'option_receipt' => array(),
      'civicrm_contribution_status' => array(),
      'payment_accordion' => array(),
      'civicrm_amount' => array(),
      'personal_prefix' => array(),
      'civicrm_direct_debit_authority' => array(),
      'civicrm_groups' => array(),
      'personal_firstname' => array(),
      'civicrm_description' => array(),
      'civicrm_contribution_type' => array(),
      'civicrm_date_start' => array(),
      'personal_lastname' => array(),
      'personal_email' => array(),
      'personal_phone' => array(),
      'address_street' => array(),
      'address_zipcode' => array(),
      'payment_sepa_holder' => array(),
      'payment_direct_debit_holder' => array(),
      'address_city' => array(),
      'payment_sepa_iban' => array(),
      'payment_direct_debit_account' => array(),
      'address_country' => array(),
      'payment_sepa_bic' => array(),
      'payment_direct_debit_bank' => array(),
      'option_newsletter' => array(),
      'option_not_anonymous' => array(),
      'payment_tab_direct_debit' => array(),
      'payment_tab_sepa' => array(),
      'submitted' => array(),
      'remote_addr' => array(),
    ),
    'join' => array(
      'webform_submissions' => array(
        'left_field' => 'sid',
        'field' => 'sid',
        'inner_join' => '0',
      ),
    ),
  );
  $export['webform_views_untersttzen_sie_abgeordnetenwatchde'] = $data_table;

  return $export;
}
