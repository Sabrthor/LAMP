<?php
/**
 * @file
 * kirana11_orders.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function kirana11_orders_default_rules_configuration() {
  $items = array();
  $items['rules_auto_add_shipping_service'] = entity_import('rules_config', '{ "rules_auto_add_shipping_service" : {
      "LABEL" : "Auto-add shipping service",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_shipping", "entity" ],
      "ON" : { "commerce_order_insert" : [], "commerce_order_update" : [] },
      "IF" : [
        { "data_is" : {
            "data" : [ "commerce-order:status" ],
            "op" : "IN",
            "value" : { "value" : {
                "checkout_checkout" : "checkout_checkout",
                "checkout_review" : "checkout_review"
              }
            }
          }
        },
        { "data_is" : { "data" : [ "commerce-order:type" ], "value" : "commerce_order" } }
      ],
      "DO" : [
        { "commerce_shipping_method_collect_rates" : {
            "shipping_method_name" : "flat_rate",
            "commerce_order" : [ "commerce-order" ]
          }
        },
        { "commerce_shipping_rate_apply" : {
            "commerce_order" : [ "commerce-order" ],
            "shipping_service_name" : [ "" ]
          }
        }
      ]
    }
  }');
  return $items;
}
