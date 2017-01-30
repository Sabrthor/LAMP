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
  $handler->display->display_options['style_plugin'] = 'jcarousel';
  $handler->display->display_options['style_options']['wrap'] = '0';
  $handler->display->display_options['style_options']['visible'] = '1';
  $handler->display->display_options['style_options']['responsive'] = 1;
  $handler->display->display_options['style_options']['auto'] = '0';
  $handler->display->display_options['style_options']['autoPause'] = 1;
  $handler->display->display_options['style_options']['easing'] = '';
  $handler->display->display_options['style_options']['vertical'] = 0;
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
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_type'] = 'div';
  $handler->display->display_options['fields']['commerce_price']['element_class'] = 'product-price';
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'product-price';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php print "₹ " .number_format(($row->commerce_price/100), 2) ;?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product_product_id';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_class'] = 'product-sale-price';
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['type'] = 'commerce_price_raw_amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['php_1']['element_class'] = 'product-sale-price';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php print "₹ " .number_format(($row->field_commerce_saleprice/100), 2) ;?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
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
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
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
  $view->name = 'category_banners';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Category Banners';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Category Banners';
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
  $handler->display->display_options['style_options']['optionset'] = 'store_banner';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'title' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Banner */
  $handler->display->display_options['fields']['field_banner']['id'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner']['table'] = 'field_data_field_banner';
  $handler->display->display_options['fields']['field_banner']['field'] = 'field_banner';
  $handler->display->display_options['fields']['field_banner']['label'] = '';
  $handler->display->display_options['fields']['field_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner']['settings'] = array(
    'image_style' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Category (field_category) */
  $handler->display->display_options['arguments']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['arguments']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['arguments']['field_category_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_category_tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_category_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_category_tid']['summary_options']['items_per_page'] = '25';
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
    'category_banners' => 'category_banners',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'category-banners';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $export['category_banners'] = $view;

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
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['column_classes'] = 'col-xs-12 col-sm-6 col-md-4 category-display';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="no-result-product"><img src="<?php print base_path() . path_to_theme(); ?>/images/empty_cart_sad.png" /><p>No products found in this category.</p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commerce_store_target_id']['id'] = 'commerce_store_target_id';
  $handler->display->display_options['relationships']['commerce_store_target_id']['table'] = 'field_data_commerce_store';
  $handler->display->display_options['relationships']['commerce_store_target_id']['field'] = 'commerce_store_target_id';
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
    'image_style' => 'medium',
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
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'field_data_field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
   $product_value = $data->_field_data[\'product_id\'][\'entity\'];
   $price = $product_value->commerce_price[\'und\'][0][\'amount\'];    
   //print number_format(($price/100), 2) . ", " . number_format(($sale_price/100), 2);
   $on_sale = $product_value->field_commerce_saleprice_on_sale[\'und\'][0][\'value\'];
   if($on_sale > 0){
       $sale_price = $product_value->field_commerce_saleprice[\'und\'][0][\'amount\'];
       if(!empty($sale_price)){
           if($price == $sale_price){
               print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
           }else{
               print "<p class=\'product-price\'><span class=\'mrp-price-strike\'>₹ " . number_format(($price/100), 2) . "</span><span class=\'sales-price\'>₹ " . number_format(($sale_price/100), 2) . "</span></p>";
           }
       }else{
           print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
       }
   }else{
       print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
   }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
    1 => '1',
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['reduce'] = TRUE;
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
  /* Filter criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['filters']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['filters']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['operator'] = '!=';
  $handler->display->display_options['filters']['commerce_price_amount']['value']['value'] = '0';
  $handler->display->display_options['filters']['commerce_price_amount']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'category-products';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['category_products'] = $view;

  $view = new view();
  $view->name = 'product_autocomplete';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Product Autocomplete';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Product Autocomplete';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '7';
  $handler->display->display_options['style_plugin'] = 'search_autocomplete';
  $handler->display->display_options['style_options']['group_by'] = '0';
  $handler->display->display_options['style_options']['input_label'] = 'title_1';
  $handler->display->display_options['style_options']['input_link'] = 'title_1';
  $handler->display->display_options['style_options']['output_fields'] = array(
    'field_image' => 'field_image',
    'php_1' => 'php_1',
    'commerce_store' => 'commerce_store',
    'php' => 'php',
  );
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['required'] = TRUE;
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_product'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'title_transform';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php print strtolower($row->title_1);?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Field: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_image']['alter']['path'] = 'products-search?search_text=[php_2]';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'autocompletion_style',
    'image_link' => '',
  );
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['php_1']['alter']['path'] = 'products-search?search_text=[php_1]';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php print strtolower($row->title_1);?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
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
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$product_value = $data->_field_data[\'product_id\'][\'entity\'];
	$price = $product_value->commerce_price[\'und\'][0][\'amount\'];	
	//print number_format(($price/100), 2) . ", " . number_format(($sale_price/100), 2);
	$on_sale = $product_value->field_commerce_saleprice_on_sale[\'und\'][0][\'value\'];
	if($on_sale > 0){
		$sale_price = $product_value->field_commerce_saleprice[\'und\'][0][\'amount\'];
		if(!empty($sale_price)){
			if($price == $sale_price){
				print "₹ " . number_format(($price/100), 2);
			}else{
				print "₹ " . number_format(($sale_price/100), 2);
			}
		}else{
			print "₹ " . number_format(($price/100), 2);
		}
	}else{
		print "₹ " . number_format(($price/100), 2);
	}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Contextual filter: Field: Store (commerce_store) */
  $handler->display->display_options['arguments']['commerce_store_target_id']['id'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['commerce_store_target_id']['table'] = 'field_data_commerce_store';
  $handler->display->display_options['arguments']['commerce_store_target_id']['field'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['commerce_store_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['commerce_store_target_id']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['commerce_store_target_id']['default_argument_options']['code'] = 'if(isset($_SESSION[\'k11_stores_for_user\'])){
  $store_session = str_replace(\',\', \'+\', $_SESSION[\'k11_stores_for_user\']);
 return $store_session;
} ';
  $handler->display->display_options['arguments']['commerce_store_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['commerce_store_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['commerce_store_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['commerce_store_target_id']['break_phrase'] = TRUE;
  /* Filter criterion: Commerce Product: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'product-autocomplete';
  $export['product_autocomplete'] = $view;

  $view = new view();
  $view->name = 'products_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_products_display_index';
  $view->human_name = 'Products Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products Search';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '9';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['column_classes'] = 'col-xs-12 col-sm-6 col-md-4 category-display';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="no-result-product"><img src="<?php print base_path() . path_to_theme(); ?>/images/empty_cart_sad.png" /><p>No products found.<br/><a href="<?php print base_path() .current_path();?>">Click Here</a> to view all products</p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Indexed Node: Product */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'search_api_index_products_display_index';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  /* Field: Commerce Product: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'entity_commerce_product';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'entity_commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'entity_commerce_product';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'entity_commerce_product';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  /* Field: Commerce Product: Sale price */
  $handler->display->display_options['fields']['field_commerce_saleprice']['id'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['table'] = 'entity_commerce_product';
  $handler->display->display_options['fields']['field_commerce_saleprice']['field'] = 'field_commerce_saleprice';
  $handler->display->display_options['fields']['field_commerce_saleprice']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['field_commerce_saleprice']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Product: Store */
  $handler->display->display_options['fields']['commerce_store']['id'] = 'commerce_store';
  $handler->display->display_options['fields']['commerce_store']['table'] = 'entity_commerce_product';
  $handler->display->display_options['fields']['commerce_store']['field'] = 'commerce_store';
  $handler->display->display_options['fields']['commerce_store']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['commerce_store']['label'] = '';
  $handler->display->display_options['fields']['commerce_store']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['commerce_store']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['commerce_store']['view_mode'] = 'full';
  $handler->display->display_options['fields']['commerce_store']['bypass_access'] = 0;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
$product_value = $data->_entity_properties[\'field_product:entity object\'];
	$price = $product_value->commerce_price[\'und\'][0][\'amount\'];	
	//print number_format(($price/100), 2) . ", " . number_format(($sale_price/100), 2);
	$on_sale = $product_value->field_commerce_saleprice_on_sale[\'und\'][0][\'value\'];
	if($on_sale > 0){
		$sale_price = $product_value->field_commerce_saleprice[\'und\'][0][\'amount\'];
		if(!empty($sale_price)){
			if($price == $sale_price){
				print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
			}else{
				print "<p class=\'product-price\'><span class=\'mrp-price-strike\'>₹ " . number_format(($price/100), 2) . "</span><span class=\'sales-price\'>₹ " . number_format(($sale_price/100), 2) . "</span></p>";
			}
		}else{
			print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
		}
	}else{
		print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
	}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'views_entity_commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = '';
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 0;
  /* Contextual filter: Product: Store (indexed) */
  $handler->display->display_options['arguments']['field_product_commerce_store']['id'] = 'field_product_commerce_store';
  $handler->display->display_options['arguments']['field_product_commerce_store']['table'] = 'search_api_index_products_display_index';
  $handler->display->display_options['arguments']['field_product_commerce_store']['field'] = 'field_product_commerce_store';
  $handler->display->display_options['arguments']['field_product_commerce_store']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_product_commerce_store']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_product_commerce_store']['default_argument_options']['code'] = 'if(isset($_SESSION[\'k11_stores_for_user\'])){
  $store_session = str_replace(\',\', \'+\', $_SESSION[\'k11_stores_for_user\']);
 return $store_session;
}  ';
  $handler->display->display_options['arguments']['field_product_commerce_store']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_product_commerce_store']['break_phrase'] = 1;
  $handler->display->display_options['arguments']['field_product_commerce_store']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_products_display_index';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_text';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['min_length'] = '1';
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );
  /* Filter criterion: Product » Price: Amount (indexed) */
  $handler->display->display_options['filters']['field_product_commerce_price_amount']['id'] = 'field_product_commerce_price_amount';
  $handler->display->display_options['filters']['field_product_commerce_price_amount']['table'] = 'search_api_index_products_display_index';
  $handler->display->display_options['filters']['field_product_commerce_price_amount']['field'] = 'field_product_commerce_price_amount';
  $handler->display->display_options['filters']['field_product_commerce_price_amount']['operator'] = '<>';
  $handler->display->display_options['filters']['field_product_commerce_price_amount']['value'] = '0.00';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'products-search';
  $export['products_search'] = $view;

  $view = new view();
  $view->name = 'store_products';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Store Products';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Products';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
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
    'field_brand_tid' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
    'field_commerce_saleprice_on_sale_value' => array(
      'bef_format' => 'bef',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => 'On|View Discounts',
        ),
      ),
    ),
    'term_node_tid_depth_join' => array(
      'bef_format' => 'bef_ul',
      'more_options' => array(
        'bef_select_all_none' => 0,
        'bef_select_all_none_nested' => 0,
        'bef_term_description' => 0,
        'bef_collapsible' => 0,
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
          ),
        ),
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
  $handler->display->display_options['style_plugin'] = 'responsive_grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['column_classes'] = 'col-xs-12 col-sm-6 col-md-4 category-display';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="no-result-product"><img src="<?php print base_path() . path_to_theme(); ?>/images/empty_cart_sad.png" /><p>No products found in this category.<br/><a href="<?php print base_path() .current_path();?>">Click Here</a> to view all products</p></div>';
  $handler->display->display_options['empty']['area']['format'] = 'php_code';
  /* Relationship: Commerce Product: Referencing Node */
  $handler->display->display_options['relationships']['field_product']['id'] = 'field_product';
  $handler->display->display_options['relationships']['field_product']['table'] = 'commerce_product';
  $handler->display->display_options['relationships']['field_product']['field'] = 'field_product';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['commerce_store_target_id']['id'] = 'commerce_store_target_id';
  $handler->display->display_options['relationships']['commerce_store_target_id']['table'] = 'field_data_commerce_store';
  $handler->display->display_options['relationships']['commerce_store_target_id']['field'] = 'commerce_store_target_id';
  /* Relationship: Content: Category (field_category) */
  $handler->display->display_options['relationships']['field_category_tid']['id'] = 'field_category_tid';
  $handler->display->display_options['relationships']['field_category_tid']['table'] = 'field_data_field_category';
  $handler->display->display_options['relationships']['field_category_tid']['field'] = 'field_category_tid';
  $handler->display->display_options['relationships']['field_category_tid']['relationship'] = 'field_product';
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
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['label'] = '';
  $handler->display->display_options['fields']['commerce_price']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_commerce_saleprice']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_saleprice']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['field_commerce_saleprice']['settings'] = array(
    'calculation' => FALSE,
  );
  /* Field: Commerce Product: On sale */
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['id'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['table'] = 'field_data_field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['field'] = 'field_commerce_saleprice_on_sale';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_saleprice_on_sale']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
   $product_value = $data->_field_data[\'product_id\'][\'entity\'];
   $price = $product_value->commerce_price[\'und\'][0][\'amount\'];    
   //print number_format(($price/100), 2) . ", " . number_format(($sale_price/100), 2);
   $on_sale = $product_value->field_commerce_saleprice_on_sale[\'und\'][0][\'value\'];
   if($on_sale > 0){
       $sale_price = $product_value->field_commerce_saleprice[\'und\'][0][\'amount\'];
       if(!empty($sale_price)){
           if($price == $sale_price){
               print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
           }else{
               print "<p class=\'product-price\'><span class=\'mrp-price-strike\'>₹ " . number_format(($price/100), 2) . "</span><span class=\'sales-price\'>₹ " . number_format(($sale_price/100), 2) . "</span></p>";
           }
       }else{
           print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
       }
   }else{
       print "<p class=\'mrp-price\'>₹ " . number_format(($price/100), 2) . "</p>";
   }
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
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
  /* Field: Content: Category */
  $handler->display->display_options['fields']['field_category']['id'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['table'] = 'field_data_field_category';
  $handler->display->display_options['fields']['field_category']['field'] = 'field_category';
  $handler->display->display_options['fields']['field_category']['relationship'] = 'field_product';
  $handler->display->display_options['fields']['field_category']['label'] = '';
  $handler->display->display_options['fields']['field_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category']['delta_offset'] = '0';
  /* Contextual filter: Commerce Store: Store ID */
  $handler->display->display_options['arguments']['store_id']['id'] = 'store_id';
  $handler->display->display_options['arguments']['store_id']['table'] = 'commerce_store';
  $handler->display->display_options['arguments']['store_id']['field'] = 'store_id';
  $handler->display->display_options['arguments']['store_id']['relationship'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['store_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['store_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['store_id']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['store_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['store_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['store_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Commerce Store: Title */
  $handler->display->display_options['arguments']['title']['id'] = 'title';
  $handler->display->display_options['arguments']['title']['table'] = 'commerce_store';
  $handler->display->display_options['arguments']['title']['field'] = 'title';
  $handler->display->display_options['arguments']['title']['relationship'] = 'commerce_store_target_id';
  $handler->display->display_options['arguments']['title']['default_action'] = 'default';
  $handler->display->display_options['arguments']['title']['breadcrumb_enable'] = TRUE;
  $handler->display->display_options['arguments']['title']['breadcrumb'] = '%2';
  $handler->display->display_options['arguments']['title']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['title']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['title']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['title']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['title']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['title']['limit'] = '0';
  /* Filter criterion: Content: Has taxonomy terms with depth (using joins) */
  $handler->display->display_options['filters']['term_node_tid_depth_join']['id'] = 'term_node_tid_depth_join';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['table'] = 'node';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['field'] = 'term_node_tid_depth_join';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['relationship'] = 'field_product';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['group'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_join']['exposed'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_join']['expose']['operator_id'] = 'term_node_tid_depth_join_op';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['expose']['label'] = 'Categories';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['expose']['operator'] = 'term_node_tid_depth_join_op';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['expose']['identifier'] = 'category_id';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['term_node_tid_depth_join']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['term_node_tid_depth_join']['type'] = 'select';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['term_node_tid_depth_join']['hierarchy'] = 1;
  $handler->display->display_options['filters']['term_node_tid_depth_join']['depth'] = '2';
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
    1 => '1',
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_commerce_saleprice_on_sale_value']['expose']['reduce'] = TRUE;
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
  $handler->display->display_options['filters']['field_brand_tid']['expose']['identifier'] = 'field_brand_tid';
  $handler->display->display_options['filters']['field_brand_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_brand_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    4 => 0,
    3 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_brand_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_brand_tid']['vocabulary'] = 'brand';
  /* Filter criterion: Commerce Product: Price (commerce_price:amount) */
  $handler->display->display_options['filters']['commerce_price_amount']['id'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['filters']['commerce_price_amount']['field'] = 'commerce_price_amount';
  $handler->display->display_options['filters']['commerce_price_amount']['operator'] = '!=';
  $handler->display->display_options['filters']['commerce_price_amount']['value']['value'] = '0';
  $handler->display->display_options['filters']['commerce_price_amount']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'store-products/%';
  $export['store_products'] = $view;

  return $export;
}
