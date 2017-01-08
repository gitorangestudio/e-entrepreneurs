<?php
/**
 * @file
 * community_resources.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_resources_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create resource content'.
  $permissions['create resource content'] = array(
    'name' => 'create resource content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any resource content'.
  $permissions['delete any resource content'] = array(
    'name' => 'delete any resource content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own resource content'.
  $permissions['delete own resource content'] = array(
    'name' => 'delete own resource content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in resource_access'.
  $permissions['delete terms in resource_access'] = array(
    'name' => 'delete terms in resource_access',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in resources'.
  $permissions['delete terms in resources'] = array(
    'name' => 'delete terms in resources',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any resource content'.
  $permissions['edit any resource content'] = array(
    'name' => 'edit any resource content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own resource content'.
  $permissions['edit own resource content'] = array(
    'name' => 'edit own resource content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in resource_access'.
  $permissions['edit terms in resource_access'] = array(
    'name' => 'edit terms in resource_access',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in resources'.
  $permissions['edit terms in resources'] = array(
    'name' => 'edit terms in resources',
    'roles' => array(),
    'module' => 'taxonomy',
  );

  return $permissions;
}
