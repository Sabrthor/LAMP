<?php
/**
 * Get store ids based on latitude and longitude.
 */
function geocoder_location_handler_get_stores_by_coordinate($latitude, $longitude) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'commerce_store')
    ->entityCondition('bundle', 'store')
    ->fieldCondition('field_formatted_serving_area', 'value', 'NULL', '!=');

  $result = $query->execute();

  $store_ids = [];

  foreach ($result['commerce_store'] as $store) {
    $store_ids[] = $store->store_id;
  }

  $stores = entity_load('commerce_store', $store_ids);

  // Get list of store ids of store's area belongs to user location(latitude and longitude).
  require('/lib/point_location.php');

  $pointLocation = new pointLocation();
  $userLocation = "$longitude $latitude";
  $local_store_ids = [];
  
  foreach ($stores as $store) {    
    $storeServingAreaList = explode(',', $store->field_formatted_serving_area['und'][0]['value']);

    if (strtoupper($pointLocation->pointInPolygon($userLocation, $storeServingAreaList)) !== 'OUTSIDE' ) {
      $local_store_ids[] =  $store->store_id;
    }
  }  

  if(!empty($local_store_ids)) {
    $_SESSION['k11_stores_for_user'] = implode(',', $local_store_ids);
    return drupal_json_output($local_store_ids);
  } else {
    $_SESSION['k11_stores_for_user'] = 'NO_STORES';
    return drupal_json_output('NO_STORES');
  }
}

/**
 * Set the current location in session.
 */
function geocoder_location_handler_set_current_location($location) {
  $_SESSION['k11_current_location'] = $location;

  return drupal_json_output('ÇURRENT_LOCATION_SET');
}