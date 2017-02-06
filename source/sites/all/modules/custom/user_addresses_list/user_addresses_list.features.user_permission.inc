<?php
/**
 * @file
 * user_addresses_list.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_addresses_list_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'use Rules component rules_addressbook_selection'.
  $permissions['use Rules component rules_addressbook_selection'] = array(
    'name' => 'use Rules component rules_addressbook_selection',
    'roles' => array(
      'administrator' => 'administrator',
      'customer' => 'customer',
    ),
    'module' => 'rules',
  );

  return $permissions;
}
