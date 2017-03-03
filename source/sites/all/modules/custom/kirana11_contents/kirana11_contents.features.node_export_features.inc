<?php
/**
 * @file
 * kirana11_contents.features.node_export_features.inc
 */

/**
 * Implements hook_node_export_features_default().
 */
function kirana11_contents_node_export_features_default() {
  $node_export = array(
  'code_string' => 'array(
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'22\',
            \'uid\' => \'1\',
            \'filename\' => \'itc.jpg\',
            \'uri\' => \'public://itc.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'57688\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936028\',
            \'uuid\' => \'43ff2ae9-d00c-4454-93c5-55f0637e050a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'183\',
            \'height\' => \'112\',
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
          \'id\' => \'22\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'43ff2ae9-d00c-4454-93c5-55f0637e050a\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'ITC Limited\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'top_brands\',
      \'uid\' => \'1\',
      \'uuid\' => \'120a3ebe-6f10-4a61-afc9-3a514100fb2a\',
      \'vid\' => NULL,
      \'vuuid\' => \'a9463419-ec2f-4874-acf0-74a617175022\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'23\',
            \'uid\' => \'1\',
            \'filename\' => \'brooke-bond.jpg\',
            \'uri\' => \'public://brooke-bond.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'60894\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936045\',
            \'uuid\' => \'7d3ebd65-ddf5-4b99-824c-08b0ccc1597a\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'183\',
            \'height\' => \'112\',
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
          \'id\' => \'23\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'7d3ebd65-ddf5-4b99-824c-08b0ccc1597a\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Brooke Bond\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'top_brands\',
      \'uid\' => \'1\',
      \'uuid\' => \'141b0be5-4892-4765-8cff-bc857c4c1d72\',
      \'vid\' => NULL,
      \'vuuid\' => \'8977bea7-48a1-47dd-ac5a-73528713a1ea\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Text will coming soon Text will coming soon Text will coming soon Text will coming soon\\r\\n<a href=\\"javascript:\\">Shop now</a>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Text will coming soon Text will coming soon Text will coming soon Text will coming soon<br /><a href=\\"\\">Shop now</a></p>\\n",
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
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'31\',
            \'uid\' => \'1\',
            \'filename\' => \'ninjacart-banner.jpg\',
            \'uri\' => \'public://ninjacart-banner.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'94581\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484130131\',
            \'uuid\' => \'1830f9b9-b5d0-4104-ad20-30fe00dfaa2c\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'374\',
            \'height\' => \'149\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'26\',
            \'uid\' => \'1\',
            \'filename\' => \'ninjacart.jpg\',
            \'uri\' => \'public://ninjacart.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'53430\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936127\',
            \'uuid\' => \'75a987c1-ee82-44f9-abfb-891ba2c57563\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'191\',
            \'height\' => \'112\',
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
          \'id\' => \'26\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'75a987c1-ee82-44f9-abfb-891ba2c57563\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'31\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_banner_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'1830f9b9-b5d0-4104-ad20-30fe00dfaa2c\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Ninjacart\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'our_partners\',
      \'uid\' => \'1\',
      \'uuid\' => \'16a72e03-a332-4403-be96-d65521bff51b\',
      \'vid\' => NULL,
      \'vuuid\' => \'32808bb3-11af-4f8d-814a-cb02d9e7558f\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Text will coming soon Text will coming soon Text will coming soon Text will coming soon\\r\\n<a href=\\"javascript:\\">Shop now</a>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Text will coming soon Text will coming soon Text will coming soon Text will coming soon<br /><a href=\\"\\">Shop now</a></p>\\n",
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
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'30\',
            \'uid\' => \'1\',
            \'filename\' => \'licious-banner.jpg\',
            \'uri\' => \'public://licious-banner.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'64076\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484130120\',
            \'uuid\' => \'2650095e-c69c-4bae-a0ac-828453ab9463\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'374\',
            \'height\' => \'149\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'24\',
            \'uid\' => \'1\',
            \'filename\' => \'licious.jpg\',
            \'uri\' => \'public://licious.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'53219\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936064\',
            \'uuid\' => \'2149f069-f4a3-4470-9221-82cd9bde83e4\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'191\',
            \'height\' => \'112\',
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
          \'id\' => \'24\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'2149f069-f4a3-4470-9221-82cd9bde83e4\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'30\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_banner_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'2650095e-c69c-4bae-a0ac-828453ab9463\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Licious\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'our_partners\',
      \'uid\' => \'1\',
      \'uuid\' => \'3f45f424-6efe-434a-9f34-cf1e9cff9ef1\',
      \'vid\' => NULL,
      \'vuuid\' => \'67740fac-f8d2-43aa-8026-093171803fca\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, \',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, </p>\\n",
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
            \'fid\' => \'33\',
            \'uid\' => \'1\',
            \'filename\' => \'blog3.jpg\',
            \'uri\' => \'public://blog3.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'83069\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484131872\',
            \'uuid\' => \'df3017bc-2412-48a0-9b28-19902441b2e2\',
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
          \'id\' => \'33\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'df3017bc-2412-48a0-9b28-19902441b2e2\',
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
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'28\',
            \'uid\' => \'1\',
            \'filename\' => \'brooke-bond.jpg\',
            \'uri\' => \'public://brooke-bond_0.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'60894\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936415\',
            \'uuid\' => \'de880efc-f954-43c0-98fa-30a409fe2f8d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'183\',
            \'height\' => \'112\',
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
          \'id\' => \'28\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'de880efc-f954-43c0-98fa-30a409fe2f8d\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Brooke bond\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'top_brands\',
      \'uid\' => \'1\',
      \'uuid\' => \'5c5f4975-9d76-4aab-abec-3b4672e85a9c\',
      \'vid\' => NULL,
      \'vuuid\' => \'5449a566-1d05-4885-9f17-7c57c51a7364\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => \'Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, \',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, </p>\\n",
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
            \'fid\' => \'34\',
            \'uid\' => \'1\',
            \'filename\' => \'blog2.jpg\',
            \'uri\' => \'public://blog2.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'63374\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484131922\',
            \'uuid\' => \'419002ee-0619-413c-bf1f-d4e3c4476754\',
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
          \'id\' => \'34\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'419002ee-0619-413c-bf1f-d4e3c4476754\',
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
            \'value\' => \'Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, \',
            \'summary\' => \'\',
            \'format\' => \'full_html\',
            \'safe_value\' => "<p>Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, </p>\\n",
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
            \'fid\' => \'35\',
            \'uid\' => \'1\',
            \'filename\' => \'blog1.jpg\',
            \'uri\' => \'public://blog1.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'80265\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484131953\',
            \'uuid\' => \'7175b09e-6738-4886-914b-3f5a635244a8\',
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
          \'id\' => \'35\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'7175b09e-6738-4886-914b-3f5a635244a8\',
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
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'2\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'21\',
            \'uid\' => \'1\',
            \'filename\' => \'britannia.jpg\',
            \'uri\' => \'public://britannia.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'66131\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936010\',
            \'uuid\' => \'015320a3-b3d2-4cc8-a182-6c47fd4078ad\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'183\',
            \'height\' => \'112\',
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
          \'id\' => \'21\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'015320a3-b3d2-4cc8-a182-6c47fd4078ad\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Britannia\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'top_brands\',
      \'uid\' => \'1\',
      \'uuid\' => \'da094f4b-4039-4e85-b6a9-5bb424d1cedd\',
      \'vid\' => NULL,
      \'vuuid\' => \'13007701-a7ff-4055-acea-0875167de14b\',
    ),
  (object) array(
      \'changed\' => NULL,
      \'cid\' => \'0\',
      \'comment\' => \'1\',
      \'comment_count\' => \'0\',
      \'created\' => NULL,
      \'data\' => NULL,
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'27\',
            \'uid\' => \'1\',
            \'filename\' => \'hindustan.jpg\',
            \'uri\' => \'public://hindustan.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'57604\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936166\',
            \'uuid\' => \'0111545d-2c33-487f-88b9-937feb28405d\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'183\',
            \'height\' => \'112\',
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
          \'id\' => \'27\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'0111545d-2c33-487f-88b9-937feb28405d\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Hindustan\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'top_brands\',
      \'uid\' => \'1\',
      \'uuid\' => \'dce5b562-e76e-4b4b-b903-6a900773490e\',
      \'vid\' => NULL,
      \'vuuid\' => \'8b94e901-0849-4885-a421-0ff32d5d3699\',
    ),
  (object) array(
      \'body\' => array(
        \'und\' => array(
          array(
            \'value\' => "Text will coming soon Text will coming soon Text will coming soon Text will coming soon\\r\\n<a href=\\"javascript:\\">Shop now</a>",
            \'summary\' => \'\',
            \'format\' => \'filtered_html\',
            \'safe_value\' => "<p>Text will coming soon Text will coming soon Text will coming soon Text will coming soon<br /><a href=\\"\\">Shop now</a></p>\\n",
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
      \'field_banner_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'32\',
            \'uid\' => \'1\',
            \'filename\' => \'fresh-to-home-banner.jpg\',
            \'uri\' => \'public://fresh-to-home-banner.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'74348\',
            \'status\' => \'1\',
            \'timestamp\' => \'1484130142\',
            \'uuid\' => \'7c12e7fd-985a-437a-8bbd-9e7e8d195443\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'374\',
            \'height\' => \'149\',
          ),
        ),
      ),
      \'field_image\' => array(
        \'und\' => array(
          array(
            \'fid\' => \'25\',
            \'uid\' => \'1\',
            \'filename\' => \'fresh-to-home.jpg\',
            \'uri\' => \'public://fresh-to-home.jpg\',
            \'filemime\' => \'image/jpeg\',
            \'filesize\' => \'56917\',
            \'status\' => \'1\',
            \'timestamp\' => \'1483936088\',
            \'uuid\' => \'234950a5-daf5-4c87-86da-a1bfd72d77ae\',
            \'rdf_mapping\' => array(),
            \'alt\' => \'\',
            \'title\' => \'\',
            \'width\' => \'191\',
            \'height\' => \'112\',
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
          \'id\' => \'25\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'234950a5-daf5-4c87-86da-a1bfd72d77ae\',
        ),
        array(
          \'type\' => \'file\',
          \'id\' => \'32\',
          \'delta\' => 0,
          \'property\' => \'fid\',
          \'module\' => \'image\',
          \'field_name\' => \'field_banner_image\',
          \'langcode\' => \'und\',
          \'uuid\' => \'7c12e7fd-985a-437a-8bbd-9e7e8d195443\',
        ),
      ),
      \'node_export_drupal_version\' => \'7\',
      \'path\' => NULL,
      \'picture\' => \'0\',
      \'promote\' => \'0\',
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
      \'title\' => \'Fresh to home\',
      \'tnid\' => \'0\',
      \'translate\' => \'0\',
      \'type\' => \'our_partners\',
      \'uid\' => \'1\',
      \'uuid\' => \'f21d6050-5cd0-4783-87d7-b3e6ef71df6b\',
      \'vid\' => NULL,
      \'vuuid\' => \'ed2ce03e-a0fa-44e8-84e0-8debedf2c33a\',
    ),
)',
);
  return $node_export;
}
