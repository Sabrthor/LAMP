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
			<section class="col-sm-6 landing-banner-section">
				<p>Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. </p>
				<img class="thankyou-banner" src="<?php print $base_path; ?><?php print $directory; ?>/images/landing-thankyou-banner.png" alt="landing thankyou banner" />
			</section>
			<section class="col-sm-6 landing-section">
				<div class="thankyou-content">
					<h2>Thank You</h2>
					<p>We will notify you once we start serving in your area.</p>
				</div>
			</section>
			 <div class="col-xs-12">
			    <iframe class="thank-you-video" width="500" height="315" src="https://www.youtube.com/embed/tblozR2uwgM" frameborder="0" allowfullscreen></iframe>
			</div>
			<!-- Recent blogs goes here -->
			<?php if ($page['recent_blogs']): ?> 
			<div id="recent_blogs" class="col-xs-12 col-sm-10 col-sm-offset-1">
				<?php print render($page['recent_blogs']); ?>
			</div>
			<div class="col-xs-12 text-center read-all-button"><a href="/blog">Read All</a></div>
			<?php endif; ?>
			<!-- Recent blogs ends here -->
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