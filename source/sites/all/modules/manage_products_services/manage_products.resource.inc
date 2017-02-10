<?php

function manage_products_add($fid, $tid,  $price, $sale_price, $title, $stock, $store_id) {
    // Product
    global $user;
    $uid = $user->uid;
    $product = commerce_product_new('grocery');
    $product->title = $title;
    $product->language = LANGUAGE_NONE;
    $product->uid = $uid;
    $image_fid = $fid;
    $file = file_load($image_fid);
    if (isset($file->filename)) {
        $product->field_image[LANGUAGE_NONE][] = array(
            'fid' => $file->fid,
            'filename' => $file->filename,
            'filemime' => $file->filemime,
            'uid' => 1,
            'uri' => $file->uri,
            'status' => 1
        );
    }
    $product->commerce_price[LANGUAGE_NONE][0] = array(
        'amount' => $price, // $10
        'currency_code' => "INR",
    );
    $product->field_commerce_saleprice[LANGUAGE_NONE][0] = array(
        'amount' => $sale_price, // $10
        'currency_code' => "INR",
    );
    $product->commerce_stock[LANGUAGE_NONE][0]['value'] = $stock;
    $product->commerce_store[LANGUAGE_NONE][0]['target_id'] = $store_id;
    //$product->field_categories[LANGUAGE_NONE][0]['tid'] = 20;
    commerce_product_save($product);
    $flag = flag_get_flag('merchant_products');
    $flag->flag('flag', $product->product_id, user_load($uid), TRUE);
    $node = new stdClass();
    $node->type = 'grocery';
    node_object_prepare($node);

    $node->title    = $product->title;
    $node->language = LANGUAGE_NONE;
    $node->field_categories[LANGUAGE_NONE][0]['tid'] = $tid;
    $node->field_product_display['und'][0]['product_id'] = $product->product_id;
    node_save($node);
    return $product;
}

function manage_products_update($pid,  $price, $sale_price, $stock, $status) {
    global $user;
    $uid = $user->uid;
    $product = commerce_product_load($pid);
    $product->commerce_price[LANGUAGE_NONE][0] = array(
        'amount' => $price, // $10
        'currency_code' => "INR",
    );
    $product->field_commerce_saleprice[LANGUAGE_NONE][0] = array(
        'amount' => $sale_price, // $10
        'currency_code' => "INR",
    );
    $product->commerce_stock[LANGUAGE_NONE][0]['value'] = $stock;
    commerce_product_save($product);
    if($status == 0){
	  $flag = flag_get_flag('merchant_products');
	  $flag->flag('unflag', $pid, user_load($uid), TRUE);
	}else{
	  $flag = flag_get_flag('merchant_products');
	  $flag->flag('flag', $pid, user_load($uid), TRUE);
	}
    return $product;

}

function manage_products_unflag($pid) {
    global $user;
    $uid = $user->uid;
    $flag = flag_get_flag('merchant_products');
    $flag->flag('unflag', $pid, user_load($uid), TRUE);
    db_update('mystore_products')
        ->fields(array('status' => 1))
        ->condition('user_id', $uid, '=')
        ->condition('barcode', $pid, '=')
        ->execute();
}

function manage_products_order_update($order_id, $status_update){
    $order = commerce_order_load($order_id);
    //commerce_order_status_update($order, $status_update);
    //commerce_order_status_update($order, 'complete');
    commerce_order_status_update($order, $status_update, FALSE, NULL);
}


function manage_products_scan($bar_code){
    global $user;
    $uid = $user->uid;
    $query0 = db_select('mystore_products', 'mp');
    $query0->condition('mp.user_id', $uid, '=')
        ->condition('mp.barcode', $bar_code, '=')
        ->fields('mp', array('status','product_id'));
    $result0 = $query0->execute()->fetchObject();
    $status = $result0->status;
    $product_id = $result0->product_id;
    if($result0 && $status == 1) {
    $product = commerce_product_load($product_id);
        return $product;
        //return services_error('Products areleady available', 406);

    } elseif($result0 && $status == 0) {
        db_update('mystore_products')
            ->fields(array('status' => 1))
            ->condition('user_id', $uid, '=')
            ->condition('barcode', $bar_code, '=')
            ->execute();
        $flag = flag_get_flag('merchant_products');
        $flag->flag('flag', $product_id, user_load($uid), TRUE);
        $product = commerce_product_load($product_id);
        return $product;

    } else {
        $query = db_select('field_data_field_barcode', 'fb');
        $query->condition('fb.bundle', 'grocery', '=')
            ->condition('fb.field_barcode_value', $bar_code, '=')
            ->fields('fb', array('entity_id'));
        $result = $query->execute()->fetchObject();
        if ($result) {
            $pid = $result->entity_id;
            $query1 = db_select('commerce_store', 'cs');
            $query1->condition('cs.uid', $uid, '=')
                ->fields('cs', array('store_id'));
            $result1 = $query1->execute()->fetchObject();
            $store_id =$result1->store_id;
            $query2 = new EntityFieldQuery;
            $query2->entityCondition('entity_type', 'node', '=')
                ->propertyCondition('type', 'grocery')
                ->fieldCondition('field_product_display', 'product_id', $pid, '=')
                ->range(0, 1);
            if ($result2 = $query2->execute()) {
                // Return node id.
                $nid =array_shift(array_keys($result2['node']));
            }
            $node1 = node_load($nid);
            $category = $node1->field_categories[LANGUAGE_NONE][0]['tid'];
            $brand = $node1->field_brand[LANGUAGE_NONE][0]['tid'] ;

            //$nid = reset($result['node'])->nid;
            $product = commerce_product_load($pid);
            $price = $product->commerce_price[LANGUAGE_NONE][0]['amount'];
            $fid = $product->field_image[und][0][fid];
            $title = $product->title;
            $stock = 20;
            $product = commerce_product_new('product');
            $product->title = $title;
            $product->language = LANGUAGE_NONE;
            $product->uid = $uid;
            $image_fid = $fid;
            $file = file_load($image_fid);
            if (isset($file->filename)) {
                $product->field_image[LANGUAGE_NONE][] = array(
                    'fid' => $file->fid,
                    'filename' => $file->filename,
                    'filemime' => $file->filemime,
                    'uid' => 1,
                    'uri' => $file->uri,
                    'status' => 1
                );
            }
            $product->commerce_price[LANGUAGE_NONE][0] = array(
                'amount' => $price, // $10
                'currency_code' => "INR",
            );
            $product->commerce_stock[LANGUAGE_NONE][0]['value'] = $stock;
            $product->field_barcode[LANGUAGE_NONE][0]['value'] = $bar_code;
            $product->commerce_store[LANGUAGE_NONE][0]['target_id'] = $store_id;
            commerce_product_save($product);
            $flag = flag_get_flag('merchant_products');
            $flag->flag('flag', $product->product_id, user_load($uid), TRUE);
            db_insert('mystore_products')
                ->fields(array(
                    'user_id' => $uid,
                    'product_id' => $product->product_id,
                    'barcode' => $bar_code,
                    'status' => 1
                ))
                ->execute();
            $node = new stdClass();
            $node->type = 'product_display';
            node_object_prepare($node);

            $node->title    = $product->title;
            $node->language = LANGUAGE_NONE;
            $node->field_categories[LANGUAGE_NONE][0]['tid'] = $category;
            $node->field_brand[LANGUAGE_NONE][0]['tid'] = $brand;
            $node->field_product['und'][0]['product_id'] = $product->product_id;
            node_save($node);
            return $product;
            //return $pid;
        }else {
            $product_empty =array();
            $product_empty['Error']='Product Not found';
            return $product_empty;
        }
    }

}

function manage_products_line_update($item_id, $quantity, $order) {
    //$line_item = commerce_line_item_load(array($item_id), array());
    $line_item = commerce_line_item_load($item_id);
    //commerce_line_items[und][line_items][148][quantity]
    //$line_item->quantity['und'][0]['valaue'] = 1234;
    $line_item->quantity = $quantity;
    commerce_line_item_save($line_item);
    entity_get_controller('commerce_line_item')->resetCache(array($line_item->line_item_id));
    //$order_wrapper = entity_metadata_wrapper('commerce_order', $order);
    //$order_wrapper->commerce_line_items[] = $line_item;
    //commerce_order_save($line_item->order_id);
    $line_item_update = array();
    $line_item_update['order_id'] =$line_item->order_id;
    $line_item_update['item_total'] =$line_item->commerce_total['und'][0]['amount'];
    $line_item_update['quantity'] =$line_item->quantity;
   // commerce_order_save($line_item->order_id);
    $total= commerce_order_load($line_item->order_id);
    commerce_order_save($total);
    $line_item_update['order_total'] =$total->commerce_order_total['und'][0]['amount'];
    return $line_item_update;
}


function manage_products_line_delete($item_id, $order_id) {
    //$line_item = commerce_line_item_load(array($item_id), array());
    //$line_item = commerce_line_item_load($item_id);
    //commerce_line_items[und][line_items][148][quantity]
    //$line_item->quantity['und'][0]['valaue'] = 1234;
    //$line_item->quantity = $quantity;
    commerce_line_item_delete($item_id);
    //$line_item = commerce_line_item_load($item_id);
    //$line_item_update = array();
    //$line_item_update['order_id'] =$line_item->order_id;
    $total= commerce_order_load($order_id);
    //commerce_order_save($total);
    //$line_item_update['order_total'] =$total->commerce_order_total['und'][0]['amount'];
    return $total->commerce_order_total['und'][0]['amount'];
}


function manage_products_add_barcode($bar_code){
    $node = new stdClass();
    $node->type = 'page';
    node_object_prepare($node);
    $node->title    = $bar_code;
    $node->language = LANGUAGE_NONE;
    node_save($node);
    return 'Product Succesfully submited';

}
