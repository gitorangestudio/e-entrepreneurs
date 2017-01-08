<?php
/**
 * @file
 * community_business_idea.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function community_business_idea_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function community_business_idea_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function community_business_idea_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: featured_projects
  $nodequeues['featured_projects'] = array(
    'name' => 'featured_projects',
    'title' => 'Featured Projects',
    'subqueue_title' => '',
    'size' => 10,
    'link' => '[+] Featured',
    'link_remove' => '[-] Featured',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 1,
    'insert_at_front' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'project',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_node_info().
 */
function community_business_idea_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Business Idea'),
      'base' => 'node_content',
      'description' => t('A project is where entrepreneurs add business ideas and collaborate around them.'),
      'has_title' => '1',
      'title_label' => t('Business Idea title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
