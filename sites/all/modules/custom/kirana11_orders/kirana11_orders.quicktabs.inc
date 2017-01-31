<?php
/**
 * @file
 * kirana11_orders.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function kirana11_orders_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'orders';
  $quicktabs->ajax = 1;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'My Orders';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'commerce_user_orders',
      'display' => 'page_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'Open Orders',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'commerce_user_orders',
      'display' => 'page_2',
      'args' => '',
      'use_title' => 0,
      'title' => 'Closed Orders',
      'weight' => '-99',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('Closed Orders');
  t('My Orders');
  t('Open Orders');

  $export['orders'] = $quicktabs;

  return $export;
}
