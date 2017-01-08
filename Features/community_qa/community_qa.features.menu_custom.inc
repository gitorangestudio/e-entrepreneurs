<?php
/**
 * @file
 * community_qa.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function community_qa_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-member-menu.
  $menus['menu-member-menu'] = array(
    'menu_name' => 'menu-member-menu',
    'title' => 'Member Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Member Menu');

  return $menus;
}
