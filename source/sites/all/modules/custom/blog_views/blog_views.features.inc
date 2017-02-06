<?php
/**
 * @file
 * blog_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "slick" && $api == "slick_default_preset") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
