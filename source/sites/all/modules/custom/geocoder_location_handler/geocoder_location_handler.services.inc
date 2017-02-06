<?php
/**
 * Implementation of hook_services_resources().
 */
function geocoder_location_handler_services_resources() {
  $resources = array();

  $resources['geocoder_location_handler_resources']['actions']['get_stores_by_coordinate'] = array(
    'file' => array(
      'type' => 'inc',
      'module' => 'geocoder_location_handler',
      'name' => 'geocoder_location_handler.resource',
    ),
    'help' => t('Get store IDs using latitude and longitude'),
    'callback' => 'geocoder_location_handler_get_stores_by_coordinate',
    'access callback' => '_kirana11_api_resource_access',
    'args' => array(
      array(
        'name'         => 'latitude',
        'type'         => 'double',
        'description'  => t('Latitude'),
        'optional' => FALSE,
        'source'       => array('data' => 'latitude'),
      ),
      array(
        'name'         => 'longitude',
        'type'         => 'double',
        'description'  => t('Longitude'),
        'optional' => FALSE,
        'source'       => array('data' => 'longitude'),
      ),
    ),
  );

  return $resources;
}

/**
 * To check the user has permission to call the service.
 *
 * @return bool
 */
function _kirana11_api_resource_access() {
  return TRUE;
}