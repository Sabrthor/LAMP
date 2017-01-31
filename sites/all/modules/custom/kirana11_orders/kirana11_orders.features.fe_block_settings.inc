<?php
/**
 * @file
 * kirana11_orders.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kirana11_orders_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['quicktabs-my_orders'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'my_orders',
    'module' => 'quicktabs',
    'node_types' => array(),
    'pages' => 'user/*/my-orders',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'content',
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
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
