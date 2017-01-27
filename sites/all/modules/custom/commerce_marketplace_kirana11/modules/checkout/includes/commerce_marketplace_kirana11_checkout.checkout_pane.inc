<?php

function delivery_slots_pane_settings_form($checkout_pane) {
    $form['delivery_slots_pane_field'] = array(
        '#type' => 'textfield',
        '#title' => t('Delivery slots Pane Field'),
        '#default_value' => variable_get('delivery_slots_pane_field', ''),
    );
    return $form;
}

/**
 * Implements base_checkout_form()
 */
function delivery_slots_pane_checkout_form($form, $form_state, $checkout_pane, $order) {
    $checkout_form = array();
    $current_date = date('d M Y');
    $next_date = date('d M Y',strtotime($current_date . "+1 days"));
    $options = array(
        $current_date => $current_date,
        $next_date => $next_date,
    );

    $checkout_form['field_delivery_slot_date'] = array(
        '#type' => 'radios',
        '#title' => t('Delivery Date'),
        '#options' => $options,
    );
    $delivery_slots = _get_store_delivery_slots($order->commerce_store[LANGUAGE_NONE][0]['target_id']);
    $checkout_form['field_delivery_slots_timings'] = array(
        '#type' => 'radios',
        '#options' => $delivery_slots,
    );
    return $checkout_form;
}

/**
 * Get Delivery slots of Stores
 * @param $store_id
 * @return array
 */
function _get_store_delivery_slots($store_id){
    $store_det = entity_load('commerce_store',array($store_id));
    $delivery_slots_timings = [];
    foreach ($store_det as $store_info){
        if(!empty($store_info->field_delivery_slots)){
            foreach ($store_info->field_delivery_slots['und'] as $delivery_slots){
                $delivery_slots_timings[$delivery_slots['value']] = $delivery_slots['value'];
            }

        }
    }
    return $delivery_slots_timings;
}

/**
 * Validate Delivery slots fields selection.
 * @param $form
 * @param $form_state
 */
/*function delivery_slots_pane_checkout_form_validate($form, &$form_state, $checkout_pane, &$order) {
    echo "<pre>";print_r($checkout_pane);exit;
    if(empty($form_state['values']['delivery_slots_pane']['field_delivery_slot_date'])){
        drupal_set_message(t('Please select Delivery Date'),'error');
    }

    if(empty($form_state['values']['delivery_slots_pane']['field_delivery_slots_timings'])){
        drupal_set_message(t('Please select Delivery Time'),'error');
    }
}*/

/**
 * delivery slots submit().
 * @param $form
 * @param $form_state
 * @param $checkout_pane
 * @param $order
 */
function delivery_slots_pane_checkout_form_submit($form, &$form_state, $checkout_pane, &$order) {
   $order->field_delivery_slot_date[LANGUAGE_NONE][0]['value'] = $form_state['values']['delivery_slots_pane']['field_delivery_slot_date'];
   $order->field_delivery_slots_timings[LANGUAGE_NONE][0]['value'] = $form_state['values']['delivery_slots_pane']['field_delivery_slots_timings'];
}