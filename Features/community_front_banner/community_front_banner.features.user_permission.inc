<?php
/**
 * @file
 * community_front_banner.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_front_banner_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create banner content'.
  $permissions['create banner content'] = array(
    'name' => 'create banner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any banner content'.
  $permissions['delete any banner content'] = array(
    'name' => 'delete any banner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own banner content'.
  $permissions['delete own banner content'] = array(
    'name' => 'delete own banner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any banner content'.
  $permissions['edit any banner content'] = array(
    'name' => 'edit any banner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own banner content'.
  $permissions['edit own banner content'] = array(
    'name' => 'edit own banner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
