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
				<section class="col-sm-8 col-sm-offset-2 landing-section">
					<h2><strong>Welcome</strong> to Kirana11.com</h2>
					<h3>Shop from your friendly neighbourhood Kirana store <strong>online!</strong></h3>

					<div class="find-location-container">
						<?php
							$block = module_invoke('geocoder_location_handler', 'block_view', 'find_or_select_location');
							print render($block['content']);
            ?>
            <div class="user-delivery-address">
               <?php
                global $user;
                if($user->uid):
                	print "<h4>Select your delivery address</h4>";
                  print views_embed_view('user_addressbook', 'block_1');
                endif;?>
           </div>
					</div>
					
					<div class="bottom-login-container">
						<?php global $user; if(!$user->uid): ?>
							<p>Already registered? <a href="<?php print $base_path; ?>user/login">Login here</a></p>
							<p>Don't have an account? <a href="<?php print $base_path; ?>user/register">Sign-Up now</a></p>
						<?php endif; ?>
					</div>
				</section>
			<!-- Show Location ends here -->

			<!-- Show Notify goes here -->
			<?php elseif($show_notify): ?>
				<section class="col-sm-8 col-sm-offset-2 landing-section">
					<h2><strong>Oops!</strong> we're not there yet</h2>

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
						<p>Already have an account? <a href="<?php print $base_path; ?>user/login">Sign in</a></p>
					</div>
				</section>
			<!-- Show Notify goes here -->

			<!-- User Form goes here -->
			<?php else: ?>
				<section class="col-sm-8 col-sm-offset-2 landing-section">
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
									<p class="regiter-terms">By clicking Create Account, you acknowledge you have read and agreed to our <a href="javascript:"">Terms of Use</a> and <a href="javascript:">Privacy Policy</a></p>
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
			<!-- User Form ends here -->
			<?php endif; ?>
			<!-- Center content ends here -->

			<!-- Landing banner goes here -->
			<div class="landing-banner">
				<img src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-banner.png" alt="landing banner" />
			</div>
			<!-- Landing banner ends here -->

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

<!-- Top Header goes here -->
<div class="top-header">
	<div class="container">
		<?php if ($page['top_header']): print render($page['top_header']); endif; ?>
	</div>
</div>

<!-- Header Goes Here -->
<header>
	<nav id="mainNav" class="navbar navbar-inverse" data-spy="affix" data-offset-top="100">
		<div class="container">
			<div class="row">
				<div class="col-sm-3 navbar-header">
	        <a href="<?php print $front_page;?>">
						<img src="<?php print $base_path; ?><?php print $directory; ?>/images/logo.png" alt="<?php print $site_name;?>" height="80" width="200" />
					</a>
	      </div>
	      <div class="col-sm-6 header-search">
	      	<?php if ($page['header_search']): 
	      		print render($page['header_search']); 
	      	endif; ?>
	      </div>
	      <div class="col-sm-2 header-login-container">
	      	<div class="row">
		      	<?php if ($page['header_login']): 
		      		print render($page['header_login']); 
		      	endif; ?>
	      	</div>
	      </div>
	      <div class="col-sm-1 text-center header-cart-container">
	      	<div class="row">
		      	<?php if ($page['header_cart']): 
		      		print render($page['header_cart']); 
		      	endif; ?>
		      </div>
	      </div>
	    </div>
		</div>
	</nav>

	<!-- Main menu goes here -->
	<?php if ($main_menu): ?>
		<div id="main-menu">
			<?php print theme('links', $main_menu); ?>
		</div>
	<?php endif; ?>

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

					<!-- Store and Product Slider goes here -->
					<div class="col-xs-12 col-sm-10 col-sm-offset-1">
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
										<div class="product_slider">
											<?php if ($page['product_slider']):?>
		                  <?php print render($page['product_slider']); ?>
		                  <?php endif; ?>
										</div>
									</div>
								</div>
							<!-- Best Deals details ends here -->

						</div>
					</div>
					<!-- Store and Product Slider ends here -->

					<!-- Top Brands and Partners goes here -->
					<?php if ($page['partners_brands']): ?> 
					<div id="partners_brands" class="col-xs-12 col-sm-10 col-sm-offset-1">
						<?php print render($page['partners_brands']); ?>
					</div>
					<?php endif; ?>
					<!-- Top Brands and Partners goes here -->

					<!-- Recent blogs goes here -->
					<?php if ($page['recent_blogs']): ?> 
					<div id="recent_blogs" class="col-xs-12 col-sm-10 col-sm-offset-1">
						<?php print render($page['recent_blogs']); ?>
					</div>
					<div class="col-xs-12 text-center read-all-button"><a href="/blog">Read All</a></div>
					<?php endif; ?>
					<!-- Recent blogs ends here -->

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
		        <!-- Breadcrumb goes here -->
		        <?php if ($breadcrumb): ?>
						<div id="breadcrumb"><?php print render($breadcrumb); ?></div>
						<?php endif; ?>
		        <!-- Breadcrumb ends here -->

		        <!-- Title goes here -->
		        <?php print render($title_prefix); ?>
						<?php if ($title): if (!drupal_is_front_page()): ?><h1><?php print $title; ?></h1><?php endif; endif; ?>
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
        <div id="top-footer-inside" class="clearfix">
            <div class="row">
                <div class="col-xs-6 col-sm-2">
                  <div class="top-footer-first">
                    <?php if ($page['top_footer_first']):?>
                    <?php print render($page['top_footer_first']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-6 col-sm-2">
                  <div class="top-footer-second">
                    <?php if ($page['top_footer_second']):?>
                    <?php print render($page['top_footer_second']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-6 col-sm-2">
                  <div class="top-footer-third">
                    <?php if ($page['top_footer_third']):?>
                    <?php print render($page['top_footer_third']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-6 col-sm-2">
                  <div class="top-footer-fourth">
                    <?php if ($page['top_footer_fourth']):?>
                    <?php print render($page['top_footer_fourth']); ?>
                    <?php endif; ?>
                  </div>
                </div>
                <div class="col-xs-12 col-sm-4">
                  <div class="top-footer-fifth">
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