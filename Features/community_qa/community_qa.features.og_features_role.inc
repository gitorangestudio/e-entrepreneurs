<?php
/**
 * @file
 * community_qa.features.og_features_role.inc
 */

/**
 * Implements hook_og_features_default_roles().
 */
function community_qa_og_features_default_roles() {
  $roles = array();

  // Exported OG Role: 'node:project:Administrator Member'.
  $roles['node:project:Administrator Member'] = array(
    'gid' => 0,
    'group_type' => 'node',
    'group_bundle' => 'project',
    'name' => 'Administrator Member',
  );

  return $roles;
}
