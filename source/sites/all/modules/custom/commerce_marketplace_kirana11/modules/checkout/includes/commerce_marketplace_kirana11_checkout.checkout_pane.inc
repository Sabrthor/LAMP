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
    $third_day = date('d M Y',strtotime($current_date . "+2 days"));
    $options = array(
        date("Y-m-d", strtotime($current_date)) => $current_date,
        date("Y-m-d", strtotime($next_date)) => $next_date,
        date("Y-m-d", strtotime($third_day)) => $third_day,
    );

    $checkout_form['field_delivery_slot_date'] = array(
        '#type' => 'radios',
        '#title' => t('Delivery Date'),
        '#options' => $options,
        '#default_value' => date("Y-m-d", strtotime($current_date)),
    );
    $delivery_slots = _get_store_delivery_slots($order->commerce_store[LANGUAGE_NONE][0]['target_id']);

    $disabled = get_disabled_timeslots(date("Y-m-d"));

    $checkout_form['field_delivery_slots_timings'] = array(
        '#type' => 'radios',
        '#options' => $delivery_slots,
        '#disabled_options' => $disabled,
    );

    return $checkout_form;
}

/**
 * Get all the disabled slots list.
 * @param $current_date
 * @param bool $json
 * @return array
 */
function get_disabled_timeslots($current_date, $json=FALSE){
    // for a time slot what should be the minimum time to order
    $start_times = [
        '8am - 10am' => '09:30:00',
        '10am - 12pm' => '11:30:00',
        '12pm - 02pm' => '13:30:00',
        '02pm - 04pm' => '15:30:00',
        '04pm - 06pm' => '17:30:00',
        '06pm - 08pm' => '19:30:00',
        '08pm - 10pm' => '21:30:00'
    ];

    $date = $current_date;
    $current_time = strtotime("now");
    $disabled = [];

    foreach ($start_times as $key => $start_time) {
        $start_time = strtotime($date ." " . $start_time);
        $time_in_minutes = round(($start_time - $current_time) / 60, 2);

        //check for timeslots available for more than 90 min
        if($time_in_minutes < 90) {
            $disabled[] = $key;
        }
        //Check if orders are allocated for the selected delivery date and time it is exceeds 10
        if(orders_in_timeslot($key, $current_date) >= 10) {
            $disabled[] = $key;
        }
    }

    if($json) {
        drupal_json_output($disabled);
    }
    else {
        return $disabled;
    }
}

/**
 * Function to get the Orders count for the timeslots available.
 * @param $time_slot
 * @return int
 */
function orders_in_timeslot($time_slot, $slot_date){
    $query = db_select('commerce_order', 'co');
    $query->join('field_data_field_delivery_slots_timings', 'st','st.entity_id = co.order_id');
    $query->join('field_data_field_delivery_slot_date', 'sd','sd.entity_id = co.order_id');
    $result = $query->fields('co', array('order_id'))
    ->condition('st.field_delivery_slots_timings_value', $time_slot, '=')
    ->condition('sd.field_delivery_slot_date_value', $slot_date, '=')
    ->condition('co.status',array('pending','processing'), 'IN')
    ->execute();
    $num_of_results = $result->rowCount();

    return $num_of_results;
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
   if(!empty($form_state['values']['delivery_slots_pane']['field_delivery_slot_date']) && !empty($form_state['values']['delivery_slots_pane']['field_delivery_slots_timings'])) {
       $order->field_delivery_slot_date[LANGUAGE_NONE][0]['value'] = $form_state['values']['delivery_slots_pane']['field_delivery_slot_date'];
       $order->field_delivery_slots_timings[LANGUAGE_NONE][0]['value'] = $form_state['values']['delivery_slots_pane']['field_delivery_slots_timings'];
   }
   else{
       if(empty($form_state['values']['delivery_slots_pane']['field_delivery_slot_date'])){
           drupal_set_message(t('Please select Delivery Date'),'error');
       }

       if(empty($form_state['values']['delivery_slots_pane']['field_delivery_slots_timings'])){
           drupal_set_message(t('Please select Delivery Time'),'error');
       }
       $form_state['rebuild'] = TRUE;
   }
}

function loyalty_rewards_pane_settings_form($checkout_pane) {
    $form['loyalty_rewards_pane_field'] = array(
        '#type' => 'textfield',
        '#title' => t('Loyalty Rewards Pane Field'),
        '#default_value' => variable_get('loyalty_rewards_pane_field', ''),
    );
    return $form;
}

/**
 * Implements base_checkout_form()
 */
function loyalty_rewards_pane_checkout_form($form, $form_state, $checkout_pane, $order) {
    $checkout_form = array();

    if (isset($_SESSION['k11_remaining_discount_amount']) && $_SESSION['k11_remaining_discount_amount'] > 0) {
      $html_loyalty_text = '<span>' . t('Apply Loyalty Rewards acquired | ') .'<strong>' . $_SESSION['k11_remaining_discount_amount'] . '</strong></span>';
    } else {
      $html_loyalty_text = '<span>' . t('Apply Loyalty Rewards acquired') .'</span>';
    }
    
    $checkout_form['discount_info'] = array(
      '#markup' => $html_loyalty_text,
      '#prefix' => '<div id="loyalty"><h3 class="loyalty-title">' . ('Loyalty Rewards') . '</h3><div class="loyalty-input"><input type="checkbox" ' . (isset($_SESSION['k11_royalty_set']) && $_SESSION['k11_royalty_set'] == 1 ? 'checked="checked"' : '') . ' name="loyalty_required" id="loyalty_required" />',
      '#suffix' => '</div>',
    );

    return $checkout_form;
}