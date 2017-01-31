<?php
/**
 * @file
 * kirana11_orders.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function kirana11_orders_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any commerce_order entity'.
  $permissions['view any commerce_order entity'] = array(
    'name' => 'view any commerce_order entity',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'commerce_order',
  );

  return $permissions;
}
