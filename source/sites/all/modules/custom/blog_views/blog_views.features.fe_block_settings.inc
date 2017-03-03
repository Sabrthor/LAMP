<?php
/**
 * @file
 * blog_views.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function blog_views_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-blog_order_now'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'blog_order_now',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'top_footer_fourth',
        'status' => 1,
        'theme' => 'kirana11',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Order now',
    'visibility' => 1,
  );

  $export['block-blog_topics'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'blog_topics',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'top_footer_second',
        'status' => 1,
        'theme' => 'kirana11',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Blog Topics',
    'visibility' => 1,
  );

  $export['blog-recent'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'recent',
    'module' => 'blog',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'sidebar_second',
        'status' => 1,
        'theme' => 'kirana11',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => 1,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blog_banner-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blog_banner-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'blog
blog/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'slider',
        'status' => 1,
        'theme' => 'kirana11',
        'weight' => -32,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['views-blogs-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'blogs-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => 'cart
checkout/*
user/*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'kirana11' => array(
        'region' => 'recent_blogs',
        'status' => 1,
        'theme' => 'kirana11',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
