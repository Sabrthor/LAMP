<?php
/**
 * @file
 * kirana11_store.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kirana11_store_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'store_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_store';
  $view->human_name = 'Store Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Store Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'store_details';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'store_id' => 0,
    'field_store_logo' => 0,
    'title' => 0,
    'field_address' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'entity';
  $handler->display->display_options['row_options']['view_mode'] = 'teaser';
  /* Field: Commerce Store: Store ID */
  $handler->display->display_options['fields']['store_id']['id'] = 'store_id';
  $handler->display->display_options['fields']['store_id']['table'] = 'commerce_store';
  $handler->display->display_options['fields']['store_id']['field'] = 'store_id';
  $handler->display->display_options['fields']['store_id']['label'] = '';
  $handler->display->display_options['fields']['store_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['store_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['store_id']['link_to_store'] = 0;
  /* Field: Commerce Store: Store Logo */
  $handler->display->display_options['fields']['field_store_logo']['id'] = 'field_store_logo';
  $handler->display->display_options['fields']['field_store_logo']['table'] = 'field_data_field_store_logo';
  $handler->display->display_options['fields']['field_store_logo']['field'] = 'field_store_logo';
  $handler->display->display_options['fields']['field_store_logo']['label'] = '';
  $handler->display->display_options['fields']['field_store_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_store_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_store_logo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Commerce Store: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_store';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_store'] = 0;
  /* Field: Commerce Store: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['label'] = '';
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<input type="button" value="Shop Now" />';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = FALSE;
  /* Contextual filter: Commerce Store: Store ID */
  $handler->display->display_options['arguments']['store_id']['id'] = 'store_id';
  $handler->display->display_options['arguments']['store_id']['table'] = 'commerce_store';
  $handler->display->display_options['arguments']['store_id']['field'] = 'store_id';
  $handler->display->display_options['arguments']['store_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['store_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['store_id']['default_argument_options']['code'] = 'return $_SESSION[\'k11_stores_for_user\'];';
  $handler->display->display_options['arguments']['store_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['store_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['store_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['store_id']['break_phrase'] = TRUE;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['store_details'] = $view;

  return $export;
}
