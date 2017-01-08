<?php
/**
 * @file
 * community_common.ds.inc
 */

/**
 * Implements hook_ds_view_modes_info().
 */
function community_common_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'announcement_card';
  $ds_view_mode->label = 'Announcement Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['announcement_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'banner_image_inside_node_vm';
  $ds_view_mode->label = 'banner image inside node_VM';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['banner_image_inside_node_vm'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'dashboard_user_card';
  $ds_view_mode->label = 'Dashboard User Card';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['dashboard_user_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'event_organizers';
  $ds_view_mode->label = 'Event Organizers';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['event_organizers'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'events_in_project_page';
  $ds_view_mode->label = 'Events in Project Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['events_in_project_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'project_in_panel_left_';
  $ds_view_mode->label = 'Project In Panel (left)';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['project_in_panel_left_'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'question_list';
  $ds_view_mode->label = 'Question List';
  $ds_view_mode->entities = array(
    'node' => 'node',
    'user' => 'user',
  );
  $export['question_list'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'question_list_teaser';
  $ds_view_mode->label = 'Question - List Teaser';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['question_list_teaser'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resources_main_media';
  $ds_view_mode->label = 'Resources main media';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['resources_main_media'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resources_page';
  $ds_view_mode->label = 'Resources page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['resources_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_card';
  $ds_view_mode->label = 'Section Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['section_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'section_image';
  $ds_view_mode->label = 'Section image';
  $ds_view_mode->entities = array(
    'file' => 'file',
  );
  $export['section_image'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'success_stories_card';
  $ds_view_mode->label = 'Success Stories Card';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['success_stories_card'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'term_page';
  $ds_view_mode->label = 'Term Page';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['term_page'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'user_card';
  $ds_view_mode->label = 'User Card';
  $ds_view_mode->entities = array(
    'user' => 'user',
  );
  $export['user_card'] = $ds_view_mode;

  return $export;
}
