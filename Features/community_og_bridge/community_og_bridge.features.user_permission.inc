<?php
/**
 * @file
 * community_og_bridge.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_og_bridge_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access rules link accept_new_project'.
  $permissions['access rules link accept_new_project'] = array(
    'name' => 'access rules link accept_new_project',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link decline_new_project'.
  $permissions['access rules link decline_new_project'] = array(
    'name' => 'access rules link decline_new_project',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link need_more_info'.
  $permissions['access rules link need_more_info'] = array(
    'name' => 'access rules link need_more_info',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'rules_link',
  );

  // Exported permission: 'access rules link submit_a_project'.
  $permissions['access rules link submit_a_project'] = array(
    'name' => 'access rules link submit_a_project',
    'roles' => array(
      'Enterprenure' => 'Enterprenure',
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'rules_link',
  );

  return $permissions;
}
