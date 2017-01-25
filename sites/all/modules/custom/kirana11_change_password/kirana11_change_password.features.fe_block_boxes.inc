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

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Header login';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'header_login';
  $fe_block_boxes->body = '<div>
	<ul>
		<?php global $user; if($user->uid): $user_full = user_load($user->uid);?>
		<li class="dropdown">
		<i class="fa fa-user"></i>
			<a href="#" data-toggle="dropdown" class="dropdown-toggle hidden-xs"></i>
				<span>
					<?php if(isset($user_full->field_user_name[\'und\'])){
						$user_name = $user_full->field_user_name[\'und\'][0][\'value\'];
					}else{
						$user_name = \'My Account\';
					}?>
					<?php print $user_name; ?>
				</span>
			</a>
			<ul class="dropdown-menu">
				<li class="visible-xs"><a href="javascript:"><span class="glyphicon glyphicon-user"></span> <?php print $user_name; ?></a></li>
				<li class="visible-xs divider"></li>
				<li><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/orders">Manage Orders</a></li>
        <li class="divider"></li>
        <li><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/change-password">Change Password</a></li>
        <li class="divider"></li>
        <li><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/addressbook">Address Book</a></li>
				<li class="divider"></li>
				<li><a href="<?php print base_path(); ?>user/logout">Sign Out</a></li>
			</ul>
		</li>
		<?php else: ?>
                <li>
			<?php if(current_path()!=\'user/register\' && current_path()!=\'user/login\' && current_path()!=\'user/password\'){
				$current_url = array(\'query\' => array(\'destination\' => current_path()), \'attributes\' => array(\'title\' => t(\'Login\')),\'html\' => TRUE);
			}
			else{
				$current_url = array(\'html\' => TRUE);
			}
			$loginlink = l(\'<span><i class="fa fa-user"></i>\'.t(\'Login\').\'</span>\', \'user/login\', $current_url);
			print $loginlink;
			?>
		</li>
		<li>
			<?php
			if(current_path()!=\'user/register\' && current_path()!=\'user/login\' && current_path()!=\'user/password\'){
				$current_url = array(\'query\' => array(\'destination\' => current_path()), \'attributes\' => array(\'title\' => t(\'Sign Up\')),\'html\' => TRUE);
			}
			else{
				$current_url = array(\'html\' => TRUE);
			}
			$registerlink = l(\'<span><i class="fa fa-user-plus"></i>\'.t(\'Sign Up\').\'</span>\', \'user/register\', $current_url);
			print $registerlink;
			?>
		</li>
		<?php endif; ?>
	</ul>
</div>';

  $export['header_login'] = $fe_block_boxes;

  return $export;
}
