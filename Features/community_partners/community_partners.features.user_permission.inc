<?php
/**
 * @file
 * community_partners.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_partners_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create partner content'.
  $permissions['create partner content'] = array(
    'name' => 'create partner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any partner content'.
  $permissions['delete any partner content'] = array(
    'name' => 'delete any partner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own partner content'.
  $permissions['delete own partner content'] = array(
    'name' => 'delete own partner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any partner content'.
  $permissions['edit any partner content'] = array(
    'name' => 'edit any partner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own partner content'.
  $permissions['edit own partner content'] = array(
    'name' => 'edit own partner content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
