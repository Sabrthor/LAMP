<?php
/**
 * @file
 * user_addresses_list.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function user_addresses_list_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_customer_profile-shipping-field_location_coordinates'.
  $field_instances['commerce_customer_profile-shipping-field_location_coordinates'] = array(
    'bundle' => 'shipping',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'addressbook' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => -9,
      ),
    ),
    'entity_type' => 'commerce_customer_profile',
    'field_name' => 'field_location_coordinates',
    'label' => 'Co-ordinates',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -9,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Co-ordinates');

  return $field_instances;
}
