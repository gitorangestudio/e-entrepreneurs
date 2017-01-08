<?php
/**
 * @file
 * community_front_banner.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function community_front_banner_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_editable';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'click_to_edit' => 0,
    'click_to_edit_style' => 'button',
    'empty_text' => '',
    'fallback_format' => 'addressfield_default',
  );
  $export['image__banner_image_inside_node_vm__file_field_editable'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_file_default';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__banner_image_inside_node_vm__file_field_file_default'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_file_download_link';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'text' => 'Download [file:name]',
  );
  $export['image__banner_image_inside_node_vm__file_field_file_download_link'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_file_table';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__banner_image_inside_node_vm__file_field_file_table'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_file_url_plain';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = '';
  $export['image__banner_image_inside_node_vm__file_field_file_url_plain'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'banner_image_inside_node',
    'image_link' => '',
  );
  $export['image__banner_image_inside_node_vm__file_field_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_media_large_icon';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'image_style' => '',
  );
  $export['image__banner_image_inside_node_vm__file_field_media_large_icon'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_picture';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'picture_mapping' => 'node_pictures',
    'fallback_image_style' => '',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
  );
  $export['image__banner_image_inside_node_vm__file_field_picture'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'image__banner_image_inside_node_vm__file_field_picture_sizes_formatter';
  $file_display->weight = 0;
  $file_display->status = FALSE;
  $file_display->settings = array(
    'sizes' => '(min-width: 0px)',
    'image_styles' => array(
      '_empty image_' => '_empty image_',
      'course_preview_image' => 0,
      'thumbnail' => 0,
      'medium' => 0,
      'large' => 0,
      'media_thumbnail' => 0,
      '150-150' => 0,
      'banner_image_inside_node' => 0,
      'banner_picture_large' => 0,
      'banner_picture_medium_landscape' => 0,
      'banner_picture_medium_portrait' => 0,
      'banner_picture_small' => 0,
      'banner_picture_xsmall' => 0,
      'goal_image' => 0,
      'node_full_content_larg' => 0,
      'node_full_content_medium' => 0,
      'node_full_content_small' => 0,
      'node_full_content_xsmall' => 0,
      'profile_cover' => 0,
      'profile_cover_medium' => 0,
      'profile_cover_small' => 0,
      'project_full_content' => 0,
      'project_in_dashboard' => 0,
      'resources_main_media' => 0,
      'section_image' => 0,
      'user_picture' => 0,
      '_original image_' => 0,
    ),
    'fallback_image_style' => 'course_preview_image',
    'image_link' => '',
  );
  $export['image__banner_image_inside_node_vm__file_field_picture_sizes_formatter'] = $file_display;

  return $export;
}
