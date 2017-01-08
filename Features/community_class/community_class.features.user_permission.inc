<?php
/**
 * @file
 * community_class.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_class_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'act as administrator member in og node:class'.
  $permissions['act as administrator member in og node:class'] = array(
    'name' => 'act as administrator member in og node:class',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as member in og node:class'.
  $permissions['act as member in og node:class'] = array(
    'name' => 'act as member in og node:class',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as non-member in og node:class'.
  $permissions['act as non-member in og node:class'] = array(
    'name' => 'act as non-member in og node:class',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'create class content'.
  $permissions['create class content'] = array(
    'name' => 'create class content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any class content'.
  $permissions['delete any class content'] = array(
    'name' => 'delete any class content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own class content'.
  $permissions['delete own class content'] = array(
    'name' => 'delete own class content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any class content'.
  $permissions['edit any class content'] = array(
    'name' => 'edit any class content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own class content'.
  $permissions['edit own class content'] = array(
    'name' => 'edit own class content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
