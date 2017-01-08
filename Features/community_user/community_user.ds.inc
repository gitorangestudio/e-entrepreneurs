<?php
/**
 * @file
 * community_user.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function community_user_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'user|user|default';
  $ds_fieldsetting->entity_type = 'user';
  $ds_fieldsetting->bundle = 'user';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'ds_user_picture' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['user|user|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function community_user_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|default';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_first_name',
        1 => 'profile_entrepreneur',
        2 => 'profile_expert',
      ),
      'right' => array(
        3 => 'field_last_name',
        4 => 'ds_user_picture',
        5 => 'field_cover_photo',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'left',
      'profile_entrepreneur' => 'left',
      'profile_expert' => 'left',
      'field_last_name' => 'right',
      'ds_user_picture' => 'right',
      'field_cover_photo' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'user|user|form';
  $ds_layout->entity_type = 'user';
  $ds_layout->bundle = 'user';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_first_name',
        1 => 'account',
        9 => 'field_private',
      ),
      'right' => array(
        2 => 'field_last_name',
        3 => 'picture',
        4 => 'field_cover_photo',
      ),
      'hidden' => array(
        5 => 'password_policy',
        6 => 'contact',
        7 => 'wysiwyg',
        8 => 'timezone',
        10 => 'og_user_node',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'field_first_name' => 'left',
      'account' => 'left',
      'field_last_name' => 'right',
      'picture' => 'right',
      'field_cover_photo' => 'right',
      'password_policy' => 'hidden',
      'contact' => 'hidden',
      'wysiwyg' => 'hidden',
      'timezone' => 'hidden',
      'field_private' => 'left',
      'og_user_node' => 'hidden',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['user|user|form'] = $ds_layout;

  return $export;
}
