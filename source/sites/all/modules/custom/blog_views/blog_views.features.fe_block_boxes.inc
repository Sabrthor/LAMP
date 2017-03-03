<?php
/**
 * @file
 * blog_views.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function blog_views_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog order now';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'blog_order_now';
  $fe_block_boxes->body = '<ul>
	<li><a href="/">www.kirana11.com</a></li>
	<li class="hidden-xs"><i class="fa fa-whatsapp"></i> <a href="javascript:">9341230110</a></li>
	<li class="hidden-xs"><i class="fa fa-phone"></i> <a href="javascript:">1800 123 0110</a></li>
	<li class="visible-xs"><i class="fa fa-whatsapp"></i> <a href="intent://send/9341230110#Intent;scheme=smsto;package=com.whatsapp;action=android.intent.action.SENDTO;end">9341230110</a></li>
	<li class="visible-xs"><i class="fa fa-phone"></i> <a href="tel:18001230110">1800 123 0110</a></li>
</ul>';

  $export['blog_order_now'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Blog Topics';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'blog_topics';
  $fe_block_boxes->body = '<ul>
	<li><a href="javascript:">Lorem ipsum dolor</a></li>
	<li><a href="javascript:">Lorem ipsum dolor</a></li>
	<li><a href="javascript:">Lorem ipsum dolor</a></li>
	<li><a href="javascript:">Lorem ipsum dolor</a></li>
</ul>
';

  $export['blog_topics'] = $fe_block_boxes;

  return $export;
}
