<?php
function manage_products_services_services_resources() {
    $resources = array(
        'manage_products_resources' => array(
            'actions' => array(
                'add_product_store' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_add',
                    'args' => array(
                        array(
                            'name'         => 'fid',
                            'type'         => 'int',
                            'description'  => t('Image Id.'),
                            'source'       => array('data' => 'fid'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'tid',
                            'type'         => 'int',
                            'description'  => t('Category Id.'),
                            'source'       => array('data' => 'tid'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'price',
                            'type'         => 'int',
                            'description'  => t(' Mrp.'),
                            'source'       => array('data' => 'price'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'sale_price',
                            'type'         => 'int',
                            'description'  => t(' Sale Price.'),
                            'source'       => array('data' => 'sale_price'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'title',
                            'type'         => 'varchar',
                            'length'       => 255,
                            'description'  => t('title.'),
                            'source'       => array('data' => 'title'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'stock',
                            'type'         => 'int',
                            'description'  => t('Stock.'),
                            'source'       => array('data' => 'stock'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'store_id',
                            'type'         => 'int',
                            'description'  => t('Store Id.'),
                            'source'       => array('data' => 'store_id'),
                            'optional'     => FALSE,
                        ),

                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
                'update_product' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_update',
                    'args' => array(
                        array(
                            'name'         => 'pid',
                            'type'         => 'int',
                            'description'  => t(' Product Id.'),
                            'source'       => array('data' => 'pid'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'price',
                            'type'         => 'int',
                            'description'  => t(' Mrp.'),
                            'source'       => array('data' => 'price'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'sale_price',
                            'type'         => 'int',
                            'description'  => t(' Sale Price.'),
                            'source'       => array('data' => 'sale_price'),
                            'optional'     => FALSE,
                        ),
					  array(
						'name'         => 'status',
						'type'         => 'int',
						'description'  => t('Status.'),
						'source'       => array('data' => 'status'),
						'optional'     => FALSE,
					  ),
                        array(
                            'name'         => 'stock',
                            'type'         => 'int',
                            'description'  => t('Stock.'),
                            'source'       => array('data' => 'stock'),
                            'optional'     => FALSE,
                        ),

                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
                'unflag_product_store' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_unflag',
                    'args' => array(
                        array(
                            'name'         => 'pid',
                            'type'         => 'int',
                            'description'  => t('Product Id.'),
                            'source'       => array('data' => 'pid'),
                            'optional'     => FALSE,
                        ),

                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
                'order_list' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_order_update',
                    'args' => array(
                        array(
                            'name'         => 'order_id',
                            'type'         => 'int',
                            'description'  => t('Order Id.'),
                            'source'       => array('data' => 'order_id'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'status_update',
                            'type'         => 'varchar',
                            'length'       => 255,
                            'description'  => t('title.'),
                            'source'       => array('data' => 'status_update'),
                            'optional'     => FALSE,
                        ),

                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
                'product_scan' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_scan',
                    'args' => array(
                        array(
                            'name'         => 'bar_code',
                            'type'         => 'int',
                            'description'  => t('Product Id.'),
                            'source'       => array('data' => 'bar_code'),
                            'optional'     => FALSE,
                        ),


                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
                'product_line_update' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_line_update',
                    'args' => array(
                        array(
                            'name'         => 'item_id',
                            'type'         => 'int',
                            'description'  => t('Product Id.'),
                            'source'       => array('data' => 'item_id'),
                            'optional'     => FALSE,
                        ),
                        array(
                            'name'         => 'quantity',
                            'type'         => 'int',
                            'description'  => t('Product Id.'),
                            'source'       => array('data' => 'quantity'),
                            'optional'     => FALSE,
                        ),


                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
                'product_line_delete' => array(
                    'help' => t('Add products to store.'),
                    'file' => array(
                        'type' => 'inc',
                        'module' => 'manage_products_services',
                        'name' => 'manage_products.resource',
                    ),
                    'callback' => 'manage_products_line_delete',
                    'args' => array(
                        array(
                            'name'         => 'item_id',
                            'type'         => 'int',
                            'description'  => t('Product Id.'),
                            'source'       => array('data' => 'item_id'),
                            'optional'     => FALSE,
                        ),
                          array(
                            'name'         => 'order_id',
                            'type'         => 'int',
                            'description'  => t('order Id.'),
                            'source'       => array('data' => 'order_id'),
                            'optional'     => FALSE,
                        ),


                    ),
                    'access callback' => '_drupalgap_resource_access',
                    'access callback file' => array(
                        'type' => 'inc',
                        'module' => 'drupalgap',
                        'name' => 'drupalgap.resource',
                    ),
                    'access arguments' => array('access user profiles'),
                    'access arguments append' => TRUE,
                ),
             'product_add_barcode' => array(
              'help' => t('Add products to store.'),
              'file' => array(
                  'type' => 'inc',
                  'module' => 'manage_products_services',
                  'name' => 'manage_products.resource',
              ),
              'callback' => 'manage_products_add_barcode',
              'args' => array(
                  array(
                      'name'         => 'bar_code',
                      'type'         => 'int',
                      'description'  => t('barcode.'),
                      'source'       => array('data' => 'bar_code'),
                      'optional'     => FALSE,
                  ),


              ),
              'access callback' => '_drupalgap_resource_access',
              'access callback file' => array(
                  'type' => 'inc',
                  'module' => 'drupalgap',
                  'name' => 'drupalgap.resource',
              ),
              'access arguments' => array('access user profiles'),
              'access arguments append' => TRUE,
          ),
            ),
        ),
    );
    return $resources;
}
