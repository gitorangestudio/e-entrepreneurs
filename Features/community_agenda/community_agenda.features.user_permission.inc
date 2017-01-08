<?php
/**
 * @file
 * community_agenda.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_agenda_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create agenda content'.
  $permissions['create agenda content'] = array(
    'name' => 'create agenda content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any agenda content'.
  $permissions['delete any agenda content'] = array(
    'name' => 'delete any agenda content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own agenda content'.
  $permissions['delete own agenda content'] = array(
    'name' => 'delete own agenda content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any agenda content'.
  $permissions['edit any agenda content'] = array(
    'name' => 'edit any agenda content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own agenda content'.
  $permissions['edit own agenda content'] = array(
    'name' => 'edit own agenda content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'node',
  );

  return $permissions;
}
