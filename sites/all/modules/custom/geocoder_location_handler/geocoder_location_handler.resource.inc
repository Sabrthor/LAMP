<?php
function geocoder_location_handler_get_stores_by_coordinate($latitude, $longitude) {
  // TODO: Need to make this function dynamic with store details from database. 
  $str_coordinates[] = '77.64342 12.960485,77.650416 12.996029,77.6523757 12.969881,77.647623 12.9689082,77.6414108 12.9686154,77.6413679 12.9675908,77.6413679 12.9667962,77.6441789 12.9662526,77.643342 12.9606485';
  $str_coordinates[] = '77.6541996 12.9595193,77.661624 12.9591429,77.6663017 12.9584319,77.6663446 12.959812,77.6618814 12.966629,77.6577616 12.9672144,77.6541996 12.9595193';

  require('point_location.php');

  $pointLocation = new pointLocation();
  $userLocation = "$longitude $latitude";

  $store_ids = []; $i=1;
  
  foreach ($str_coordinates as $coordinate) {
    $storeServingAreaList = explode(',', $coordinate);

    if (strtoupper($pointLocation->pointInPolygon($userLocation, $storeServingAreaList)) !== 'OUTSIDE' ) {
      $store_ids[] =  $i++;
    }
  }

  $_SESSION['k11_stores_for_user'] = implode(',', $store_ids);

  if(!empty($store_ids)) {
    return $store_ids;
  } else {
    return NULL;
  }
}