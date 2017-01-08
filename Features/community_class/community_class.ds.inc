<?php
/**
 * @file
 * community_class.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function community_class_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|class|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'class';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_class_id',
        2 => 'body',
        3 => 'field_registeration',
        4 => 'field_date_period',
        5 => 'group_access',
      ),
      'hidden' => array(
        6 => 'path',
        7 => 'group_group',
        8 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_class_id' => 'ds_content',
      'body' => 'ds_content',
      'field_registeration' => 'ds_content',
      'field_date_period' => 'ds_content',
      'group_access' => 'ds_content',
      'path' => 'hidden',
      'group_group' => 'hidden',
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
  $export['node|class|form'] = $ds_layout;

  return $export;
}
