<?php
/**
 * @file
 * kirana11_orders.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kirana11_orders_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'commerce_order-commerce_order-field_delivery_slot_date'.
  $field_instances['commerce_order-commerce_order-field_delivery_slot_date'] = array(
    'bundle' => 'commerce_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'commerce_order',
    'field_name' => 'field_delivery_slot_date',
    'label' => 'Delivery slot Date',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'commerce_order-commerce_order-field_delivery_slots_timings'.
  $field_instances['commerce_order-commerce_order-field_delivery_slots_timings'] = array(
    'bundle' => 'commerce_order',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_order',
    'field_name' => 'field_delivery_slots_timings',
    'label' => 'Delivery slots timings',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Delivery slot Date');
  t('Delivery slots timings');

  return $field_instances;
}
