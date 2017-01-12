<?php
/**
 * @file
 * user_addresses_list.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function user_addresses_list_default_rules_configuration() {
  $items = array();
  $items['rules_addressbook_selection'] = entity_import('rules_config', '{ "rules_addressbook_selection" : {
      "LABEL" : "Addressbook Selection",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "commerce_profile" : { "label" : "Commerce Profile", "type" : "commerce_customer_profile" } },
      "ACTION SET" : []
    }
  }');
  return $items;
}
