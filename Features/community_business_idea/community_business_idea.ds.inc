<?php
/**
 * @file
 * community_business_idea.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function community_business_idea_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_project_image',
        1 => 'group_group',
        2 => 'body',
        3 => 'field_your_idea',
        4 => 'field_taken_steps',
        5 => 'field_explain_steps',
        6 => 'field_field_video_url',
        7 => 'rules_links_accept_new_project',
        8 => 'rules_links_decline_new_project',
        9 => 'rules_links_need_more_info',
      ),
    ),
    'fields' => array(
      'field_project_image' => 'ds_content',
      'group_group' => 'ds_content',
      'body' => 'ds_content',
      'field_your_idea' => 'ds_content',
      'field_taken_steps' => 'ds_content',
      'field_explain_steps' => 'ds_content',
      'field_field_video_url' => 'ds_content',
      'rules_links_accept_new_project' => 'ds_content',
      'rules_links_decline_new_project' => 'ds_content',
      'rules_links_need_more_info' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|project|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|project|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'project';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_project_image',
        2 => 'body',
        3 => 'field_skills',
        4 => 'field_add_other_business_lines',
        5 => 'field_other_lines_of_business',
        6 => 'field_your_idea',
        7 => 'field_taken_steps',
        8 => 'field_explain_steps',
        9 => 'field_field_video_url',
        10 => 'field_document_workspace',
        11 => 'field_accept',
        12 => 'field_project_stage',
        13 => 'group_group',
        14 => 'group_access',
      ),
      'hidden' => array(
        15 => 'field_application_guide_lines',
        16 => 'field_submitted',
        17 => 'field_application_status',
        18 => 'path',
        19 => 'field_who_can_view',
        20 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_project_image' => 'ds_content',
      'body' => 'ds_content',
      'field_skills' => 'ds_content',
      'field_add_other_business_lines' => 'ds_content',
      'field_other_lines_of_business' => 'ds_content',
      'field_your_idea' => 'ds_content',
      'field_taken_steps' => 'ds_content',
      'field_explain_steps' => 'ds_content',
      'field_field_video_url' => 'ds_content',
      'field_document_workspace' => 'ds_content',
      'field_accept' => 'ds_content',
      'field_project_stage' => 'ds_content',
      'group_group' => 'ds_content',
      'group_access' => 'ds_content',
      'field_application_guide_lines' => 'hidden',
      'field_submitted' => 'hidden',
      'field_application_status' => 'hidden',
      'path' => 'hidden',
      'field_who_can_view' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|project|form'] = $ds_layout;

  return $export;
}
