<?php
/**
 * @file
 * custom_blocks.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function custom_blocks_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Best Deals';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'best_deals';
  $fe_block_boxes->body = 'Best Deals';

  $export['best_deals'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shop by store';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'shop_by_store';
  $fe_block_boxes->body = 'Shop by store';

  $export['shop_by_store'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top header block goes here';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'top_header';
  $fe_block_boxes->body = '<ul class="nav navbar-nav navbar-right">
			<li>
				<a href="javascript:" class="whatsapp-link hidden-xs"><i class="fa fa-whatsapp" aria-hidden="true"></i><span >Order on <b>Whatsapp</b> <strong>9341230110</strong></span></a>
				<a href="intent://send/9341230110#Intent;scheme=smsto;package=com.whatsapp;action=android.intent.action.SENDTO;end" class="whatsapp-link visible-xs"><i class="fa fa-whatsapp" aria-hidden="true"></i><span >Order on <b>Whatsapp</b> <strong>9341230110</strong></span></a>
			</li>
			<li>
				<a href="javascript:" class="hidden-xs"><i class="fa fa-phone" aria-hidden="true"></i><span>Order on <b>Call</b> <strong>1800 123 0110</strong></span></a>
				<a href="tel:18001230110" class="visible-xs"><i class="fa fa-phone" aria-hidden="true"></i><span>Order on <b>Call</b> <strong>1800 123 0110</strong></span></a>
			</li>
			<?php global $user; if($user->uid): $user_full = user_load($user->uid);?>
				<li class="dropdown">
	          <a href="#" data-toggle="dropdown" class="dropdown-toggle hidden-xs"><i class="fa fa-user-o" aria-hidden="true"></i>
		          <span>
								<?php if(isset($user_full->field_user_name[\'und\'])){
									$user_name = $user_full->field_user_name[\'und\'][0][\'value\'];
								}else{
									$user_name = \'My Account\';
								}?>
			         	<?php print $user_name; ?>
		         	</span>
	         		<i class="fa fa-angle-down" aria-hidden="true"></i>
	         	</a>
	          <ul class="dropdown-menu">
	              <li class="visible-xs"><a href="javascript:"><span class="glyphicon glyphicon-user"></span> <?php print $user_name; ?></a></li>
	              <li class="visible-xs divider"></li>
	              <li><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/edit">Account Settings</a></li>
	              <li class="divider"></li>
	              <li><a href="<?php print base_path(); ?>user/<?php print $GLOBALS[\'user\']->uid; ?>/orders">Manage Order</a></li>
	              <li class="divider"></li>
	              <li><a href="<?php print base_path(); ?>user/logout">Sign Out</a></li>
	          </ul>
	      </li>
			<?php else: ?>
				<li>
					<?php
            if(current_path()!=\'user/register\' && current_path()!=\'user/login\' && current_path()!=\'user/password\'){
              $current_url = array(\'query\' => array(\'destination\' => current_path()), \'attributes\' => array(\'title\' => t(\'Sign Up\')),\'html\' => TRUE);
            }
            else{
              $current_url = array(\'html\' => TRUE);
            }
            $registerlink = l(\'<i class="fa fa-user-plus" aria-hidden="true"></i><span>\'.t(\'Sign Up\').\'</span>\', \'user/register\', $current_url);
            print $registerlink;
          ?>
				</li>
      	<li>
      		<?php
            if(current_path()!=\'user/register\' && current_path()!=\'user/login\' && current_path()!=\'user/password\'){
              $current_url = array(\'query\' => array(\'destination\' => current_path()), \'attributes\' => array(\'title\' => t(\'Login\')),\'html\' => TRUE);
            }
            else{
              $current_url = array(\'html\' => TRUE);
            }
            $loginlink = l(\'<i class="fa fa-user-o" aria-hidden="true"></i><span>\'.t(\'Login\').\'</span>\', \'user/login\', $current_url);
            print $loginlink;
          ?>
      	</li>
			<?php endif; ?>
    </ul>';

  $export['top_header'] = $fe_block_boxes;

  return $export;
}
