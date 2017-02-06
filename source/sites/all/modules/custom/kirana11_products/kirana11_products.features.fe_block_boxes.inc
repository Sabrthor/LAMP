<?php
/**
 * @file
 * kirana11_products.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function kirana11_products_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Best Deals';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'best_deals';
  $fe_block_boxes->body = 'Best Deals';

  $export['best_deals'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Category Menus';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'category_menus';
  $fe_block_boxes->body = '<?php
      print "<h2 class=\'category-menu-title\'>Category</h2>";
      print \'<div id="selected_tid">\'.arg(2).\'</div>\';
    _get_taxonomy_tree(arg(2));
?>
  ';

  $export['category_menus'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Shop by store';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'shop_by_store';
  $fe_block_boxes->body = 'Shop by store';

  $export['shop_by_store'] = $fe_block_boxes;

  return $export;
}
