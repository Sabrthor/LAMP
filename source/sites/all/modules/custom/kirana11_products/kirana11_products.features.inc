<?php
/**
 * @file
 * kirana11_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function kirana11_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
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

/**
 * Implements hook_default_search_api_index().
 */
function kirana11_products_default_search_api_index() {
  $items = array();
  $items['products_display_index'] = entity_import('search_api_index', '{
    "name" : "Products Display Index",
    "machine_name" : "products_display_index",
    "description" : null,
    "server" : "search_product",
    "item_type" : "node",
    "options" : {
      "datasource" : { "bundles" : [ "product_display" ] },
      "index_directly" : 1,
      "cron_limit" : "50",
      "fields" : {
        "field_brand" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_category" : { "type" : "list\\u003Cinteger\\u003E", "entity_type" : "taxonomy_term" },
        "field_product" : { "type" : "integer", "entity_type" : "commerce_product" },
        "field_product:commerce_price:amount" : { "type" : "decimal" },
        "field_product:commerce_price:amount_decimal" : { "type" : "decimal" },
        "field_product:commerce_store" : { "type" : "integer", "entity_type" : "commerce_store" },
        "field_product:field_commerce_saleprice_on_sale" : { "type" : "boolean" },
        "search_api_language" : { "type" : "string" },
        "search_api_viewed" : { "type" : "text" },
        "title" : { "type" : "text" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_node_status" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_viewed_entity" : { "status" : 1, "weight" : "0", "settings" : { "mode" : "full" } },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : { "fields" : [], "spaces" : "[^[:alnum:]]", "ignorable" : "[\\u0027]" }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        },
        "search_api_highlighting" : {
          "status" : 0,
          "weight" : "35",
          "settings" : {
            "prefix" : "\\u003Cstrong\\u003E",
            "suffix" : "\\u003C\\/strong\\u003E",
            "excerpt" : 1,
            "excerpt_length" : "256",
            "exclude_fields" : [],
            "highlight" : "always"
          }
        }
      }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function kirana11_products_default_search_api_server() {
  $items = array();
  $items['search_product'] = entity_import('search_api_server', '{
    "name" : "Search Product",
    "machine_name" : "search_product",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "partial_matches" : 1,
      "indexes" : {
        "product_index" : {
          "sku" : {
            "table" : "search_api_db_product_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_product_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_product_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_product_index",
            "column" : "created",
            "type" : "date",
            "boost" : "1.0"
          },
          "commerce_stock" : {
            "table" : "search_api_db_product_index",
            "column" : "commerce_stock",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "commerce_store" : {
            "table" : "search_api_db_product_index",
            "column" : "commerce_store",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_commerce_saleprice_on_sale" : {
            "table" : "search_api_db_product_index",
            "column" : "field_commerce_saleprice_on_sale",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_product_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_image:file" : {
            "table" : "search_api_db_product_index",
            "column" : "field_image_file",
            "type" : "integer",
            "boost" : "1.0"
          },
          "commerce_price:amount" : {
            "table" : "search_api_db_product_index",
            "column" : "commerce_price_amount",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "commerce_price:amount_decimal" : {
            "table" : "search_api_db_product_index",
            "column" : "commerce_price_amount_decimal",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_commerce_saleprice:amount" : {
            "table" : "search_api_db_product_index",
            "column" : "field_commerce_saleprice_amount",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_commerce_saleprice:amount_decimal" : {
            "table" : "search_api_db_product_index",
            "column" : "field_commerce_saleprice_amount_decimal",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "commerce_store:title" : {
            "table" : "search_api_db_product_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_product_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "product_id" : {
            "table" : "search_api_db_product_index",
            "column" : "product_id",
            "type" : "integer",
            "boost" : "1.0"
          }
        },
        "store_index" : {
          "store_id" : {
            "table" : "search_api_db_store_index",
            "column" : "store_id",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_store_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_store_index",
            "column" : "status",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_store_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_store_index_text",
            "type" : "text",
            "boost" : "1.0"
          }
        },
        "products_display_index" : {
          "field_product" : {
            "table" : "search_api_db_products_display_index",
            "column" : "field_product",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_brand" : {
            "table" : "search_api_db_products_display_index",
            "column" : "field_brand",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_category" : {
            "table" : "search_api_db_products_display_index_field_category",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_products_display_index",
            "column" : "search_api_language",
            "type" : "string",
            "boost" : "1.0"
          },
          "search_api_viewed" : {
            "table" : "search_api_db_products_display_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_products_display_index_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_product:commerce_store" : {
            "table" : "search_api_db_products_display_index",
            "column" : "field_product_commerce_store",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_product:commerce_price:amount" : {
            "table" : "search_api_db_products_display_index",
            "column" : "field_product_commerce_price_amount",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_product:commerce_price:amount_decimal" : {
            "table" : "search_api_db_products_display_index",
            "column" : "field_product_commerce_price_amount_decimal",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "field_product:field_commerce_saleprice_on_sale" : {
            "table" : "search_api_db_products_display_index",
            "column" : "field_product_field_commerce_saleprice_on_sale",
            "type" : "boolean",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_search_autocomplete_config_features_default_settings().
 */
function kirana11_products_search_autocomplete_config_features_default_settings() {
  return array(
    0 => array(
      'fid' => 4,
      'title' => 'Product Search',
      'selector' => 'input#edit-search-text',
      'weight' => 0,
      'enabled' => 1,
      'parent_fid' => 0,
      'min_char' => 3,
      'max_sug' => 10,
      'no_results' => '{"label":"No results found for [search-phrase]. Click to perform full search.","value":"[search-phrase]","link":"..\\/products-search","group":{"group_id":"no_results"}}',
      'all_results' => '{"label":"View all results","value":"[search-phrase]","link":"..\\/products-search?search_text=[search-phrase]","group":{"group_id":"all_results"}}',
      'auto_submit' => 1,
      'auto_redirect' => 1,
      'translite' => 1,
      'data_source' => 'view',
      'data_callback' => 'search_autocomplete/autocomplete/4/',
      'data_static' => '',
      'data_view' => 'product_autocomplete',
      'theme' => 'basic-red.css',
    ),
  );
}
