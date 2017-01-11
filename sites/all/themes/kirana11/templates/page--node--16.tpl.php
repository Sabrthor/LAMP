<div class="landing-page">
	<!-- Top Header goes here -->
	<div class="header">
		<div class="container">
			<?php
				$block = module_invoke('block', 'block_view', '12');
				print render($block['content']);
			?>
		</div>
	</div>

	<!-- Content goes here -->
	<div id="content">
		<div class="container">
			<div class="col-xs-12 landing-thank-you-section">
			    <p><i class="fa fa-check-square"></i></p>
			    <h2>Thank You</h2>
			    <p>We will notify you once we start serving i your area</p>
			    <h4 class="heading-line">Discover Kirana11.com</h4>
			    <img src="<?php print $base_path; ?><?php print $directory; ?>/images/video.jpg" alt="video" />
			</div>
			<div class="landing-banner">
				<img src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-banner.png" alt="landing banner" />
			</div>
		</div>
	</div>

	<!-- Footer goes here -->
	<div class="footer">
		<?php
			$block = module_invoke('block', 'block_view', '2');
			print render($block['content']);
		?>
	</div>
</div>