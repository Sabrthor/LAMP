<?php
/**
 * @file
 * kirana11_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kirana11_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kirana11_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kirana11_products_node_info() {
  $items = array(
    'category_banners' => array(
      'name' => t('Category Banners'),
      'base' => 'node_content',
      'description' => t('Category Banners'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
