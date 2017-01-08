<?php
/**
 * @file
 * community_resources.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function community_resources_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_resources:resources.
  $menu_links['main-menu_resources:resources'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resources',
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'resources',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'always_visible' => 0,
      'identifier' => 'main-menu_resources:resources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Resources');

  return $menu_links;
}
