<?php
/**
 * @file
 * kirana11_products.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function kirana11_products_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'best_deals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Best Deals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Best deals';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'deals_slider';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_image' => 0,
    'title' => 0,
    'commerce_price' => 0,
    'field_commerce_saleprice' => 0,
    'title_1' => 0,
    'add_to_cart_form' => 0,
    'nothing' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Relationship: Content: Referenced products */
  $handler->display->display_options['relationships']['field_product_product_id']['id'] = 'field_product_product_id';
  $handler->display->display_options['relationships']['field_product_product_id']['table'] = 'field_data_field_product';
  $handler->display->display_options['relationships']['field_product_product_id']['field'] = 'field_product_product_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commerce_store_target_id']['id'] = 'commerce_store_target_id';
  $handler->display->display_options['relationships']['commerce_store_target_id']['table'] = 'field_data_commerce_store';
  $handler->display->display_options['relationships']['commerce_store_target_id']['field'] = 'commerce_store_target_id';
  $handler->display->display_options['relationships']['commerce_store_target_id']['relationship'] = 'field_product_product_id';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'product-deals-img';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'product-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['commerce_price']['element_class'] = 'product-price';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_class'] = 'product-sale-price';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Store: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_store';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'commerce_store_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Sold by';
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'sold-by';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_store'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'product-offer-price-image';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Commerce Store: Store ID */
  $handler->display->display_options['arguments']['store_id']['id'] = 'store_id';
  $handler->display->display_options['arguments']['store_id']['table'] = 'commerce_store';
  $handler->display->display_options['arguments']['store_id']['field'] = 'store_id';
  $handler->display->display_options['arguments']['store_id']['relationship'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['store_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['store_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['store_id']['default_argument_options']['code'] = 'return $_SESSION[\'k11_stores_for_user\'];';
  $handler->display->display_options['arguments']['store_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['store_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['store_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['store_id']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'product_display' => 'product_display',
  );
  /* Filter criterion: Commerce Product: On sale (field_commerce_saleprice_on_sale) */
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['id'] = 'field_commerce_saleprice_on_sale_value';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['field'] = 'field_commerce_saleprice_on_sale_value';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['value'] = array(
    1 => '1',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'best-deals';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $export['best_deals'] = $view;

  $view = new view();
  $view->name = 'category_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Category Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_html',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'field_commerce_saleprice_on_sale_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => 'On|View Discounts',
        ),
      ),
    ),
    'field_brand_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Products Found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  /* Field: Commerce Product: Product ID */
  $handler->display->display_options['fields']['product_id']['id'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['product_id']['field'] = 'product_id';
  $handler->display->display_options['fields']['product_id']['label'] = '';
  $handler->display->display_options['fields']['product_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['product_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['product_id']['link_to_product'] = 0;
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Field: Store */
  $handler->display->display_options['fields']['commerce_store']['id'] = 'commerce_store';
  $handler->display->display_options['fields']['commerce_store']['table'] = 'field_data_commerce_store';
  $handler->display->display_options['fields']['commerce_store']['field'] = 'commerce_store';
  $handler->display->display_options['fields']['commerce_store']['label'] = '';
  $handler->display->display_options['fields']['commerce_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_store']['settings'] = array(
    'link' => 0,
  );
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Field: Content: Brand */
  $handler->display->display_options['fields']['field_brand']['id'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['table'] = 'field_data_field_brand';
  $handler->display->display_options['fields']['field_brand']['field'] = 'field_brand';
  $handler->display->display_options['fields']['field_brand']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['field_brand']['label'] = '';
  $handler->display->display_options['fields']['field_brand']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_brand']['element_label_colon'] = FALSE;
  /* Sort criterion: Commerce Product: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'commerce_product';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['relationship'] = 'field_product';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Field: Store (commerce_store) */
  $handler->display->display_options['arguments']['commerce_store_target_id']['id'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['commerce_store_target_id']['table'] = 'field_data_commerce_store';
  $handler->display->display_options['arguments']['commerce_store_target_id']['field'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['commerce_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['commerce_store_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['commerce_store_target_id']['default_argument_options']['code'] = 'if(isset($_SESSION[\'k11_stores_for_user\']))
{ 
return $_SESSION[\'k11_stores_for_user\'];
}';
  $handler->display->display_options['arguments']['commerce_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['commerce_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['commerce_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['commerce_store_target_id']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Brand (field_brand) */
  $handler->display->display_options['filters']['field_brand_tid']['id'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['table'] = 'field_data_field_brand';
  $handler->display->display_options['filters']['field_brand_tid']['field'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['relationship'] = 'field_product';
  $handler->display->display_options['filters']['field_brand_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_brand_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_tid']['expose']['operator_id'] = 'field_brand_tid_op';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['label'] = 'Brand';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['operator'] = 'field_brand_tid_op';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['identifier'] = 'brand';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_brand_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_brand_tid']['vocabulary'] = 'brand';
  /* Filter criterion: Commerce Product: On sale (field_commerce_saleprice_on_sale) */
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['id'] = 'field_commerce_saleprice_on_sale_value';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['field'] = 'field_commerce_saleprice_on_sale_value';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['group'] = 1;
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['operator_id'] = 'field_commerce_saleprice_on_sale_value_op';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['label'] = 'Discounts';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['operator'] = 'field_commerce_saleprice_on_sale_value_op';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['identifier'] = 'deals';
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['reduce'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'category-products';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['category_products'] = $view;

  return $export;
}
