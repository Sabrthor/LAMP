<?php
/**
 * @file
 * kirana11_store.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function kirana11_store_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views--exp-store_products-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-store_products-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'store-products/*',
    'roles' => array(),
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
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-banners_sliders-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'banners_sliders-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'slider',
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
    'visibility' => 1,
  );

  $export['views-banners_sliders-block_2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'banners_sliders-block_2',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'store-products/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'slider',
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

  $export['views-store_details-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'store_details-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'store_slider',
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
    'visibility' => 1,
  );

  $export['views-store_info-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'store_info-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'store-products/*',
    'roles' => array(),
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
        'weight' => -26,
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
