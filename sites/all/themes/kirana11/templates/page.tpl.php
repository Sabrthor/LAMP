<?php /*$_SESSION['k11_stores_for_user'] = 'test'; unset($_SESSION['k11_stores_for_user']);*/ if($form_class_find != 'notfind_form' || empty($_SESSION['k11_stores_for_user'])): ?>
	<div class="landing-page">
		<!-- Top Header goes here -->
		<div class="header">
			<div class="container">
				<div class="row">
					<div class="col-xs-6 header-left"> 
						<a href="<?php print $front_page;?>"><img src="<?php print $base_path; ?><?php print $directory; ?>/images/logo.png" alt="Logo" /></a>
					</div>
					<div class="col-xs-6 header-right">
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
				</div>
			</div>
		</div>

		<!-- Content goes here -->
		<div id="content">
			<div class="container">
				<!-- Page content goes here -->
				<?php if(empty($_SESSION['k11_stores_for_user']) && $form_class_find != 'login_form' && $form_class_find != 'register_form' && $form_class_find != 'forgot_form'): ?>
				<section class="col-sm-8 col-sm-offset-2 landing-section">
					<h2>Welcome to Kirana11.com</h2>
					<h3>Shop from your friendly neighbourhood kirana store online</h3>
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
				<?php else: ?>
					<section class="col-sm-8 col-sm-offset-2 landing-section">
					<h2><?php if($form_class_find == 'login_form'): print "Login to your account"; elseif($form_class_find == 'register_form'): print "Create your account"; else: print "Forgot Password"; endif; ?></h2>
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
					<div class="find-location-container">
						<?php print render($page['content']); ?>
						
						<?php if($form_class_find == 'register_form'): ?>
							<p class="regiter-terms">By clicking Create Account, you acknowledge you have read and agreed to our <a href="javascript:"">Terms of Use</a> and <a href="javascript:">Privacy Policy</a></p>
						<?php elseif($form_class_find == 'login_form'): ?>
							<p class="login-register"><a href="<?php print $base_path; ?>user/password">Forgot Password?</a></p>
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
				<?php endif; ?>
				<div class="landing-banner">
					<img src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-banner.png" alt="landing banner" />
				</div>
			</div><!-- container ends -->
		</div>

		<!-- Footer goes here -->
		<div class="footer">
			<p>© 2017 Kirana11. All rights reserved.</p>
		</div>
	</div>
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
				<div class="navbar-header">
	        <a href="<?php print $front_page;?>">
						<img src="<?php print $base_path; ?><?php print $directory; ?>/images/logo.png" alt="<?php print $site_name;?>" height="80" width="200" />
					</a>
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
					<div class="col-xs-12">
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
									<div class="product_slider">
										<?php if ($page['product_slider']):?>
	                  <?php print render($page['product_slider']); ?>
	                  <?php endif; ?>
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
						<?php if ($title): ?><h1><?php print $title; ?></h1><?php endif; ?>
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
						<?php print render($page['content']); ?>
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