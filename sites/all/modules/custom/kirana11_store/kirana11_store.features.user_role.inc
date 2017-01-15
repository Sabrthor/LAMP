<?php
/**
 * @file
 * kirana11_store.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function kirana11_store_user_default_roles() {
  $roles = array();

  // Exported role: merchant.
  $roles['merchant'] = array(
    'name' => 'merchant',
    'weight' => 1,
  );

  return $roles;
}
