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
  $fe_block_boxes->info = 'Display session location front page';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'display_session_location';
  $fe_block_boxes->body = '<?php $show_notify_block = false; if(isset($_SESSION[\'k11_stores_for_user\']) && $_SESSION[\'k11_stores_for_user\'] == \'NO_STORES\') { $show_notify_block = true; } ?>
<div class="col-xs-12 display-location-container">
    <div class="col-xs-12 display-location-box">
        <p>You\'ve selected</p>
        <h3><?php if (isset($_SESSION[\'k11_current_location\'])) { print $_SESSION[\'k11_current_location\']; } ?></h3>
        <p><i class="fa fa-pencil-square-o"></i> <a class="edit-location-link" href="javascript:">Change your location</a></p>
    </div>
    <?php if($show_notify_block): ?>
    <div class="col-xs-12">
        <div class="row">
            <p>Sorry, we are not currently serving in your area.</p>
            <p>Please provide your details, we will give you a shout once we arrive.</p>
        </div>
    </div>
    <?php endif; ?>
</div>';

  $export['display_session_location'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Bottom footer content';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'footer_bottom';
  $fe_block_boxes->body = '<p>© 2017 Kirana11. All rights reserved.</p>';

  $export['footer_bottom'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Connect with Us';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'footer_fifth_first';
  $fe_block_boxes->body = '<ul class="footer-social-media-buttons">
<li><a href="javascript"><i class="fa fa-facebook"></i></a></li>
<li><a href="javascript"><i class="fa fa-twitter"></i></a></li>
<li><a href="javascript"><i class="fa fa-google-plus"></i></a></li>
<li><a href="javascript"><i class="fa fa-youtube-play"></a></i>
</li>
</ul>';

  $export['footer_fifth_first'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Subscribe';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'footer_fifth_second';
  $fe_block_boxes->body = '<div class="footer-subscribe">
<h2>Subscribe to newsletter</h2>
<div class="footer-subscribe-form">
<input type="text" name="footer-subscribe-input" class="footer-subscribe-input" id="footer-subscribe-input" placeholder="Enter your email">
<input type="submit" class="subscribe-button" value="Subscribe">
</div>
</div>';

  $export['footer_fifth_second'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Menu';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'footer_first';
  $fe_block_boxes->body = '<p><img alt="<?php print t(\'Home\'); ?>" class="footer-logo" src="<?php print base_path() . path_to_theme(); ?>/images/logo.png" /></p>

<ul>
	<li><a href="javascript:">About Us</a></li>
	<li><a href="javascript:">Policies</a></li>
	<li><a href="javascript:">Partner with Us</a></li>
	<li><a href="javascript:">Blogs</a></li>
	<li><a href="javascript:">Terms and Conditions</a></li>
</ul>';

  $export['footer_first'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Help';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'footer_fourth';
  $fe_block_boxes->body = '<ul>
	<li>FAQs</li>
	<li>Contact Us</li>
	<li class="hidden-xs"><i class="fa fa-whatsapp"></i> <a href="javascript:">9341230110</a></li>
	<li class="hidden-xs"><i class="fa fa-phone"></i> <a href="javascript:">1800 123 0110</a></li>
	<li class="visible-xs"><i class="fa fa-whatsapp"></i> <a href="intent://send/9341230110#Intent;scheme=smsto;package=com.whatsapp;action=android.intent.action.SENDTO;end">9341230110</a></li>
	<li class="visible-xs"><i class="fa fa-phone"></i> <a href="tel:18001230110">1800 123 0110</a></li>
</ul>';

  $export['footer_fourth'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Delivery Locations';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'footer_second';
  $fe_block_boxes->body = '<ul>
	<li><a href="javascript:">Marathalli</a></li>
	<li><a href="javascript:">HSR Layout</a></li>
	<li><a href="javascript:">Koramangala</a></li>
	<li><a href="javascript:">Indira Nagar</a></li>
	<li><a href="javascript:">Arekere</a></li>
	<li><a class="footer-more-links" href="javascript:">+ more</a></li>
</ul>';

  $export['footer_second'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Footer Payment Options';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'footer_third';
  $fe_block_boxes->body = '<ul>
	<li><img src="<?php print base_path() . path_to_theme(); ?>/images/visa-master-card.jpg" alt="Visa master card" /></li>
	<li><img src="<?php print base_path() . path_to_theme(); ?>/images/payumoney.jpg" alt="payumoney" /></li>
	<li><img src="<?php print base_path() . path_to_theme(); ?>/images/paytm.jpg"  alt="paytm" /></li>
	<li>Cash on Delivery</li>
</ul>';

  $export['footer_third'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Landing Page Header';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'landing_header';
  $fe_block_boxes->body = '<div class="row">
					<div class="col-xs-12 col-sm-6 header-left"> 
						<a href="<?php print base_path(); ?>"><img src="<?php print base_path() . path_to_theme(); ?>/images/logo.png" alt="Logo" /></a>
					</div>
					<div class="col-xs-12 col-sm-6 header-right">
						<div class="row">
							<ul>
								<li>
									<a href="javascript:" class="whatsapp-link hidden-xs"><i class="fa fa-whatsapp" aria-hidden="true"></i><span >Order on <b>Whatsapp</b> <strong>9341230110</strong></span></a>
									<a href="intent://send/9341230110#Intent;scheme=smsto;package=com.whatsapp;action=android.intent.action.SENDTO;end" class="whatsapp-link visible-xs"><i class="fa fa-whatsapp" aria-hidden="true"></i><span >Order on <b>Whatsapp</b> <strong>9341230110</strong></span></a>
								</li>
								<li>
									<a href="javascript:" class="hidden-xs"><i class="fa fa-phone" aria-hidden="true"></i><span>Order on <b>Call</b> <strong>1800 123 0110</strong></span></a>
									<a href="tel:18001230110" class="visible-xs"><i class="fa fa-phone" aria-hidden="true"></i><span>Order on <b>Call</b> <strong>1800 123 0110</strong></span></a>
								</li>
							</ul>
						</div>
					</div>
				</div>';

  $export['landing_header'] = $fe_block_boxes;

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
