<?php
/**
 * @file
 * kirana11_change_password.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kirana11_change_password_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-account_setting'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'account_setting',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'user/*',
    'roles' => array(
      'authenticated user' => 2,
      'customer' => 5,
    ),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'kirana11',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Account Settings',
    'visibility' => 1,
  );

  return $export;
}
