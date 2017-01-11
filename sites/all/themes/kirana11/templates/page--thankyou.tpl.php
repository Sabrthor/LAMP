<div class="landing-page">
	<!-- Top Header goes here -->
	<div class="header">
		<div class="container">
			<?php
				$landing_header = block_get_blocks_by_region('landing_header');
        		print render($landing_header);
			?>
		</div>
	</div>

	<!-- Content goes here -->
	<div id="content">
		<div class="container">
			<div class="col-xs-12 landing-thank-you-section">
			    <p><i class="fa fa-check-square"></i></p>
			    <h2>Thank You</h2>
			    <p>We will notify you once we start serving in your area</p>
			    <h4 class="heading-line">Discover Kirana11.com</h4>
			    <iframe class="thank-you-video" width="520" height="315" src="https://www.youtube.com/embed/tblozR2uwgM" frameborder="0" allowfullscreen></iframe>
			</div>
			<div class="landing-banner">
				<img src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-banner.png" alt="landing banner" />
			</div>
		</div>
	</div>

	<!-- Footer goes here -->
	<div class="footer">
		<?php
			$footer_region = block_get_blocks_by_region('footer'); 
      print render($footer_region); 
		?>
	</div>
</div>