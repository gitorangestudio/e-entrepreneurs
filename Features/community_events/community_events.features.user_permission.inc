<?php
/**
 * @file
 * community_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_events_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer event registration'.
  $permissions['administer event registration'] = array(
    'name' => 'administer event registration',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own event registration'.
  $permissions['administer own event registration'] = array(
    'name' => 'administer own event registration',
    'roles' => array(
      'Program Manager' => 'Program Manager',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event content'.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create event registration'.
  $permissions['create event registration'] = array(
    'name' => 'create event registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other anonymous'.
  $permissions['create event registration other anonymous'] = array(
    'name' => 'create event registration other anonymous',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other users'.
  $permissions['create event registration other users'] = array(
    'name' => 'create event registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration self'.
  $permissions['create event registration self'] = array(
    'name' => 'create event registration self',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event content'.
  $permissions['delete any event content'] = array(
    'name' => 'delete any event content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event registration'.
  $permissions['delete any event registration'] = array(
    'name' => 'delete any event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete own event content'.
  $permissions['delete own event content'] = array(
    'name' => 'delete own event content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event registration'.
  $permissions['delete own event registration'] = array(
    'name' => 'delete own event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'edit any event content'.
  $permissions['edit any event content'] = array(
    'name' => 'edit any event content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit event registration state'.
  $permissions['edit event registration state'] = array(
    'name' => 'edit event registration state',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'edit own event content'.
  $permissions['edit own event content'] = array(
    'name' => 'edit own event content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'update any event registration'.
  $permissions['update any event registration'] = array(
    'name' => 'update any event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'update own event registration'.
  $permissions['update own event registration'] = array(
    'name' => 'update own event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view event registration'.
  $permissions['view event registration'] = array(
    'name' => 'view event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view own event registration'.
  $permissions['view own event registration'] = array(
    'name' => 'view own event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  return $permissions;
}
