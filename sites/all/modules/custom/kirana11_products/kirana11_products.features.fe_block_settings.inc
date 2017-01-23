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

  $export['block-category_menus'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'category_menus',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'category/*',
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
        'weight' => -28,
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

  $export['facetapi-Yngsw1HjnNXFMXxrpO0911uBW8ll4o54'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'Yngsw1HjnNXFMXxrpO0911uBW8ll4o54',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => 'products-search',
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
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Brand',
    'visibility' => 1,
  );

  $export['views--exp-category_products-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-category_products-page',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'category/*',
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
        'weight' => -27,
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

  $export['views--exp-products_search-page'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '-exp-products_search-page',
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
        'region' => 'header_search',
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

  $export['views-best_deals-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'best_deals-block_1',
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
    'visibility' => 1,
  );

  $export['views-category_banners-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'category_banners-block_1',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'category/*',
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

  $export['views-category_products-block_1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'category_products-block_1',
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
