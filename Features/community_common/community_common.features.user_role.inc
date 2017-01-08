<?php
/**
 * @file
 * community_common.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function community_common_user_default_roles() {
  $roles = array();

  // Exported role: Enterprenure.
  $roles['Enterprenure'] = array(
    'name' => 'Enterprenure',
    'weight' => 4,
  );

  // Exported role: Private.
  $roles['Private'] = array(
    'name' => 'Private',
    'weight' => 12,
  );

  // Exported role: Program Manager.
  $roles['Program Manager'] = array(
    'name' => 'Program Manager',
    'weight' => 3,
  );

  // Exported role: Suspended.
  $roles['Suspended'] = array(
    'name' => 'Suspended',
    'weight' => 7,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  return $roles;
}
