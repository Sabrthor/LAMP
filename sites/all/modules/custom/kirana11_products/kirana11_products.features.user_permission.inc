<?php
/**
 * @file
 * kirana11_products.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kirana11_products_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use Search Autocomplete'.
  $permissions['use Search Autocomplete'] = array(
    'name' => 'use Search Autocomplete',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'customer' => 'customer',
    ),
    'module' => 'search_autocomplete',
  );

  // Exported permission: 'use search_api_autocomplete for search_api_views_products_search'.
  $permissions['use search_api_autocomplete for search_api_views_products_search'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_products_search',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  // Exported permission: 'view any commerce_product entity of bundle product'.
  $permissions['view any commerce_product entity of bundle product'] = array(
    'name' => 'view any commerce_product entity of bundle product',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
