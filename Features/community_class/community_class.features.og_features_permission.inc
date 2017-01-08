<?php
/**
 * @file
 * community_class.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function community_class_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:class:add user'
  $permissions['node:class:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:administer group'
  $permissions['node:class:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:approve and deny subscription'
  $permissions['node:class:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:create agenda content'
  $permissions['node:class:create agenda content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:create announcement content'
  $permissions['node:class:create announcement content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:create discussion content'
  $permissions['node:class:create discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:create event content'
  $permissions['node:class:create event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:create survey content'
  $permissions['node:class:create survey content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete any agenda content'
  $permissions['node:class:delete any agenda content'] = array(
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

  // Exported og permission: 'node:class:delete any discussion content'
  $permissions['node:class:delete any discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete any event content'
  $permissions['node:class:delete any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete any survey content'
  $permissions['node:class:delete any survey content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete own agenda content'
  $permissions['node:class:delete own agenda content'] = array(
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

  // Exported og permission: 'node:class:delete own event content'
  $permissions['node:class:delete own event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete own survey content'
  $permissions['node:class:delete own survey content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:manage members'
  $permissions['node:class:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:manage permissions'
  $permissions['node:class:manage permissions'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:manage roles'
  $permissions['node:class:manage roles'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:subscribe'
  $permissions['node:class:subscribe'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:subscribe without approval'
  $permissions['node:class:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:unsubscribe'
  $permissions['node:class:unsubscribe'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update any agenda content'
  $permissions['node:class:update any agenda content'] = array(
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

  // Exported og permission: 'node:class:update any discussion content'
  $permissions['node:class:update any discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update any event content'
  $permissions['node:class:update any event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update body field'
  $permissions['node:class:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_application_status field'
  $permissions['node:class:update field_application_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_class_id field'
  $permissions['node:class:update field_class_id field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_date_period field'
  $permissions['node:class:update field_date_period field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_discussion_attachment field'
  $permissions['node:class:update field_discussion_attachment field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_document_workspace field'
  $permissions['node:class:update field_document_workspace field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_event_address field'
  $permissions['node:class:update field_event_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_event_date field'
  $permissions['node:class:update field_event_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_event_location field'
  $permissions['node:class:update field_event_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_event_organizers field'
  $permissions['node:class:update field_event_organizers field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_explain_steps field'
  $permissions['node:class:update field_explain_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_field_video_url field'
  $permissions['node:class:update field_field_video_url field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_image field'
  $permissions['node:class:update field_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_other_lines_of_business field'
  $permissions['node:class:update field_other_lines_of_business field'] = array(
    'roles' => array(),
  );

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

  // Exported og permission: 'node:class:update field_schedule field'
  $permissions['node:class:update field_schedule field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_submitted field'
  $permissions['node:class:update field_submitted field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_tags field'
  $permissions['node:class:update field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_taken_steps field'
  $permissions['node:class:update field_taken_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_who_can_view field'
  $permissions['node:class:update field_who_can_view field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update group'
  $permissions['node:class:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update own agenda content'
  $permissions['node:class:update own agenda content'] = array(
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

  // Exported og permission: 'node:class:update own discussion content'
  $permissions['node:class:update own discussion content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:update own event content'
  $permissions['node:class:update own event content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update own survey content'
  $permissions['node:class:update own survey content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:view body field'
  $permissions['node:class:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_agenda_pdf field'
  $permissions['node:class:view field_agenda_pdf field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:view field_application_guide_lines field'
  $permissions['node:class:view field_application_guide_lines field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_application_status field'
  $permissions['node:class:view field_application_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_attachment field'
  $permissions['node:class:view field_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_class_id field'
  $permissions['node:class:view field_class_id field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:view field_date_period field'
  $permissions['node:class:view field_date_period field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:view field_discussion_attachment field'
  $permissions['node:class:view field_discussion_attachment field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_document_workspace field'
  $permissions['node:class:view field_document_workspace field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_event_address field'
  $permissions['node:class:view field_event_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_event_date field'
  $permissions['node:class:view field_event_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_event_location field'
  $permissions['node:class:view field_event_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_event_organizers field'
  $permissions['node:class:view field_event_organizers field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_explain_steps field'
  $permissions['node:class:view field_explain_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_field_video_url field'
  $permissions['node:class:view field_field_video_url field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_image field'
  $permissions['node:class:view field_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_other_lines_of_business field'
  $permissions['node:class:view field_other_lines_of_business field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:class:view field_registeration field'
  $permissions['node:class:view field_registeration field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:view field_registration field'
  $permissions['node:class:view field_registration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_schedule field'
  $permissions['node:class:view field_schedule field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_submitted field'
  $permissions['node:class:view field_submitted field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_tags field'
  $permissions['node:class:view field_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_taken_steps field'
  $permissions['node:class:view field_taken_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_who_can_view field'
  $permissions['node:class:view field_who_can_view field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:course:update field_submitted field'
  $permissions['node:course:update field_submitted field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:course:view field_application_status field'
  $permissions['node:course:view field_application_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:course:view field_submitted field'
  $permissions['node:course:view field_submitted field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:judge_group:update field_submitted field'
  $permissions['node:judge_group:update field_submitted field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:judge_group:view field_application_status field'
  $permissions['node:judge_group:view field_application_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:judge_group:view field_submitted field'
  $permissions['node:judge_group:view field_submitted field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:administer group'
  $permissions['node:project:administer group'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
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

  // Exported og permission: 'node:project:update field_application_status field'
  $permissions['node:project:update field_application_status field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_class_id field'
  $permissions['node:project:update field_class_id field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_project_stage field'
  $permissions['node:project:update field_project_stage field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_submitted field'
  $permissions['node:project:update field_submitted field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_who_can_view field'
  $permissions['node:project:update field_who_can_view field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update group'
  $permissions['node:project:update group'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
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

  // Exported og permission: 'node:project:view field_application_status field'
  $permissions['node:project:view field_application_status field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_class_id field'
  $permissions['node:project:view field_class_id field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_project_stage field'
  $permissions['node:project:view field_project_stage field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_submitted field'
  $permissions['node:project:view field_submitted field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_who_can_view field'
  $permissions['node:project:view field_who_can_view field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:question:update field_submitted field'
  $permissions['node:question:update field_submitted field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_submitted field'
  $permissions['node:question:view field_submitted field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
