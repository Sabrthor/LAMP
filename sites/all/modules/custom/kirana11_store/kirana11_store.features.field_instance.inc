<?php
/**
 * @file
 * kirana11_store.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function kirana11_store_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'commerce_store-store-field_address'.
  $field_instances['commerce_store-store-field_address'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_address',
    'label' => 'Address',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(
          'IN' => 'IN',
        ),
        'default_country' => 'IN',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-country' => 'address-hide-country',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_bank_account_number'.
  $field_instances['commerce_store-store-field_bank_account_number'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_bank_account_number',
    'label' => 'Bank Account Number',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_delivery_slots'.
  $field_instances['commerce_store-store-field_delivery_slots'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_delivery_slots',
    'label' => 'Delivery Slots',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 49,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_ifsc_code'.
  $field_instances['commerce_store-store-field_ifsc_code'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_ifsc_code',
    'label' => 'IFSC Code',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_merchant_alternative'.
  $field_instances['commerce_store-store-field_merchant_alternative'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_merchant_alternative',
    'label' => 'Merchant Alternative Number',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 45,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_open_hours'.
  $field_instances['commerce_store-store-field_open_hours'] = array(
    'bundle' => 'store',
    'default_value' => array(
      0 => array(
        'starthours' => '0800',
        'endhours' => 2200,
        'day' => 0,
        'daydelta' => 0,
      ),
      1 => array(
        'day' => 1,
        'daydelta' => 0,
        'endhours' => 2200,
        'starthours' => '0800',
      ),
      2 => array(
        'day' => 2,
        'daydelta' => 0,
        'endhours' => 2200,
        'starthours' => '0800',
      ),
      3 => array(
        'day' => 3,
        'daydelta' => 0,
        'endhours' => 2200,
        'starthours' => '0800',
      ),
      4 => array(
        'day' => 4,
        'daydelta' => 0,
        'endhours' => 2200,
        'starthours' => '0800',
      ),
      5 => array(
        'day' => 5,
        'daydelta' => 0,
        'endhours' => 2200,
        'starthours' => '0800',
      ),
      6 => array(
        'day' => 6,
        'daydelta' => 0,
        'endhours' => 2200,
        'starthours' => '0800',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => 1,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'date_first_day' => 0,
          'daysformat' => 'short',
          'grouped' => 1,
          'hoursformat' => 1,
          'separator_day_hours' => ': ',
          'separator_days' => '<br />',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => 'all',
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'office_hours',
        'settings' => array(
          'closedformat' => 'Closed',
          'compress' => 1,
          'current_status' => array(
            'closed_text' => 'Currently closed',
            'open_text' => 'Currently open!',
            'position' => 'hide',
          ),
          'date_first_day' => 0,
          'daysformat' => 'short',
          'grouped' => 1,
          'hoursformat' => 1,
          'separator_day_hours' => ': ',
          'separator_days' => '<br />',
          'separator_grouped_days' => ' - ',
          'separator_hours_hours' => '-',
          'separator_more_hours' => ', ',
          'showclosed' => 'all',
          'timezone_field' => '',
        ),
        'type' => 'office_hours',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_open_hours',
    'label' => 'Store Open Hours',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'office_hours',
      'settings' => array(),
      'type' => 'office_hours',
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_pan_number'.
  $field_instances['commerce_store-store-field_pan_number'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_pan_number',
    'label' => 'PAN Number',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_publish_date'.
  $field_instances['commerce_store-store-field_publish_date'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_publish_date',
    'label' => 'Publish Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_store_logo'.
  $field_instances['commerce_store-store-field_store_logo'] = array(
    'bundle' => 'store',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_store_logo',
    'label' => 'Store Logo',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'filefield_sources' => array(
          'filefield_sources' => array(
            'attach' => 0,
            'clipboard' => 0,
            'reference' => 0,
            'remote' => 0,
            'remotefile' => 0,
            'upload' => 'upload',
          ),
          'source_attach' => array(
            'absolute' => 0,
            'attach_mode' => 'move',
            'path' => 'file_attach',
          ),
          'source_imce' => array(
            'imce_mode' => 0,
          ),
          'source_reference' => array(
            'autocomplete' => 0,
            'search_all_fields' => 0,
          ),
        ),
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'commerce_store-store-field_tin_number'.
  $field_instances['commerce_store-store-field_tin_number'] = array(
    'bundle' => 'store',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'commerce_store',
    'field_name' => 'field_tin_number',
    'label' => 'TIN Number',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'node-platform_banners-field_banner'.
  $field_instances['node-platform_banners-field_banner'] = array(
    'bundle' => 'platform_banners',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'linkimagefield',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'linkimagefield',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner',
    'label' => 'Banner',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'class_field' => 0,
      'custom_target' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'longdesc_field' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'rel_field' => 0,
      'target' => '_self',
      'title_field' => 0,
      'url' => '',
      'url_settings' => array(
        'class_field' => 1,
        'custom_target' => 0,
        'rel_field' => 1,
        'target' => '_self',
        'url' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'linkimagefield',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'linkimagefield_widget',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-platform_banners-field_stores'.
  $field_instances['node-platform_banners-field_stores'] = array(
    'bundle' => 'platform_banners',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_stores',
    'label' => 'Stores',
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
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-store_banners-commerce_store'.
  $field_instances['node-store_banners-commerce_store'] = array(
    'bundle' => 'store_banners',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'commerce_store',
    'label' => 'Store',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-store_banners-field_banner'.
  $field_instances['node-store_banners-field_banner'] = array(
    'bundle' => 'store_banners',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'linkimagefield',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'linkimagefield',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_banner',
    'label' => 'Banner',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'class_field' => 0,
      'custom_target' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'longdesc_field' => 0,
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'rel_field' => 0,
      'target' => '_self',
      'title_field' => 0,
      'url' => '',
      'url_settings' => array(
        'class_field' => 1,
        'custom_target' => 0,
        'rel_field' => 1,
        'target' => '_self',
        'url' => '',
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'linkimagefield',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'linkimagefield_widget',
      'weight' => -3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Bank Account Number');
  t('Banner');
  t('Delivery Slots');
  t('IFSC Code');
  t('Merchant Alternative Number');
  t('PAN Number');
  t('Publish Date');
  t('Store');
  t('Store Logo');
  t('Store Open Hours');
  t('Stores');
  t('TIN Number');

  return $field_instances;
}
