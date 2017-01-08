<?php
/**
 * @file
 * community_common.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function community_common_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Banner Pictures';
  $picture_mapping->machine_name = 'banner_pictures';
  $picture_mapping->breakpoint_group = 'banner_pictures';
  $picture_mapping->mapping = array(
    'custom.user.desktop_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_picture_large',
      ),
    ),
    'custom.user.tablet_landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_picture_medium_landscape',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_picture_medium_portrait',
      ),
    ),
    'custom.user.smart_tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_picture_small',
      ),
    ),
    'custom.user.smart_phone_landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_picture_xsmall',
      ),
    ),
    'custom.user.smart_phone' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'banner_picture_xsmall',
      ),
    ),
  );
  $export['banner_pictures'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Dashboard Cover';
  $picture_mapping->machine_name = 'dashboard_cover';
  $picture_mapping->breakpoint_group = 'dashboard_cover';
  $picture_mapping->mapping = array(
    'custom.user.desktop_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'profile_cover',
      ),
    ),
    'custom.user.tablet_all' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'profile_cover_medium',
      ),
    ),
    'custom.user.smart_phone_all' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'profile_cover_small',
      ),
    ),
  );
  $export['dashboard_cover'] = $picture_mapping;

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Node Pictures';
  $picture_mapping->machine_name = 'node_pictures';
  $picture_mapping->breakpoint_group = 'node_pictures';
  $picture_mapping->mapping = array(
    'custom.user.desktop_normal' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_full_content_larg',
      ),
    ),
    'custom.user.tablet_landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_full_content_medium',
      ),
    ),
    'custom.user.tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_full_content_medium',
      ),
    ),
    'custom.user.smart_tablet' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_full_content_small',
      ),
    ),
    'custom.user.smart_phone_landscape' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_full_content_xsmall',
      ),
    ),
    'custom.user.smart_phone' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'node_full_content_xsmall',
      ),
    ),
  );
  $export['node_pictures'] = $picture_mapping;

  return $export;
}
