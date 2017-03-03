<?php
/**
 * @file
 * kirana11_store.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kirana11_store_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function kirana11_store_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function kirana11_store_node_info() {
  $items = array(
    'store_banners' => array(
      'name' => t('Store Banners'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
