<?php
/**
 * @file
 * community_class.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function community_class_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function community_class_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function community_class_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('A class is a group of users taking the same training program at the same time.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_default_rules_link().
 */
function community_class_default_rules_link() {
  $items = array();
  $items['accept_new_project'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Accept",
      "link_type" : "token",
      "bundles" : { "project" : "project" },
      "entity_link" : 1,
      "view_mode" : {
        "full" : "full",
        "teaser" : "teaser",
        "rss" : "rss",
        "search_index" : "search_index",
        "search_result" : "search_result",
        "token" : "token",
        "events_in_project_page" : "events_in_project_page",
        "project_in_panel_left_" : "project_in_panel_left_",
        "resources_page" : "resources_page",
        "revision" : "revision"
      }
    },
    "name" : "accept_new_project",
    "label" : "Accept New Project",
    "path" : "accept_new_project",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['decline_new_project'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Decline",
      "link_type" : "token",
      "bundles" : { "project" : "project" },
      "entity_link" : 1,
      "view_mode" : {
        "full" : "full",
        "teaser" : "teaser",
        "rss" : "rss",
        "search_index" : "search_index",
        "search_result" : "search_result",
        "token" : "token",
        "events_in_project_page" : "events_in_project_page",
        "project_in_panel_left_" : "project_in_panel_left_",
        "resources_page" : "resources_page",
        "revision" : "revision"
      }
    },
    "name" : "decline_new_project",
    "label" : "Decline New Project",
    "path" : "decline_new_project",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['need_more_info'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Need More Info",
      "link_type" : "token",
      "bundles" : { "project" : "project" },
      "entity_link" : 1,
      "view_mode" : {
        "full" : "full",
        "teaser" : "teaser",
        "rss" : "rss",
        "search_index" : "search_index",
        "search_result" : "search_result",
        "token" : "token",
        "events_in_project_page" : "events_in_project_page",
        "project_in_panel_left_" : "project_in_panel_left_",
        "resources_page" : "resources_page",
        "section_card" : "section_card",
        "revision" : "revision"
      }
    },
    "name" : "need_more_info",
    "label" : "Need More Info",
    "path" : "need_more_info",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['submit_a_project'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Submit Application",
      "link_type" : "token",
      "bundles" : { "project" : "project" },
      "entity_link" : 1,
      "view_mode" : { "full" : "full", "project_in_panel_left_" : "project_in_panel_left_" }
    },
    "name" : "submit_a_project",
    "label" : "Submit A Project",
    "path" : "submit-application",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  $items['survey_request'] = entity_import('rules_link', '{
    "settings" : {
      "text" : "Survey Request",
      "link_type" : "javascript",
      "bundles" : { "project" : "project" },
      "entity_link" : 0,
      "view_mode" : []
    },
    "name" : "survey_request",
    "label" : "Survey Request",
    "path" : "survey-request",
    "entity_type" : "node",
    "rdf_mapping" : []
  }');
  return $items;
}
