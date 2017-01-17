<?php
/**
 * @file
 * kirana11_products.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kirana11_products_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-best_deals-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'best_deals-block_1',
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
        'region' => 'product_slider',
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
