<?php

/**
 * @file
 * Processing callbacks for the field_maxlength_alter module.
 */

/**
 * Alter the fields data table.
 */
function field_maxlength_alter_alter_data_table($fieldname, $max_length) {

  // db_query() does not allow the use of substitutions for table names or
  // field names so we use the proper functions to clean for sql-injection.
  // See http://drupal.org/node/310072
  $table_name = db_escape_table('field_data_' . $fieldname);
  $field_name = db_escape_field($fieldname . '_value');
  $max_length = db_escape_field($max_length);

  $query = "ALTER TABLE $table_name CHANGE $field_name $field_name VARCHAR( $max_length )";
  $result = db_query($query);
}

/**
 * Alter the fields revision table.
 */
function field_maxlength_alter_alter_revision_table($fieldname, $max_length) {

  // db_query() does not allow the use of substitutions for table names or
  // field names so we use the proper functions to clean for sql-injection.
  // See http://drupal.org/node/310072
  $table_name = db_escape_table('field_revision_' . $fieldname);
  $field_name = db_escape_field($fieldname . '_value');
  $max_length = db_escape_field($max_length);

  $query = "ALTER TABLE $table_name CHANGE $field_name $field_name VARCHAR( $max_length )";
  $result = db_query($query);
}

/**
 * Alter the field_config table.
 */
function field_maxlength_alter_alter_config_table($fieldname, $max_length) {
  // Create the query.
  $query = 'SELECT data FROM {field_config} WHERE field_name = :fieldname';
  // Get the result.
  $result = db_query($query, array(':fieldname' => $fieldname));
  // Data is stored serialized in db, unserialize it.
  $data = unserialize($result->fetchObject()->data);

  // We added the max_length field but don't need it past this point.
  unset($data['settings']['max_length_alter']);
  // Set the max_length in the config data.
  $data['settings']['max_length'] = (int) $max_length;
  // Serialize the config data before storing it back into the db.
  $data_serialized = serialize($data);

  // Update the field_config table with the altered config data.
  $num_updated = db_update('field_config')
  ->fields(array(
      'data' => $data_serialized,
    ))
  ->condition('field_name', $fieldname, '=')
  ->execute();
}
