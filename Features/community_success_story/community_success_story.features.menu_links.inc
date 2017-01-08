<?php
/**
 * @file
 * community_success_story.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function community_success_story_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_success-stories:success-stories.
  $menu_links['main-menu_success-stories:success-stories'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'success-stories',
    'router_path' => 'success-stories',
    'link_title' => 'Success Stories',
    'options' => array(
      'always_visible' => 0,
      'alter' => TRUE,
      'attributes' => array(
        'title' => 'success',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => '',
        'style' => '',
      ),
      'identifier' => 'main-menu_success-stories:success-stories',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Success Stories');

  return $menu_links;
}
