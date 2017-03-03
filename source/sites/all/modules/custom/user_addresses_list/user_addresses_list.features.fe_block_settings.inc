<?php
/**
 * @file
 * user_addresses_list.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function user_addresses_list_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-user_addressbook-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user_addressbook-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => '',
        'status' => 0,
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
