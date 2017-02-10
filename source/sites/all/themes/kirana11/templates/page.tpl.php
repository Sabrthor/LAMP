<?php 
  $show_landing = false;
  $show_notify = false;
  $show_location = false;
  $show_location_in_register = false;

  if (!isset($_SESSION['k11_stores_for_user'])) {
     $show_landing = true;
     $show_location = true;
     $show_location_in_register = true;
  } else {
     if (empty($_SESSION['k11_stores_for_user'])) {
         $show_landing = true;
         $show_location_in_register = true;

         if ($form_class_find == 'notfind_form' && $_SESSION['k11_stores_for_user'] != 'NO_STORES') {
            $show_location = true;
         }
     } else if($_SESSION['k11_stores_for_user'] == 'NO_STORES') {
         $show_landing = true;
         $show_notify = true;
     }
  }

  if($form_class_find != 'notfind_form') {
     $show_location = false;
  }


  if (in_array('administrator', $user->roles)) {
    $show_landing = false;
    
  }

  if(isset($_GET['uds'])){
    unset($_SESSION['k11_stores_for_user']);
    unset($_SESSION['k11_current_location']);
    drupal_goto('<front>');
  }

  if($form_class_find != 'notfind_form' || $show_landing):
?>

<!-- Landing page goes here -->
<div class="landing-page">

  <!-- Header goes here -->
  <div class="header">
    <div class="container">
      <?php
        $landing_header = block_get_blocks_by_region('landing_header');
        print render($landing_header);
      ?>
    </div>
  </div>
  <!-- Header ends here -->

  <!-- Content goes here -->
  <div id="content">
    <div class="container">

      <!-- Center content goes here -->

      <!-- Show Location goes here -->
      <?php if($show_location): ?>
        <?php global $user; if($user->uid): ?>
          <section class="col-xs-12 col-sm-8 pull-right landing-content-section landing-address">
            <h2><strong>Welcome</strong> to Kirana11.com</h2>

            <div class="find-location-container">
              <?php
                $block = module_invoke('geocoder_location_handler', 'block_view', 'find_or_select_location');
                print render($block['content']);
              ?>

              <?php
                global $user;
                if($user->uid):
                  $user_addressbook = views_embed_view('user_addressbook', 'block_1');
                  if(!empty($user_addressbook)):
                    print '<div class="user-delivery-address">';
                    print "<h4>Select your delivery address</h4>";
                    print $user_addressbook;
                    print '</div>';
                  endif;
                endif;
              ?>
            </div>
            
            <div class="bottom-login-container">
              <?php global $user; if(!$user->uid): ?>
                <p>Already registered? <a href="<?php print $base_path; ?>user/login">Login here</a></p>
                <p>Don't have an account? <a href="<?php print $base_path; ?>user/register">Sign-Up now</a></p>
              <?php endif; ?>
            </div>
          </section>
          <section class="col-xs-12 col-sm-4 landing-banner-section ">
            <p>Hi! Happy to see you back. Happy shopping </p>
            <img class="thankyou-banner" src="<?php print $base_path; ?><?php print $directory; ?>/images/Login_b_img.png" alt="landing location banner" />
          </section>
        <?php else: ?>
          <section class="col-xs-12 col-sm-6 pull-right landing-content-section">
            <h2><strong>Welcome</strong> to Kirana11.com</h2>

            <div class="find-location-container">
              <?php
                $block = module_invoke('geocoder_location_handler', 'block_view', 'find_or_select_location');
                print render($block['content']);
              ?>
            </div>
            
            <div class="bottom-login-container">
              <?php global $user; if(!$user->uid): ?>
                <p>Already registered? <a href="<?php print $base_path; ?>user/login">Login here</a></p>
                <p>Don't have an account? <a href="<?php print $base_path; ?>user/register">Sign-Up now</a></p>
              <?php endif; ?>
            </div>
          </section>
          <section class="col-xs-12 col-sm-6 landing-banner-section">
            <p>Namaskara! I'm your local shop owner, looking forward to serve you.  </p>
            <img src="<?php print $base_path; ?><?php print $directory; ?>/images/landingpage_img.png" alt="landing location banner" />
          </section>
        <?php endif; ?>
      <!-- Show Location ends here -->

      <!-- Show Notify goes here -->
      <?php elseif($show_notify): ?>
        <section class="col-xs-12 col-sm-6 pull-right landing-content-section notify">
          <h2><strong>Oops!</strong> We're arriving soon </h2>

          <!-- Message goes here -->
              <?php if ($messages): ?>
              <div id="messages-console" class="clearfix">
                <div class="row">
                  <div class="message-outer">
                    <?php print $messages; ?>
                  </div>
                </div>
              </div>
              <?php endif; ?>
              <!-- Message ends here -->

          <div class="find-location-container">
            <?php
              /* Display location goes here */
              $landing_session = block_get_blocks_by_region('landing_session');
                  print render($landing_session);
              /* Display location ends here */
              /* Notify form goes here */

              if($page['nodify_form']):
                print render($page['nodify_form']); 
              endif;
              /* Notify form ends here */
            ?>
          </div>
        </section>
        <section class="col-xs-12 col-sm-6 landing-banner-section">
        	<p>Arre re! I will start servicing your location soon </p>
          <img class="thankyou-banner" src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-thankyou-banner.png" alt="landing thankyou banner" />
        </section>
        <div class="col-xs-12">
          <iframe class="thank-you-video" width="700" height="400" src="https://www.youtube.com/embed/tblozR2uwgM" frameborder="0" allowfullscreen></iframe>
        </div>
        <!-- Recent blogs goes here -->
        <?php if ($page['recent_blogs']): ?> 
        <div id="recent_blogs" class="col-xs-12 col-sm-10 col-sm-offset-1">
          <?php print render($page['recent_blogs']); ?>
        </div>
        <!--<div class="col-xs-12 text-center read-all-button"><a href="/blog">Read All</a></div>-->
        <?php endif; ?>
        
      <!-- Show Notify goes here -->

      <!-- User Form goes here -->
      <?php else: ?>
        <section class="col-xs-12 col-sm-6 pull-right landing-content-section">
          <h2><?php if($form_class_find == 'login_form'): print "<strong>Login</strong> to your account"; elseif($form_class_find == 'register_form'): print "<strong>Create</strong> your account"; else: print "<strong>Forgot</strong> password"; endif; ?></h2>
          
          <!-- Message goes here -->
          <?php if ($messages):?>
          <div id="messages-console" class="clearfix">
            <div class="row">
              <div class="message-outer">
                <?php print $messages; ?>
              </div>
            </div>
          </div>
          <?php endif; ?>
          <!-- Message ends here -->

          <div class="find-location-container">
            <?php if($form_class_find == 'register_form'): if($show_location_in_register): ?>
              <?php
                $block = module_invoke('geocoder_location_handler', 'block_view', 'find_or_select_location');
                print render($block['content']);
              ?>
            <?php else: ?>
              <?php
                  /* Display location goes here */
                  $landing_session = block_get_blocks_by_region('landing_session');
                  print render($landing_session);
                  /* Display location ends here */
                ?>
                <?php print render($page['content']); ?>
                <?php if($form_class_find == 'register_form'): ?>
                  <p class="regiter-terms">By clicking Create Account, you acknowledge you have read and agreed to our <a href="/our-terms-and-conditions">Terms of Use</a> and <a href="/privacy-policy">Privacy Policy</a></p>
                <?php endif; ?>
            <?php endif; endif; ?>

            <?php if($form_class_find != 'register_form'): ?>
            <?php print render($page['content']); ?>
            <?php endif; ?>
            
            <?php if($form_class_find == 'login_form'): ?>
              <p class="login-register"><a href="<?php print $base_path; ?>user/password">Forgot password?</a></p>
            <?php endif; ?>

          </div>
          <div class="bottom-login-container">
            <?php if($form_class_find == 'login_form'): ?>
              <p>Don't have an account? <a href="<?php print $base_path; ?>user/register">Sign-Up now</a></p>
            <?php else: ?>
              <p>Already registered? <a href="<?php print $base_path; ?>user/login">Login here</a></p>
            <?php endif; ?>

          </div>
        </section>
        <section class="col-xs-12 col-sm-6 landing-banner-section">
          <?php if($form_class_find == 'login_form'): ?>
            <p>Hey! Good to see you again, Happy Kiranaing! </p>
            <img class="thankyou-banner" src="<?php print $base_path; ?><?php print $directory; ?>/images/Login_a_img.png" alt="landing location banner" />
          <?php elseif($form_class_find == 'forgot_form'): ?>
            <p>Forgot your password! Don't worry I will get it fixed for you</p> 
            <img src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-location-banner.png" alt="landing location banner" />
          <?php else: ?>
            <?php if($show_location_in_register): ?>
              <p>Hello! Soon You will start saving time and money</p> 
              <img src="<?php print $base_path; ?><?php print $directory; ?>/images/Signup_img.png" alt="landing location banner" />
            <?php else: ?>
              <p>Hello! Good to know you. Welcome to my shop</p> 
              <img src="<?php print $base_path; ?><?php print $directory; ?>/images/Signup_detectlocation_img.png" alt="landing location banner" />
            <?php endif; ?>
          <?php endif; ?>
        </section>
      <!-- User Form ends here -->
      <?php endif; ?>
      <!-- Center content ends here -->

    </div>
  </div>
  <!-- Content ends here -->

  <!-- Footer goes here -->
  <div class="footer">
    <?php 
      $footer_region = block_get_blocks_by_region('footer'); 
      print render($footer_region); 
    ?>
  </div>
  <!-- Footer ends here -->

</div>
<!-- Landing page ends here -->

<?php else: ?>
  <!-- Scroll to top display -->
<?php if (theme_get_setting('scrolltop_display')): ?>
<div id="toTop"><span class="glyphicon glyphicon-arrow-up"></span></div>
<?php endif; ?>

  <!-- Overlay location display -->
<div class="overlay-popup">
  <div class="col-xs-10 col-xs-offset-1 col-sm-6 col-sm-offset-3 overlay-popup-container">
    <?php
      $block = module_invoke('commerce_marketplace_kirana11_cart', 'block_view', 'check_location_change');
      
      if ($block['content'] != 'EMPTY_CART') {
        print render($block['content']);
        print "<div class='find-change-location'><h2 class='change-location-title'>Change Location</h2>";
        $block = module_invoke('geocoder_location_handler', 'block_view', 'find_or_select_location');
        print render($block['content']);
        print "</div>";

      } else {
        print "<h2 class='change-location-title'>Change Location</h2>";
        $block = module_invoke('geocoder_location_handler', 'block_view', 'find_or_select_location');
        print render($block['content']);   
      }
              
    ?>
  </div>
  <div class="col-xs-1 overlay-location-popup-close">
    <i class="fa fa-times-circle-o" aria-hidden="true"></i>
  </div>
</div>

  <!-- Overlay mobile menu display -->
<div class="visible-xs">
  <div class="overlay-popup-menu">
    <div class="col-xs-10 col-xs-offset-1 overlay-popup-menu-container">
      <div class="row">
        <div class="overlay-popup-menu-title">
          <h2>Categories</h2>
          <div class="col-xs-1 overlay-popup-menu-close">
            <span class="glyphicon glyphicon-remove-circle"></span>
          </div>
        </div>
        <?php 
          if ($page['header_menu']): 
            print render($page['header_menu']); 
          endif; 
        ?>
      </div>
    </div>

    <div class="col-xs-10 col-xs-offset-1 overlay-popup-filter-container">
      <div class="row">
        <div class="overlay-popup-filter-title">
          <h2 class="filter-categories-title">Categories</h2>
          <h2 class="filter-brands-title">Brands</h2>
          <h2 class="filter-discount-title">Discount Price</h2>
          <div class="col-xs-1 overlay-popup-menu-close">
            <span class="glyphicon glyphicon-remove-circle"></span>
          </div>
        </div>
        <?php
          $useragent = $_SERVER['HTTP_USER_AGENT'];
          if(preg_match('/(android|bb\d+|meego).+mobile|avantgo|bada\/|blackberry|blazer|compal|elaine|fennec|hiptop|iemobile|ip(hone|od)|iris|kindle|lge |maemo|midp|mmp|netfront|opera m(ob|in)i|palm( os)?|phone|p(ixi|re)\/|plucker|pocket|psp|series(4|6)0|symbian|treo|up\.(browser|link)|vodafone|wap|windows (ce|phone)|xda|xiino/i',$useragent)):

            if ($page['sidebar_first']): print render($page['sidebar_first']); endif;

            endif;
        ?>
      </div>
    </div>
  </div>
</div>

<!-- Top Header goes here -->
<div class="hidden-xs top-header">
  <div class="container">
    <div class="col-sm-5 col-sm-offset-2 col-md-4  col-md-offset-4  col-lg-offset-5  header-location">
      <div class="row">
        <?php if ($page['header_location']): print render($page['header_location']); endif; ?>
      </div>
    </div>
    <div class="col-sm-5 col-md-4 col-lg-3">
      <div class="row">
        <?php if ($page['top_header']): print render($page['top_header']); endif; ?>
      </div>
    </div>
  </div>
</div>

<!-- Header Goes Here -->
<header>
  <nav id="mainNav" class="navbar navbar-inverse" data-spy="affix" data-offset-top="100">
    <div class="container">
      <div class="row">
        <div class="col-xs-3 navbar-header">
          <a href="<?php print $front_page;?>">
            <img class="hidden-xs" src="<?php print $base_path; ?><?php print $directory; ?>/images/logo.png" alt="<?php print $site_name;?>" height="80" width="200" />
            <img class="visible-xs" src="<?php print $base_path; ?><?php print $directory; ?>/images/mobile_logo.png" alt="<?php print $site_name;?>" width="45" />
          </a>
        </div>
        <div class="col-sm-6 header-search">
          <div class="row">
            <div class="col-xs-12 mobile-header-search">
              <div class="row">
                <?php if ($page['header_search']): print render($page['header_search']); endif; ?>
              </div>
            </div>
          </div>
        </div>
        <div class="col-xs-5 visible-xs mobile-icon call-icons">
          <div class="row">
            <a href="intent://send/9341230110#Intent;scheme=smsto;package=com.whatsapp;action=android.intent.action.SENDTO;end"><i class="fa fa-whatsapp" aria-hidden="true"></i></a>
            <a href="tel:18001230110"><i class="fa fa-phone" aria-hidden="true"></i></a>
            <i class="fa fa-map-marker" class="navbar-toggle" data-toggle="collapse" data-target="#top_header_location"></i>
          </div>
        </div>
        <div class="hidden-xs col-xs-2 header-login-container">
          <div class="row">
            <?php if ($page['header_login']): 
              print render($page['header_login']); 
            endif; ?>
          </div>
        </div>
        <div class="col-xs-2 col-sm-1 text-center header-cart-container">
          <div class="row">
            <?php if ($page['header_cart']): 
              print render($page['header_cart']); 
            endif; ?>
          </div>
        </div>
        <div class="col-xs-2 visible-xs mobile-icon">
          <i class="fa fa-bars" class="navbar-toggle" data-toggle="collapse" data-target="#top_header"></i>
        </div>

        <div class="visible-xs">
          <div class="mobile-top-header collapse navbar-collapse" id="top_header">
            <?php if ($page['top_header']): 
              print render($page['top_header']); 
            endif; ?>
            <?php if ($page['header_login']): 
              print render($page['header_login']); 
            endif; ?>

          </div>
          <div class="mobile-header-location collapse navbar-collapse" id="top_header_location">
            <?php if ($page['header_location']): 
              print render($page['header_location']); 
            endif; ?>
          </div>
        </div>
      </div>
      <div class="row hidden-xs">
        <?php if ($page['header_menu']): 
          print render($page['header_menu']); 
        endif; ?>
      </div>
    </div>
  </nav>

</header>

<!-- Content goes here -->
<div id="wrapper">
  <!-- Content goes here -->
  <div id="content">
    <div id="main-content">
      <div class="container">
        <div class="row">

          <!-- Slider goes here -->
          <?php if ($page['slider']): ?> 
          <div id="banner" class="col-xs-12">
            <div class="row">
              <?php print render($page['slider']); ?>
            </div>
          </div>
          <?php endif; ?>
          <!-- Slider ends here -->

          <div class="col-xs-12 visible-xs mobile-category-section">
            <div class="mobile-menu-title">
            	<i class="fa fa-filter"></i> 
            	<a class="mobile-menu menu-categories">Categories</a>
            	<a class="mobile-menu-filter filter-categories">Categories</a>
            	<a class="mobile-menu-filter filter-brands">Brands</a>
            	<a class="mobile-menu-filter filter-discount">Discount Price</a>
            </div>
            <!-- <div class="mobile-sub-category"><ul></ul></div> -->
          </div>

          <!-- Store and Product Slider goes here -->
          <div class="col-xs-12 col-sm-11 front-content-box">
            <div class="row">

              <!-- Store details goes here -->
                <div class="col-xs-12 col-sm-4">
                  <div class="store_slider">
                    <?php if ($page['store_slider']):?>
                    <?php print render($page['store_slider']); ?>
                    <?php endif; ?>
                  </div>
                </div>
              <!-- Store details ends here -->

              <!-- Best Deals details goes here -->
                <div class="col-xs-12 col-sm-8">
                  <div class="row">
                  	<?php if ($page['product_slider']):?>
                  		<h2><?php print "Best Deals from ".$_SESSION['k11_current_location'];?></h2>
                  		<div class="product_slider">
                  			<?php print render($page['product_slider']); ?>
	                    </div>
                  	<?php endif; ?>
                  </div>
                </div>
              <!-- Best Deals details ends here -->

            </div>
          </div>
          <!-- Store and Product Slider ends here -->

          <!-- Breadcrumb goes here -->
            <?php if ($breadcrumb): ?>
            <div id="breadcrumb"><?php print render($breadcrumb); ?></div>
            <?php endif; ?>
            <!-- Breadcrumb ends here -->

          <!-- Message goes here -->
          <?php if ($messages):?>
          <div id="messages-console" class="clearfix">
            <div class="row">
              <div class="col-md-12">
                <?php print $messages; ?>
              </div>
            </div>
          </div>
          <?php endif; ?>
          <!-- Message ends here -->

          <!-- Sidebar left goes here -->
          <?php if ($page['sidebar_first']):?>
          <aside class="<?php print $sidebar_first_grid_class; ?>">
            <div class="row">
              <section id="sidebar-first" class="sidebar clearfix">
                <?php print render($page['sidebar_first']); ?>
              </section>
            </div>
          </aside>
          <?php endif; ?>
          <!-- Sidebar left ends here -->

          <!-- Page content goes here -->
          <section class="<?php print $main_grid_class; ?>">

            <!-- Title goes here -->
            <?php print render($title_prefix); ?>
            <?php if ($title): if (!drupal_is_front_page()): ?><h1 class="page-title"><?php print $title; ?></h1><?php endif; endif; ?>
            <?php print render($title_suffix); ?>
            <!-- Title ends here -->

            <!-- Tabs goes here -->
            <?php if ($tabs): ?>
            <div class="tabs"><?php print render($tabs); ?></div>
            <?php endif; ?>
            <!-- Tabs ends here -->

            <!-- Action links goes here -->
            <?php if ($action_links): ?>
            <ul class="action-links"><?php print render($action_links); ?></ul>
            <?php endif; ?>
            <!-- Action links ends here -->

            <!-- Page content goes here -->
            <?php if (!drupal_is_front_page()): ?>
              <?php print render($page['content']); ?>
            <?php endif; ?>
            <!-- Page content ends here -->
          </section>
          <!-- Page content ends here -->

          <!-- Sidebar right goes here -->
          <?php if ($page['sidebar_second']):?>
          <aside class="<?php print $sidebar_second_grid_class; ?>">
            <!--#sidebar-second-->
            <section id="sidebar-second" class="sidebar clearfix">
              <?php print render($page['sidebar_second']); ?>
            </section>
            <!--EOF:#sidebar-second-->
          </aside>
          <?php endif; ?>
          <!-- Sidebar right ends here -->

          <!-- Top Brands and Partners goes here -->
          <?php if ($page['partners_brands']): ?> 
          <div id="partners_brands" class="col-xs-12 col-sm-11 front-content-box">
            <?php print render($page['partners_brands']); ?>
          </div>
          <?php endif; ?>
          <!-- Top Brands and Partners goes here -->

          <!-- Recent blogs goes here -->
          <?php if ($page['recent_blogs']): ?> 
          <div id="recent_blogs" class="col-xs-12 col-sm-11 front-content-box">
            <?php print render($page['recent_blogs']); ?>
          </div>
          <!--<div class="col-xs-12 text-center read-all-button"><a href="/blog">Read All</a></div>-->
          <?php endif; ?>
          <!-- Recent blogs ends here -->

        </div><!-- row ends here -->
      </div><!-- container ends here -->
    </div><!-- main-content ends here -->
  </div><!-- content ends here -->
</div><!-- wrapper ends here -->

<!-- Footer goes here -->
<!-- Top Footer goes here -->
<footer id="top-footer" class="clearfix">
    <div class="container">
        <!-- #topfooter-inside -->
        <div id="top-footer-inside">
            <div class="row panel-group" id="accordion"">
                <div class="col-xs-12 col-sm-2 panel">
                	<div class="mobile-footer-tab visible-xs" data-toggle="collapse" data-parent="#accordion" data-target="#mobile-footer-first">About Us</div>
                  <div class="top-footer-first collapse" id="mobile-footer-first">
                    <?php if ($page['top_footer_first']):?>
                    <?php print render($page['top_footer_first']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-12 col-sm-2 panel">
                	<div class="mobile-footer-tab visible-xs" data-toggle="collapse" data-parent="#accordion" data-target="#mobile-footer-second">Delivery Location</div>
                  <div class="top-footer-second collapse" id="mobile-footer-second">
                    <?php if ($page['top_footer_second']):?>
                    <?php print render($page['top_footer_second']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-12 col-sm-2 panel">
                	<div class="mobile-footer-tab visible-xs" data-toggle="collapse" data-parent="#accordion" data-target="#mobile-footer-third">Payment Options</div>
                  <div class="top-footer-third collapse" id="mobile-footer-third">
                    <?php if ($page['top_footer_third']):?>
                    <?php print render($page['top_footer_third']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-12 col-sm-2 panel">
                	<div class="mobile-footer-tab visible-xs" data-toggle="collapse" data-parent="#accordion" data-target="#mobile-footer-fourth">Help</div>
                  <div class="top-footer-fourth collapse" id="mobile-footer-fourth">
                    <?php if ($page['top_footer_fourth']):?>
                    <?php print render($page['top_footer_fourth']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-12 col-sm-4 panel">
                	<div class="mobile-footer-tab visible-xs" data-toggle="collapse" data-parent="#accordion" data-target="#mobile-footer-fifth">Connect with Us</div>
                  <div class="top-footer-fifth collapse" id="mobile-footer-fifth">
                    <?php if ($page['top_footer_fifth']):?>
                    <?php print render($page['top_footer_fifth']); ?>
                    <?php endif; ?>
                  </div>
                </div>
            </div>
        </div>
        <!-- EOF: #topfooter-inside -->
    </div>
</footer>
<!-- Footer content goes here -->
<footer id="bottom-footer" class="clearfix">
  <div class="container">
    <!-- #subfooter-inside -->
    <div id="bottom-footer-inside" class="clearfix">
      <div class="row">
        <div class="col-md-12">
          <!-- #subfooter-left -->
          <div class="footer">
            <?php if ($page['footer']):?>
            <?php print render($page['footer']); ?>
            <?php endif; ?>
          </div>
          <!-- EOF: #subfooter-left -->
        </div>
      </div>
    </div>
    <!-- EOF: #subfooter-inside -->
  </div>
</footer>
<?php endif; ?>