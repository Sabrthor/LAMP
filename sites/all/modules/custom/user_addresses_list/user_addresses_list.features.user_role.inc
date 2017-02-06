<?php
/**
 * @file
 * user_addresses_list.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_addresses_list_user_default_roles() {
  $roles = array();

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => 3,
  );

  return $roles;
}
