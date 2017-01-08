<?php
/**
 * @file
 * community_announcement.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function community_announcement_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:class:create announcement content'
  $permissions['node:class:create announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete any announcement content'
  $permissions['node:class:delete any announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete own announcement content'
  $permissions['node:class:delete own announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update any announcement content'
  $permissions['node:class:update any announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update own announcement content'
  $permissions['node:class:update own announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:project:create announcement content'
  $permissions['node:project:create announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete any announcement content'
  $permissions['node:project:delete any announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete own announcement content'
  $permissions['node:project:delete own announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update any announcement content'
  $permissions['node:project:update any announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update own announcement content'
  $permissions['node:project:update own announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  return $permissions;
}
