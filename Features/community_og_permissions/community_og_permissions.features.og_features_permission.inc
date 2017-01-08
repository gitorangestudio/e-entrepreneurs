<?php
/**
 * @file
 * community_og_permissions.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function community_og_permissions_og_features_default_permissions() {
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

  // Exported og permission: 'node:class:assign Administrator Member role'
  $permissions['node:class:assign Administrator Member role'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:assign Councellor role'
  $permissions['node:class:assign Councellor role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:assign Expert role'
  $permissions['node:class:assign Expert role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:assign Mentor role'
  $permissions['node:class:assign Mentor role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:assign Owner role'
  $permissions['node:class:assign Owner role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:assign Team Member role'
  $permissions['node:class:assign Team Member role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:assign administrator member role'
  $permissions['node:class:assign administrator member role'] = array(
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

  // Exported og permission: 'node:class:create answer content'
  $permissions['node:class:create answer content'] = array(
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

  // Exported og permission: 'node:class:create page content'
  $permissions['node:class:create page content'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:class:delete any answer content'
  $permissions['node:class:delete any answer content'] = array(
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

  // Exported og permission: 'node:class:delete any page content'
  $permissions['node:class:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:delete any survey content'
  $permissions['node:class:delete any survey content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete document file'
  $permissions['node:class:delete document file'] = array(
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

  // Exported og permission: 'node:class:delete own answer content'
  $permissions['node:class:delete own answer content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:delete own discussion content'
  $permissions['node:class:delete own discussion content'] = array(
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

  // Exported og permission: 'node:class:delete own page content'
  $permissions['node:class:delete own page content'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:class:update any answer content'
  $permissions['node:class:update any answer content'] = array(
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

  // Exported og permission: 'node:class:update any page content'
  $permissions['node:class:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update any survey content'
  $permissions['node:class:update any survey content'] = array(
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

  // Exported og permission: 'node:class:update document file'
  $permissions['node:class:update document file'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_accept field'
  $permissions['node:class:update field_accept field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_add_other_business_lines field'
  $permissions['node:class:update field_add_other_business_lines field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_agenda_pdf field'
  $permissions['node:class:update field_agenda_pdf field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_answers_count field'
  $permissions['node:class:update field_answers_count field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_application_guide_lines field'
  $permissions['node:class:update field_application_guide_lines field'] = array(
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

  // Exported og permission: 'node:class:update field_attachment field'
  $permissions['node:class:update field_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_category field'
  $permissions['node:class:update field_category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_class_id field'
  $permissions['node:class:update field_class_id field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_cover_photo field'
  $permissions['node:class:update field_cover_photo field'] = array(
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

  // Exported og permission: 'node:class:update field_first_name field'
  $permissions['node:class:update field_first_name field'] = array(
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

  // Exported og permission: 'node:class:update field_last_name field'
  $permissions['node:class:update field_last_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
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

  // Exported og permission: 'node:class:update field_registeration field'
  $permissions['node:class:update field_registeration field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_registration field'
  $permissions['node:class:update field_registration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_schedule field'
  $permissions['node:class:update field_schedule field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_skills field'
  $permissions['node:class:update field_skills field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
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

  // Exported og permission: 'node:class:update field_target_audience field'
  $permissions['node:class:update field_target_audience field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:update field_who_can_view field'
  $permissions['node:class:update field_who_can_view field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update field_your_idea field'
  $permissions['node:class:update field_your_idea field'] = array(
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

  // Exported og permission: 'node:class:update group_access field'
  $permissions['node:class:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update group_content_access field'
  $permissions['node:class:update group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update group_group field'
  $permissions['node:class:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update group_register field'
  $permissions['node:class:update group_register field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update og_group_ref field'
  $permissions['node:class:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update og_node_link field'
  $permissions['node:class:update og_node_link field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update og_roles_permissions field'
  $permissions['node:class:update og_roles_permissions field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update og_user_node field'
  $permissions['node:class:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:update og_user_node1 field'
  $permissions['node:class:update og_user_node1 field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:class:update own answer content'
  $permissions['node:class:update own answer content'] = array(
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

  // Exported og permission: 'node:class:update own page content'
  $permissions['node:class:update own page content'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:class:view document file'
  $permissions['node:class:view document file'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:view field_accept field'
  $permissions['node:class:view field_accept field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_add_other_business_lines field'
  $permissions['node:class:view field_add_other_business_lines field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_agenda_pdf field'
  $permissions['node:class:view field_agenda_pdf field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:view field_answers_count field'
  $permissions['node:class:view field_answers_count field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
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

  // Exported og permission: 'node:class:view field_category field'
  $permissions['node:class:view field_category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_class_id field'
  $permissions['node:class:view field_class_id field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:class:view field_cover_photo field'
  $permissions['node:class:view field_cover_photo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
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

  // Exported og permission: 'node:class:view field_first_name field'
  $permissions['node:class:view field_first_name field'] = array(
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

  // Exported og permission: 'node:class:view field_last_name field'
  $permissions['node:class:view field_last_name field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_lecture_number field'
  $permissions['node:class:view field_lecture_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_lecturer field'
  $permissions['node:class:view field_lecturer field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_link field'
  $permissions['node:class:view field_link field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:view field_other_lines_of_business field'
  $permissions['node:class:view field_other_lines_of_business field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_private field'
  $permissions['node:class:view field_private field'] = array(
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

  // Exported og permission: 'node:class:view field_skills field'
  $permissions['node:class:view field_skills field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
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

  // Exported og permission: 'node:class:view field_target_audience field'
  $permissions['node:class:view field_target_audience field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:class:view field_who_can_view field'
  $permissions['node:class:view field_who_can_view field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view field_your_idea field'
  $permissions['node:class:view field_your_idea field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view group_access field'
  $permissions['node:class:view group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view group_content_access field'
  $permissions['node:class:view group_content_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view group_group field'
  $permissions['node:class:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view group_register field'
  $permissions['node:class:view group_register field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:view og_group_ref field'
  $permissions['node:class:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:class:view og_node_link field'
  $permissions['node:class:view og_node_link field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view og_roles_permissions field'
  $permissions['node:class:view og_roles_permissions field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view og_user_node field'
  $permissions['node:class:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:class:view og_user_node1 field'
  $permissions['node:class:view og_user_node1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:judge_group:unsubscribe'
  $permissions['node:judge_group:unsubscribe'] = array(
    'roles' => array(
      'member' => 'member',
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

  // Exported og permission: 'node:project:create answer content'
  $permissions['node:project:create answer content'] = array(
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

  // Exported og permission: 'node:project:create survey content'
  $permissions['node:project:create survey content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
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

  // Exported og permission: 'node:project:delete any answer content'
  $permissions['node:project:delete any answer content'] = array(
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

  // Exported og permission: 'node:project:delete any survey content'
  $permissions['node:project:delete any survey content'] = array(
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

  // Exported og permission: 'node:project:delete own answer content'
  $permissions['node:project:delete own answer content'] = array(
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

  // Exported og permission: 'node:project:delete own survey content'
  $permissions['node:project:delete own survey content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
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

  // Exported og permission: 'node:project:update any answer content'
  $permissions['node:project:update any answer content'] = array(
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

  // Exported og permission: 'node:project:update any survey content'
  $permissions['node:project:update any survey content'] = array(
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

  // Exported og permission: 'node:project:update field_agenda_pdf field'
  $permissions['node:project:update field_agenda_pdf field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:update field_answers_count field'
  $permissions['node:project:update field_answers_count field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
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

  // Exported og permission: 'node:project:update field_class_id field'
  $permissions['node:project:update field_class_id field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_cover_photo field'
  $permissions['node:project:update field_cover_photo field'] = array(
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

  // Exported og permission: 'node:project:update field_first_name field'
  $permissions['node:project:update field_first_name field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update field_image field'
  $permissions['node:project:update field_image field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:project:update field_last_name field'
  $permissions['node:project:update field_last_name field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
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

  // Exported og permission: 'node:project:update field_private field'
  $permissions['node:project:update field_private field'] = array(
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

  // Exported og permission: 'node:project:update field_schedule field'
  $permissions['node:project:update field_schedule field'] = array(
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

  // Exported og permission: 'node:project:update field_target_audience field'
  $permissions['node:project:update field_target_audience field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:project:update og_user_node field'
  $permissions['node:project:update og_user_node field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:update og_user_node1 field'
  $permissions['node:project:update og_user_node1 field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:project:update own answer content'
  $permissions['node:project:update own answer content'] = array(
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

  // Exported og permission: 'node:project:update own survey content'
  $permissions['node:project:update own survey content'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'Owner' => 'Owner',
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

  // Exported og permission: 'node:project:view field_agenda_pdf field'
  $permissions['node:project:view field_agenda_pdf field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:project:view field_answers_count field'
  $permissions['node:project:view field_answers_count field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
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

  // Exported og permission: 'node:project:view field_class_id field'
  $permissions['node:project:view field_class_id field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
    ),
  );

  // Exported og permission: 'node:project:view field_cover_photo field'
  $permissions['node:project:view field_cover_photo field'] = array(
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

  // Exported og permission: 'node:project:view field_first_name field'
  $permissions['node:project:view field_first_name field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
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

  // Exported og permission: 'node:project:view field_last_name field'
  $permissions['node:project:view field_last_name field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
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

  // Exported og permission: 'node:project:view field_private field'
  $permissions['node:project:view field_private field'] = array(
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

  // Exported og permission: 'node:project:view field_schedule field'
  $permissions['node:project:view field_schedule field'] = array(
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

  // Exported og permission: 'node:project:view field_target_audience field'
  $permissions['node:project:view field_target_audience field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:project:view og_user_node field'
  $permissions['node:project:view og_user_node field'] = array(
    'roles' => array(
      'Administrator Member' => 'Administrator Member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:project:view og_user_node1 field'
  $permissions['node:project:view og_user_node1 field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:question:assign Administrator Member role'
  $permissions['node:question:assign Administrator Member role'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:assign Councellor role'
  $permissions['node:question:assign Councellor role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:assign Expert role'
  $permissions['node:question:assign Expert role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:assign Mentor role'
  $permissions['node:question:assign Mentor role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:assign Owner role'
  $permissions['node:question:assign Owner role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:assign Team Member role'
  $permissions['node:question:assign Team Member role'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:assign administrator member role'
  $permissions['node:question:assign administrator member role'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create agenda content'
  $permissions['node:question:create agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create announcement content'
  $permissions['node:question:create announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create answer content'
  $permissions['node:question:create answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create discussion content'
  $permissions['node:question:create discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create event content'
  $permissions['node:question:create event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create page content'
  $permissions['node:question:create page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:create survey content'
  $permissions['node:question:create survey content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any agenda content'
  $permissions['node:question:delete any agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any announcement content'
  $permissions['node:question:delete any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any answer content'
  $permissions['node:question:delete any answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any discussion content'
  $permissions['node:question:delete any discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any event content'
  $permissions['node:question:delete any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any page content'
  $permissions['node:question:delete any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete any survey content'
  $permissions['node:question:delete any survey content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete document file'
  $permissions['node:question:delete document file'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:question:delete own agenda content'
  $permissions['node:question:delete own agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own announcement content'
  $permissions['node:question:delete own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own answer content'
  $permissions['node:question:delete own answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own discussion content'
  $permissions['node:question:delete own discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own event content'
  $permissions['node:question:delete own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own page content'
  $permissions['node:question:delete own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:delete own survey content'
  $permissions['node:question:delete own survey content'] = array(
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

  // Exported og permission: 'node:question:update any agenda content'
  $permissions['node:question:update any agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any announcement content'
  $permissions['node:question:update any announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any answer content'
  $permissions['node:question:update any answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any discussion content'
  $permissions['node:question:update any discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any event content'
  $permissions['node:question:update any event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any page content'
  $permissions['node:question:update any page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update any survey content'
  $permissions['node:question:update any survey content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update body field'
  $permissions['node:question:update body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update document file'
  $permissions['node:question:update document file'] = array(
    'roles' => array(
      'member' => 'member',
    ),
  );

  // Exported og permission: 'node:question:update field_accept field'
  $permissions['node:question:update field_accept field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_add_other_business_lines field'
  $permissions['node:question:update field_add_other_business_lines field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_agenda_pdf field'
  $permissions['node:question:update field_agenda_pdf field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_answers_count field'
  $permissions['node:question:update field_answers_count field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_application_guide_lines field'
  $permissions['node:question:update field_application_guide_lines field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_application_status field'
  $permissions['node:question:update field_application_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_attachment field'
  $permissions['node:question:update field_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_category field'
  $permissions['node:question:update field_category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_class_id field'
  $permissions['node:question:update field_class_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_cover_photo field'
  $permissions['node:question:update field_cover_photo field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_date_period field'
  $permissions['node:question:update field_date_period field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_discussion_attachment field'
  $permissions['node:question:update field_discussion_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_document_workspace field'
  $permissions['node:question:update field_document_workspace field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_event_address field'
  $permissions['node:question:update field_event_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_event_date field'
  $permissions['node:question:update field_event_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_event_location field'
  $permissions['node:question:update field_event_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_event_organizers field'
  $permissions['node:question:update field_event_organizers field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_explain_steps field'
  $permissions['node:question:update field_explain_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_field_video_url field'
  $permissions['node:question:update field_field_video_url field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_first_name field'
  $permissions['node:question:update field_first_name field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_image field'
  $permissions['node:question:update field_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_last_name field'
  $permissions['node:question:update field_last_name field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_lecture_number field'
  $permissions['node:question:update field_lecture_number field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_lecturer field'
  $permissions['node:question:update field_lecturer field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_link field'
  $permissions['node:question:update field_link field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_other_lines_of_business field'
  $permissions['node:question:update field_other_lines_of_business field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_private field'
  $permissions['node:question:update field_private field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:question:update field_registeration field'
  $permissions['node:question:update field_registeration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_registration field'
  $permissions['node:question:update field_registration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_schedule field'
  $permissions['node:question:update field_schedule field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_skills field'
  $permissions['node:question:update field_skills field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_submitted field'
  $permissions['node:question:update field_submitted field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_tags field'
  $permissions['node:question:update field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_taken_steps field'
  $permissions['node:question:update field_taken_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update field_target_audience field'
  $permissions['node:question:update field_target_audience field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_who_can_view field'
  $permissions['node:question:update field_who_can_view field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update field_your_idea field'
  $permissions['node:question:update field_your_idea field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update group'
  $permissions['node:question:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update group_access field'
  $permissions['node:question:update group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update group_content_access field'
  $permissions['node:question:update group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update group_group field'
  $permissions['node:question:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update group_register field'
  $permissions['node:question:update group_register field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update og_group_ref field'
  $permissions['node:question:update og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update og_node_link field'
  $permissions['node:question:update og_node_link field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update og_roles_permissions field'
  $permissions['node:question:update og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update og_user_node field'
  $permissions['node:question:update og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:update og_user_node1 field'
  $permissions['node:question:update og_user_node1 field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own agenda content'
  $permissions['node:question:update own agenda content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own announcement content'
  $permissions['node:question:update own announcement content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own answer content'
  $permissions['node:question:update own answer content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own discussion content'
  $permissions['node:question:update own discussion content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own event content'
  $permissions['node:question:update own event content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own page content'
  $permissions['node:question:update own page content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:update own survey content'
  $permissions['node:question:update own survey content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view body field'
  $permissions['node:question:view body field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view document file'
  $permissions['node:question:view document file'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_accept field'
  $permissions['node:question:view field_accept field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_add_other_business_lines field'
  $permissions['node:question:view field_add_other_business_lines field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_agenda_pdf field'
  $permissions['node:question:view field_agenda_pdf field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_answers_count field'
  $permissions['node:question:view field_answers_count field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_application_guide_lines field'
  $permissions['node:question:view field_application_guide_lines field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_application_status field'
  $permissions['node:question:view field_application_status field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_attachment field'
  $permissions['node:question:view field_attachment field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_category field'
  $permissions['node:question:view field_category field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_class_id field'
  $permissions['node:question:view field_class_id field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_cover_photo field'
  $permissions['node:question:view field_cover_photo field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_date_period field'
  $permissions['node:question:view field_date_period field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_discussion_attachment field'
  $permissions['node:question:view field_discussion_attachment field'] = array(
    'roles' => array(
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_document_workspace field'
  $permissions['node:question:view field_document_workspace field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_event_address field'
  $permissions['node:question:view field_event_address field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_event_date field'
  $permissions['node:question:view field_event_date field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_event_location field'
  $permissions['node:question:view field_event_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_event_organizers field'
  $permissions['node:question:view field_event_organizers field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_explain_steps field'
  $permissions['node:question:view field_explain_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_field_video_url field'
  $permissions['node:question:view field_field_video_url field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_first_name field'
  $permissions['node:question:view field_first_name field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_image field'
  $permissions['node:question:view field_image field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view field_last_name field'
  $permissions['node:question:view field_last_name field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_link field'
  $permissions['node:question:view field_link field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_other_lines_of_business field'
  $permissions['node:question:view field_other_lines_of_business field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_private field'
  $permissions['node:question:view field_private field'] = array(
    'roles' => array(),
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

  // Exported og permission: 'node:question:view field_registeration field'
  $permissions['node:question:view field_registeration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_registration field'
  $permissions['node:question:view field_registration field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_schedule field'
  $permissions['node:question:view field_schedule field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_skills field'
  $permissions['node:question:view field_skills field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_submitted field'
  $permissions['node:question:view field_submitted field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_tags field'
  $permissions['node:question:view field_tags field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_taken_steps field'
  $permissions['node:question:view field_taken_steps field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:question:view field_target_audience field'
  $permissions['node:question:view field_target_audience field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_who_can_view field'
  $permissions['node:question:view field_who_can_view field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view field_your_idea field'
  $permissions['node:question:view field_your_idea field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view group_access field'
  $permissions['node:question:view group_access field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view group_content_access field'
  $permissions['node:question:view group_content_access field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view group_group field'
  $permissions['node:question:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view group_register field'
  $permissions['node:question:view group_register field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view og_group_ref field'
  $permissions['node:question:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view og_node_link field'
  $permissions['node:question:view og_node_link field'] = array(
    'roles' => array(
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view og_roles_permissions field'
  $permissions['node:question:view og_roles_permissions field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:question:view og_user_node field'
  $permissions['node:question:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:question:view og_user_node1 field'
  $permissions['node:question:view og_user_node1 field'] = array(
    'roles' => array(),
  );

  return $permissions;
}
