<?php
/**
 * @file
 * community_qa.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function community_qa_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:project:create answer content'
  $permissions['node:project:create answer content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete any answer content'
  $permissions['node:project:delete any answer content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete own answer content'
  $permissions['node:project:delete own answer content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update any answer content'
  $permissions['node:project:update any answer content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update own answer content'
  $permissions['node:project:update own answer content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:question:add user'
  $permissions['node:question:add user'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:administer group'
  $permissions['node:question:administer group'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:approve and deny subscription'
  $permissions['node:question:approve and deny subscription'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create answer content'
  $permissions['node:question:create answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any answer content'
  $permissions['node:question:delete any answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own answer content'
  $permissions['node:question:delete own answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:manage members'
  $permissions['node:question:manage members'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:manage permissions'
  $permissions['node:question:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:manage roles'
  $permissions['node:question:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:subscribe'
  $permissions['node:question:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:subscribe without approval'
  $permissions['node:question:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:unsubscribe'
  $permissions['node:question:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any answer content'
  $permissions['node:question:update any answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_answers_count field'
  $permissions['node:question:update field_answers_count field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_tags field'
  $permissions['node:question:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update group'
  $permissions['node:question:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update own answer content'
  $permissions['node:question:update own answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_answers_count field'
  $permissions['node:question:view field_answers_count field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_tags field'
  $permissions['node:question:view field_tags field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
