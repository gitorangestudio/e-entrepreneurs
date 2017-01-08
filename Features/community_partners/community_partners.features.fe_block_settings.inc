<?php
/**
 * @file
 * community_partners.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function community_partners_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-partners_block-block'] = array(
    'cache' => -1,
    'css_class' => 'partner-slider',
    'custom' => 0,
    'delta' => 'partners_block-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(),
    'themes' => array(
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'community' => array(
        'region' => 'front_partners',
        'status' => 1,
        'theme' => 'community',
        'weight' => -15,
      ),
      'shiny' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'shiny',
        'weight' => -15,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
