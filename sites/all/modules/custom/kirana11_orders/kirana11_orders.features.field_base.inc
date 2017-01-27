<?php
/**
 * @file
 * kirana11_orders.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function kirana11_orders_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_delivery_slot_date'.
  $field_bases['field_delivery_slot_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_delivery_slot_date',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_delivery_slots_timings'.
  $field_bases['field_delivery_slots_timings'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_delivery_slots_timings',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        '8am - 10am' => '8am - 10am',
        '10am - 12pm' => '10am - 12pm',
        '12pm - 02pm' => '12pm - 02pm',
        '02pm - 04pm' => '02pm - 04pm',
        '04pm - 06pm' => '04pm - 06pm',
        '06pm - 08pm' => '06pm - 08pm',
        '08pm - 10pm' => '08pm - 10pm',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_text',
  );

  return $field_bases;
}
