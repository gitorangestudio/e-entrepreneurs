<?php
/**
 * @file
 * community_common.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function community_common_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'banner_pictures';
  $breakpoint_group->name = 'Banner Pictures';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.desktop_normal',
    1 => 'custom.user.tablet_landscape',
    2 => 'custom.user.tablet',
    3 => 'custom.user.smart_tablet',
    4 => 'custom.user.smart_phone_landscape',
    5 => 'custom.user.smart_phone',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['banner_pictures'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'dashboard_cover';
  $breakpoint_group->name = 'Dashboard Cover';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.desktop_normal',
    1 => 'custom.user.tablet_all',
    2 => 'custom.user.smart_phone_all',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['dashboard_cover'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'node_pictures';
  $breakpoint_group->name = 'Node Pictures';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.desktop_normal',
    1 => 'custom.user.tablet_landscape',
    2 => 'custom.user.tablet',
    3 => 'custom.user.smart_tablet',
    4 => 'custom.user.smart_phone_landscape',
    5 => 'custom.user.smart_phone',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['node_pictures'] = $breakpoint_group;

  return $export;
}
