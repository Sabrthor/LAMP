<?php
/**
 * @file
 * blog_views.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function blog_views_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_blog_banner\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'52\',
            \'uid\' => \'1\',
            \'filename\' => \'blog-banners.jpg\',
            \'uri\' => \'public://blog-banners.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'106257\',
            \'status\' => \'1\',
            \'timestamp\' => \'1486116298\',
            \'uuid\' => \'e67f1ae3-a8d3-4e64-b51f-d085ad1906ec\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'1440\',
            \'height\' => \'419\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Super Admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'52\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_blog_banner\',
          \'langcode\' => \'und\',
          \'uuid\' => \'e67f1ae3-a8d3-4e64-b51f-d085ad1906ec\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'1\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Item\',
          \'foaf:Document\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Blog banner1\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'blog_banners\',
      \'uid\' => \'1\',
      \'uuid\' => \'07ce94a5-1090-40ca-bb17-2fc462414221\',
      \'vid\' => NULL,
      \'vuuid\' => \'f4bbad28-9052-4661-bc84-c06b0ddbd810\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident,</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident,</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'3\',
            \'uid\' => \'1\',
            \'filename\' => \'blog1.jpg\',
            \'uri\' => \'public://blog1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'80265\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484645563\',
            \'uuid\' => \'662a479c-bcea-49b9-9997-394744edbc85\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'384\',
            \'height\' => \'263\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Super Admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'3\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'662a479c-bcea-49b9-9997-394744edbc85\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Lorem ipsum dolor sit\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'blog\',
      \'uid\' => \'1\',
      \'uuid\' => \'46b2206a-2235-40b8-8eb0-008e0adfc020\',
      \'vid\' => NULL,
      \'vuuid\' => \'778f16b3-29a5-4f82-b75a-21189aa92cb0\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident,</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident,</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'4\',
            \'uid\' => \'1\',
            \'filename\' => \'blog2.jpg\',
            \'uri\' => \'public://blog2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'63374\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484645573\',
            \'uuid\' => \'61b82cb9-236a-4c35-b9f7-eb041ffcd34b\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'386\',
            \'height\' => \'263\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Super Admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'4\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'61b82cb9-236a-4c35-b9f7-eb041ffcd34b\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Lorem ipsum dolor sit\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'blog\',
      \'uid\' => \'1\',
      \'uuid\' => \'5d8ad2a3-eb5e-478e-ba56-7c43d3f61bf5\',
      \'vid\' => NULL,
      \'vuuid\' => \'ce05afac-566b-4ab5-939b-9ff925935a16\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident,</p>\\r\\n",
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident,</p>\\n",
            \'safe_summary\' => \'\',
          ),
        ),
      ),
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'5\',
            \'uid\' => \'1\',
            \'filename\' => \'blog3.jpg\',
            \'uri\' => \'public://blog3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'83069\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484645582\',
            \'uuid\' => \'dee2bcf7-6f83-456a-84d3-2ea6e113edba\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'386\',
            \'height\' => \'263\',
          ),
        ),
      ),
      \'files\' => array(),
      \'language\' => \'und\',
      \'last_comment_name\' => NULL,
      \'last_comment_timestamp\' => NULL,
      \'last_comment_uid\' => \'1\',
      \'log\' => \'\',
      \'menu\' => NULL,
      \'name\' => \'Super Admin\',
      \'nid\' => NULL,
      \'node_export_dependency\' => array(
        array(
          \'type\' => \'file\',
          \'id\' => \'5\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'dee2bcf7-6f83-456a-84d3-2ea6e113edba\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
      \'rdf_mapping\' => array(
        \'rdftype\' => array(
          \'sioc:Post\',
          \'sioct:BlogPost\',
        ),
        \'title\' => array(
          \'predicates\' => array(
            \'dc:title\',
          ),
        ),
        \'created\' => array(
          \'predicates\' => array(
            \'dc:date\',
            \'dc:created\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'changed\' => array(
          \'predicates\' => array(
            \'dc:modified\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
        \'body\' => array(
          \'predicates\' => array(
            \'content:encoded\',
          ),
        ),
        \'uid\' => array(
          \'predicates\' => array(
            \'sioc:has_creator\',
          ),
          \'type\' => \'rel\',
        ),
        \'name\' => array(
          \'predicates\' => array(
            \'foaf:name\',
          ),
        ),
        \'comment_count\' => array(
          \'predicates\' => array(
            \'sioc:num_replies\',
          ),
          \'datatype\' => \'xsd:integer\',
        ),
        \'last_activity\' => array(
          \'predicates\' => array(
            \'sioc:last_activity_date\',
          ),
          \'datatype\' => \'xsd:dateTime\',
          \'callback\' => \'date_iso8601\',
        ),
      ),
      \'revision_timestamp\' => NULL,
      \'revision_uid\' => \'1\',
      \'status\' => \'1\',
      \'sticky\' => \'0\',
      \'title\' => \'Lorem ipsum dolor sit \',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'blog\',
      \'uid\' => \'1\',
      \'uuid\' => \'7113acb0-5d2e-4a26-9fa8-5495ba48f8cd\',
      \'vid\' => NULL,
      \'vuuid\' => \'92d759e0-d8ca-483d-b722-143ef49bf358\',
    ),
)',
);
  return $node_export;
}
