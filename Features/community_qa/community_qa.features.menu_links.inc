<?php
/**
 * @file
 * community_qa.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function community_qa_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-member-menu_questions:new-questions.
  $menu_links['menu-member-menu_questions:new-questions'] = array(
    'menu_name' => 'menu-member-menu',
    'link_path' => 'new-questions',
    'router_path' => 'new-questions',
    'link_title' => 'Questions',
    'options' => array(
      'always_visible' => 0,
      'alter' => TRUE,
      'attributes' => array(),
      'identifier' => 'menu-member-menu_questions:new-questions',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Questions');

  return $menu_links;
}
