<?php
/**
 * @file
 * This file will create product_price_list table in database.
 */

/**
 * Implements hook_schema().
 */
function manage_products_services_schema() {
    $schema['mystore_products'] = array(
        'description' => 'custom table to store per product per user price',
        'fields' => array(
            'id' => array(
                'description' => 'The primary identifier for this table',
                'type' => 'serial',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'length' => 50,
            ),
            'product_id' => array(
                'description' => 'Mystore product id',
                'type' => 'varchar',
                'not null' => TRUE,
                'length' => 50,
            ),
            'barcode' => array(
                'description' => 'Mystore product barcode',
                'type' => 'varchar',
                'not null' => TRUE,
                'length' => 50,
            ),
            'user_id' => array(
                'description' => 'It stores the user id of drupal user',
                'type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'length' => 50,
            ),
            'status' => array(
                'description' => 'Product Status',
                'type' => 'int',
                'unsigned' => TRUE,
                'not null' => TRUE,
                'length' => 50,
            ),
        ),
        'primary key' => array('id'),
        'foreign keys' => array(
            'product_id' => array(
                'table' => 'commerce_product',
                'columns' => array('product_id' => 'product_id'),
            ),
            'user_id' => array(
                'table' => 'users',
                'columns' => array('user_id' => 'uid'),
            ),
        ),
    );
    return $schema;
}
