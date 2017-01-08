<?php
/**
 * @file
 * community_events.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function community_events_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'always_visible' => 0,
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'events',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');

  return $menu_links;
}
