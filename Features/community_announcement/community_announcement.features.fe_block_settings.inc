<?php
/**
 * @file
 * community_announcement.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function community_announcement_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-announcement-block'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'announcement-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'community' => array(
        'region' => 'front_announcement',
        'status' => 1,
        'theme' => 'community',
        'weight' => 0,
      ),
      'shiny' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'shiny',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
