<?php
/**
 * @file
 * community_business_idea.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function community_business_idea_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'act as Administrator Member in og node:project'.
  $permissions['act as Administrator Member in og node:project'] = array(
    'name' => 'act as Administrator Member in og node:project',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as Councellor in og node:project'.
  $permissions['act as Councellor in og node:project'] = array(
    'name' => 'act as Councellor in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as Expert in og node:project'.
  $permissions['act as Expert in og node:project'] = array(
    'name' => 'act as Expert in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as Mentor in og node:project'.
  $permissions['act as Mentor in og node:project'] = array(
    'name' => 'act as Mentor in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as Owner in og node:project'.
  $permissions['act as Owner in og node:project'] = array(
    'name' => 'act as Owner in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as Team Member in og node:project'.
  $permissions['act as Team Member in og node:project'] = array(
    'name' => 'act as Team Member in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as member in og node:project'.
  $permissions['act as member in og node:project'] = array(
    'name' => 'act as member in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'act as non-member in og node:project'.
  $permissions['act as non-member in og node:project'] = array(
    'name' => 'act as non-member in og node:project',
    'roles' => array(),
    'module' => 'og_role_override',
  );

  // Exported permission: 'create field_application_status'.
  $permissions['create field_application_status'] = array(
    'name' => 'create field_application_status',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_project_stage'.
  $permissions['create field_project_stage'] = array(
    'name' => 'create field_project_stage',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create project content'.
  $permissions['create project content'] = array(
    'name' => 'create project content',
    'roles' => array(
      'Enterprenure' => 'Enterprenure',
      'Program Manager' => 'Program Manager',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any project content'.
  $permissions['delete any project content'] = array(
    'name' => 'delete any project content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own project content'.
  $permissions['delete own project content'] = array(
    'name' => 'delete own project content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any project content'.
  $permissions['edit any project content'] = array(
    'name' => 'edit any project content',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_application_status'.
  $permissions['edit field_application_status'] = array(
    'name' => 'edit field_application_status',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_project_stage'.
  $permissions['edit field_project_stage'] = array(
    'name' => 'edit field_project_stage',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_application_status'.
  $permissions['edit own field_application_status'] = array(
    'name' => 'edit own field_application_status',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_project_stage'.
  $permissions['edit own field_project_stage'] = array(
    'name' => 'edit own field_project_stage',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own project content'.
  $permissions['edit own project content'] = array(
    'name' => 'edit own project content',
    'roles' => array(
      'Enterprenure' => 'Enterprenure',
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view field_application_status'.
  $permissions['view field_application_status'] = array(
    'name' => 'view field_application_status',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_project_stage'.
  $permissions['view field_project_stage'] = array(
    'name' => 'view field_project_stage',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_application_status'.
  $permissions['view own field_application_status'] = array(
    'name' => 'view own field_application_status',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_project_stage'.
  $permissions['view own field_project_stage'] = array(
    'name' => 'view own field_project_stage',
    'roles' => array(
      'Program Manager' => 'Program Manager',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
