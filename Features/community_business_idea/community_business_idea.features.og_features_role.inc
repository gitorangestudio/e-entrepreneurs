<?php
/**
 * @file
 * community_business_idea.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function community_business_idea_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:project:Administrator Member'.
  $roles['node:project:Administrator Member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'project',
    'name' => 'Administrator Member',
  );

  // Exported OG Role: 'node:project:Owner'.
  $roles['node:project:Owner'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'project',
    'name' => 'Owner',
  );

  // Exported OG Role: 'node:project:Team Member'.
  $roles['node:project:Team Member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'project',
    'name' => 'Team Member',
  );

  return $roles;
}
