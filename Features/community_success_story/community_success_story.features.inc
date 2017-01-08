<?php
/**
 * @file
 * community_success_story.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function community_success_story_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function community_success_story_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function community_success_story_node_info() {
  $items = array(
    'success_story' => array(
      'name' => t('Success Story'),
      'base' => 'node_content',
      'description' => t('Used for adding success stories.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
