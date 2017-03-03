<?php
/**
 * @file
 * kirana11_change_password.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kirana11_change_password_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Account Settings';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'account_setting';
  $fe_block_boxes->body = '<ul class="account-setting-menu">
  <li class="account-orders"><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/orders">My Orders</a></li>
  <li class="account-change-password"><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/change-password">Change Password</a></li>
  <li class="account-address-book"><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/addressbook">Address Book</a></li>
</ul>';

  $export['account_setting'] = $fe_block_boxes;

  return $export;
}
