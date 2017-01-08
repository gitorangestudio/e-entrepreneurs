<?php
/**
 * @file
 * community_business_idea.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function community_business_idea_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:class:update field_project_image field'
  $permissions['node:class:update field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_project_stage field'
  $permissions['node:class:update field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:view field_project_image field'
  $permissions['node:class:view field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_project_stage field'
  $permissions['node:class:view field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:country:update field_project_image field'
  $permissions['node:country:update field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:country:update field_project_stage field'
  $permissions['node:country:update field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:country:view field_project_image field'
  $permissions['node:country:view field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:country:view field_project_stage field'
  $permissions['node:country:view field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:course:update field_project_image field'
  $permissions['node:course:update field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:update field_project_stage field'
  $permissions['node:course:update field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:view field_project_image field'
  $permissions['node:course:view field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:course:view field_project_stage field'
  $permissions['node:course:view field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:judge_group:update field_project_image field'
  $permissions['node:judge_group:update field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:judge_group:update field_project_stage field'
  $permissions['node:judge_group:update field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:judge_group:view field_project_image field'
  $permissions['node:judge_group:view field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:judge_group:view field_project_stage field'
  $permissions['node:judge_group:view field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:add user'
  $permissions['node:project:add user'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
    ),
  );

  // Exported og permission: 'node:project:administer group'
  $permissions['node:project:administer group'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:approve and deny subscription'
  $permissions['node:project:approve and deny subscription'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
    ),
  );

  // Exported og permission: 'node:project:assign Administrator Member role'
  $permissions['node:project:assign Administrator Member role'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:assign Councellor role'
  $permissions['node:project:assign Councellor role'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:assign Expert role'
  $permissions['node:project:assign Expert role'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:assign Mentor role'
  $permissions['node:project:assign Mentor role'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:assign Owner role'
  $permissions['node:project:assign Owner role'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:assign Team Member role'
  $permissions['node:project:assign Team Member role'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:assign administrator member role'
  $permissions['node:project:assign administrator member role'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create agenda content'
  $permissions['node:project:create agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:create announcement content'
  $permissions['node:project:create announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:create discussion content'
  $permissions['node:project:create discussion content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:create event content'
  $permissions['node:project:create event content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:create page content'
  $permissions['node:project:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any agenda content'
  $permissions['node:project:delete any agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete any announcement content'
  $permissions['node:project:delete any announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete any discussion content'
  $permissions['node:project:delete any discussion content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete any event content'
  $permissions['node:project:delete any event content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete any page content'
  $permissions['node:project:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete document file'
  $permissions['node:project:delete document file'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:delete own agenda content'
  $permissions['node:project:delete own agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:delete own announcement content'
  $permissions['node:project:delete own announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:delete own discussion content'
  $permissions['node:project:delete own discussion content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:delete own event content'
  $permissions['node:project:delete own event content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:delete own page content'
  $permissions['node:project:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:manage members'
  $permissions['node:project:manage members'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:manage permissions'
  $permissions['node:project:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:manage roles'
  $permissions['node:project:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:subscribe'
  $permissions['node:project:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:subscribe without approval'
  $permissions['node:project:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:unsubscribe'
  $permissions['node:project:unsubscribe'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update any agenda content'
  $permissions['node:project:update any agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update any announcement content'
  $permissions['node:project:update any announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update any discussion content'
  $permissions['node:project:update any discussion content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update any event content'
  $permissions['node:project:update any event content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update any page content'
  $permissions['node:project:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update body field'
  $permissions['node:project:update body field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update document file'
  $permissions['node:project:update document file'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_accept field'
  $permissions['node:project:update field_accept field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_add_other_business_lines field'
  $permissions['node:project:update field_add_other_business_lines field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_application_guide_lines field'
  $permissions['node:project:update field_application_guide_lines field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_application_status field'
  $permissions['node:project:update field_application_status field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_attachment field'
  $permissions['node:project:update field_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_category field'
  $permissions['node:project:update field_category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_date_period field'
  $permissions['node:project:update field_date_period field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_discussion_attachment field'
  $permissions['node:project:update field_discussion_attachment field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_document_workspace field'
  $permissions['node:project:update field_document_workspace field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_event_address field'
  $permissions['node:project:update field_event_address field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_event_date field'
  $permissions['node:project:update field_event_date field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_event_location field'
  $permissions['node:project:update field_event_location field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_event_organizers field'
  $permissions['node:project:update field_event_organizers field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_explain_steps field'
  $permissions['node:project:update field_explain_steps field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_field_video_url field'
  $permissions['node:project:update field_field_video_url field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_image field'
  $permissions['node:project:update field_image field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_link field'
  $permissions['node:project:update field_link field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_other_lines_of_business field'
  $permissions['node:project:update field_other_lines_of_business field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_project_image field'
  $permissions['node:project:update field_project_image field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_project_stage field'
  $permissions['node:project:update field_project_stage field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_registeration field'
  $permissions['node:project:update field_registeration field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_registration field'
  $permissions['node:project:update field_registration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_skills field'
  $permissions['node:project:update field_skills field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_submitted field'
  $permissions['node:project:update field_submitted field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_tags field'
  $permissions['node:project:update field_tags field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_taken_steps field'
  $permissions['node:project:update field_taken_steps field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update field_who_can_view field'
  $permissions['node:project:update field_who_can_view field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_your_idea field'
  $permissions['node:project:update field_your_idea field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update group'
  $permissions['node:project:update group'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
    ),
  );

  // Exported og permission: 'node:project:update group_access field'
  $permissions['node:project:update group_access field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update group_content_access field'
  $permissions['node:project:update group_content_access field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update group_group field'
  $permissions['node:project:update group_group field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:update group_register field'
  $permissions['node:project:update group_register field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update og_group_ref field'
  $permissions['node:project:update og_group_ref field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update og_node_link field'
  $permissions['node:project:update og_node_link field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update og_roles_permissions field'
  $permissions['node:project:update og_roles_permissions field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update own agenda content'
  $permissions['node:project:update own agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update own announcement content'
  $permissions['node:project:update own announcement content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update own discussion content'
  $permissions['node:project:update own discussion content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update own event content'
  $permissions['node:project:update own event content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update own page content'
  $permissions['node:project:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view body field'
  $permissions['node:project:view body field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view document file'
  $permissions['node:project:view document file'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_accept field'
  $permissions['node:project:view field_accept field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_add_other_business_lines field'
  $permissions['node:project:view field_add_other_business_lines field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_application_guide_lines field'
  $permissions['node:project:view field_application_guide_lines field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
    ),
  );

  // Exported og permission: 'node:project:view field_application_status field'
  $permissions['node:project:view field_application_status field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_attachment field'
  $permissions['node:project:view field_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_category field'
  $permissions['node:project:view field_category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_date_period field'
  $permissions['node:project:view field_date_period field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_discussion_attachment field'
  $permissions['node:project:view field_discussion_attachment field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_document_workspace field'
  $permissions['node:project:view field_document_workspace field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_event_address field'
  $permissions['node:project:view field_event_address field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_event_date field'
  $permissions['node:project:view field_event_date field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_event_location field'
  $permissions['node:project:view field_event_location field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_event_organizers field'
  $permissions['node:project:view field_event_organizers field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_explain_steps field'
  $permissions['node:project:view field_explain_steps field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_field_video_url field'
  $permissions['node:project:view field_field_video_url field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_image field'
  $permissions['node:project:view field_image field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_link field'
  $permissions['node:project:view field_link field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_other_lines_of_business field'
  $permissions['node:project:view field_other_lines_of_business field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_project_image field'
  $permissions['node:project:view field_project_image field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view field_project_stage field'
  $permissions['node:project:view field_project_stage field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_registeration field'
  $permissions['node:project:view field_registeration field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_registration field'
  $permissions['node:project:view field_registration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_skills field'
  $permissions['node:project:view field_skills field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_submitted field'
  $permissions['node:project:view field_submitted field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_tags field'
  $permissions['node:project:view field_tags field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_taken_steps field'
  $permissions['node:project:view field_taken_steps field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view field_who_can_view field'
  $permissions['node:project:view field_who_can_view field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_your_idea field'
  $permissions['node:project:view field_your_idea field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_access field'
  $permissions['node:project:view group_access field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_content_access field'
  $permissions['node:project:view group_content_access field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_group field'
  $permissions['node:project:view group_group field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
      'Team Member' => 'Team Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view group_register field'
  $permissions['node:project:view group_register field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view og_group_ref field'
  $permissions['node:project:view og_group_ref field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view og_node_link field'
  $permissions['node:project:view og_node_link field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:view og_roles_permissions field'
  $permissions['node:project:view og_roles_permissions field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:question:update field_project_image field'
  $permissions['node:question:update field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_project_stage field'
  $permissions['node:question:update field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_project_image field'
  $permissions['node:question:view field_project_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_project_stage field'
  $permissions['node:question:view field_project_stage field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  return $permissions;
}
