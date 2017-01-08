<?php
/**
 * @file
 * community_business_idea.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function community_business_idea_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project';
  $strongarm->value = 0;
  $export['comment_anonymous_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project';
  $strongarm->value = 1;
  $export['comment_default_mode_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project';
  $strongarm->value = '50';
  $export['comment_default_per_page_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project';
  $strongarm->value = 1;
  $export['comment_form_location_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project';
  $strongarm->value = '1';
  $export['comment_preview_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project';
  $strongarm->value = '0';
  $export['comment_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project';
  $strongarm->value = 1;
  $export['comment_subject_field_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__project';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => TRUE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'project_in_panel_left_' => array(
        'custom_settings' => TRUE,
      ),
      'events_in_project_page' => array(
        'custom_settings' => FALSE,
      ),
      'resources_page' => array(
        'custom_settings' => FALSE,
      ),
      'section_card' => array(
        'custom_settings' => TRUE,
      ),
      'question_list' => array(
        'custom_settings' => FALSE,
      ),
      'question_list_teaser' => array(
        'custom_settings' => FALSE,
      ),
      'announcement_card' => array(
        'custom_settings' => FALSE,
      ),
      'success_stories_card' => array(
        'custom_settings' => FALSE,
      ),
      'term_page' => array(
        'custom_settings' => FALSE,
      ),
      'question' => array(
        'custom_settings' => TRUE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '18',
        ),
      ),
      'display' => array(
        'flag_accept' => array(
          'default' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'project_in_panel_left_' => array(
            'weight' => '39',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '2',
            'visible' => TRUE,
          ),
          'section_card' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '37',
            'visible' => FALSE,
          ),
        ),
        'flag_decline' => array(
          'default' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'project_in_panel_left_' => array(
            'weight' => '40',
            'visible' => FALSE,
          ),
          'teaser' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
          'section_card' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '38',
            'visible' => FALSE,
          ),
        ),
        'rules_links_accept_new_project' => array(
          'default' => array(
            'weight' => '8',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '3',
            'visible' => TRUE,
          ),
          'section_card' => array(
            'weight' => '27',
            'visible' => FALSE,
          ),
          'project_in_panel_left_' => array(
            'weight' => '5',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '9',
            'visible' => FALSE,
          ),
        ),
        'rules_links_decline_new_project' => array(
          'default' => array(
            'weight' => '9',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '4',
            'visible' => TRUE,
          ),
          'section_card' => array(
            'weight' => '36',
            'visible' => FALSE,
          ),
          'project_in_panel_left_' => array(
            'weight' => '6',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '10',
            'visible' => FALSE,
          ),
        ),
        'rules_links_need_more_info' => array(
          'default' => array(
            'weight' => '10',
            'visible' => TRUE,
          ),
          'teaser' => array(
            'weight' => '5',
            'visible' => TRUE,
          ),
          'project_in_panel_left_' => array(
            'weight' => '7',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '12',
            'visible' => FALSE,
          ),
        ),
        'rules_links_submit_a_project' => array(
          'project_in_panel_left_' => array(
            'weight' => '20',
            'visible' => FALSE,
          ),
          'default' => array(
            'weight' => '22',
            'visible' => FALSE,
          ),
          'full' => array(
            'weight' => '13',
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_project';
  $strongarm->value = array();
  $export['menu_options_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_project';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_project';
  $strongarm->value = '0';
  $export['node_preview_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_project_pattern';
  $strongarm->value = 'project/[node:nid]/[node:title]';
  $export['pathauto_node_project_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_skills_pattern';
  $strongarm->value = 'skills/[term:tid]';
  $export['pathauto_taxonomy_term_skills_pattern'] = $strongarm;

  return $export;
}
