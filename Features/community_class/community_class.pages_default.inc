<?php
/**
 * @file
 * community_class.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function community_class_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__class-page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Class Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'class-page',
    'css_id' => 'project-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'class-page',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'class' => 'class',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'right',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '68.66567350383615',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '31.33432649616386',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 0,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0994fa9e-2d7f-44d0-9c29-3d674e92fe28';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__class-page';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-436c7855-b20b-4da5-9e91-e23041e58882';
  $pane->panel = 'left';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'none',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h1',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '436c7855-b20b-4da5-9e91-e23041e58882';
  $display->content['new-436c7855-b20b-4da5-9e91-e23041e58882'] = $pane;
  $display->panels['left'][0] = 'new-436c7855-b20b-4da5-9e91-e23041e58882';
  $pane = new stdClass();
  $pane->pid = 'new-86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111';
  $display->content['new-86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111'] = $pane;
  $display->panels['left'][1] = 'new-86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111';
  $pane = new stdClass();
  $pane->pid = 'new-8c963b04-0a6d-4048-9d37-7152f3c75d2f';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'class_members';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Class Members',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'class-members',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '8c963b04-0a6d-4048-9d37-7152f3c75d2f';
  $display->content['new-8c963b04-0a6d-4048-9d37-7152f3c75d2f'] = $pane;
  $display->panels['left'][2] = 'new-8c963b04-0a6d-4048-9d37-7152f3c75d2f';
  $pane = new stdClass();
  $pane->pid = 'new-9a3d7ad4-e8c6-42dd-98f9-d9ae642af9f8';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'class_members_projects';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '12',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'override_title' => 1,
    'override_title_text' => 'Members\' Business Ideas',
    'override_title_heading' => 'h2',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'members-projects',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9a3d7ad4-e8c6-42dd-98f9-d9ae642af9f8';
  $display->content['new-9a3d7ad4-e8c6-42dd-98f9-d9ae642af9f8'] = $pane;
  $display->panels['left'][3] = 'new-9a3d7ad4-e8c6-42dd-98f9-d9ae642af9f8';
  $pane = new stdClass();
  $pane->pid = 'new-c0fe26b2-a82d-456f-9de3-a73d689f01b5';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_class_id';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'number_integer',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'linked_field' => array(
        'linked' => 0,
        'destination' => '',
        'advanced' => array(
          'title' => '',
          'target' => '',
          'class' => '',
          'rel' => '',
          'text' => '',
        ),
      ),
      'thousand_separator' => '',
      'prefix_suffix' => 1,
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Class ID',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c0fe26b2-a82d-456f-9de3-a73d689f01b5';
  $display->content['new-c0fe26b2-a82d-456f-9de3-a73d689f01b5'] = $pane;
  $display->panels['right'][0] = 'new-c0fe26b2-a82d-456f-9de3-a73d689f01b5';
  $pane = new stdClass();
  $pane->pid = 'new-6cf9f07d-8029-41b0-b8d9-886249bc6475';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_date_period';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'date_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'format_type' => 'short',
      'multiple_number' => '',
      'multiple_from' => '',
      'multiple_to' => '',
      'fromto' => 'both',
      'show_remaining_days' => 0,
      'linked_field' => array(
        'linked' => 0,
        'destination' => '',
        'advanced' => array(
          'title' => '',
          'target' => '',
          'class' => '',
          'rel' => '',
          'text' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6cf9f07d-8029-41b0-b8d9-886249bc6475';
  $display->content['new-6cf9f07d-8029-41b0-b8d9-886249bc6475'] = $pane;
  $display->panels['right'][1] = 'new-6cf9f07d-8029-41b0-b8d9-886249bc6475';
  $pane = new stdClass();
  $pane->pid = 'new-037c576b-1223-4873-b6bf-11b30964b5c2';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_registeration';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'inline',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '037c576b-1223-4873-b6bf-11b30964b5c2';
  $display->content['new-037c576b-1223-4873-b6bf-11b30964b5c2'] = $pane;
  $display->panels['right'][2] = 'new-037c576b-1223-4873-b6bf-11b30964b5c2';
  $pane = new stdClass();
  $pane->pid = 'new-677f7e4c-014c-429e-9872-5fd6e4260dbe';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_content_events-panel_pane_3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Announcements',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-pan-bg block-header-gray',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '677f7e4c-014c-429e-9872-5fd6e4260dbe';
  $display->content['new-677f7e4c-014c-429e-9872-5fd6e4260dbe'] = $pane;
  $display->panels['right'][3] = 'new-677f7e4c-014c-429e-9872-5fd6e4260dbe';
  $pane = new stdClass();
  $pane->pid = 'new-49e6c256-2465-436e-ba6e-66a678578c87';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'announcement' => 'announcement',
    ),
    'field_name' => 'og_group_ref',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '49e6c256-2465-436e-ba6e-66a678578c87';
  $display->content['new-49e6c256-2465-436e-ba6e-66a678578c87'] = $pane;
  $display->panels['right'][4] = 'new-49e6c256-2465-436e-ba6e-66a678578c87';
  $pane = new stdClass();
  $pane->pid = 'new-3380acaa-47ad-432b-87dc-1041b7cb1982';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_content_events-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Class Agenda',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'class-agenda',
    'css_class' => 'block-pan-bg block-header-gray',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3380acaa-47ad-432b-87dc-1041b7cb1982';
  $display->content['new-3380acaa-47ad-432b-87dc-1041b7cb1982'] = $pane;
  $display->panels['right'][5] = 'new-3380acaa-47ad-432b-87dc-1041b7cb1982';
  $pane = new stdClass();
  $pane->pid = 'new-e530f8d3-21dd-46ca-ad06-bb7562fd561a';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'agenda' => 'agenda',
    ),
    'field_name' => 'og_group_ref',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'e530f8d3-21dd-46ca-ad06-bb7562fd561a';
  $display->content['new-e530f8d3-21dd-46ca-ad06-bb7562fd561a'] = $pane;
  $display->panels['right'][6] = 'new-e530f8d3-21dd-46ca-ad06-bb7562fd561a';
  $pane = new stdClass();
  $pane->pid = 'new-e45aaa60-2366-4c88-ac19-e2df8d21fee2';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_content_events-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Give Feedback',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'class-survey',
    'css_class' => 'block-pan-bg block-header-gray',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'e45aaa60-2366-4c88-ac19-e2df8d21fee2';
  $display->content['new-e45aaa60-2366-4c88-ac19-e2df8d21fee2'] = $pane;
  $display->panels['right'][7] = 'new-e45aaa60-2366-4c88-ac19-e2df8d21fee2';
  $pane = new stdClass();
  $pane->pid = 'new-7c2cc94f-89fb-46d0-a635-9699d1ca3424';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'survey' => 'survey',
    ),
    'field_name' => 'og_group_ref',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '7c2cc94f-89fb-46d0-a635-9699d1ca3424';
  $display->content['new-7c2cc94f-89fb-46d0-a635-9699d1ca3424'] = $pane;
  $display->panels['right'][8] = 'new-7c2cc94f-89fb-46d0-a635-9699d1ca3424';
  $pane = new stdClass();
  $pane->pid = 'new-19a02a3e-90bf-4847-b22d-9d29c82d8e8d';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_content_events-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Events',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-pan-bg block-header-gray',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '19a02a3e-90bf-4847-b22d-9d29c82d8e8d';
  $display->content['new-19a02a3e-90bf-4847-b22d-9d29c82d8e8d'] = $pane;
  $display->panels['right'][9] = 'new-19a02a3e-90bf-4847-b22d-9d29c82d8e8d';
  $pane = new stdClass();
  $pane->pid = 'new-f2ad05da-6a15-4b06-9f7a-5986402ac9ed';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'event' => 'event',
    ),
    'field_name' => 'og_group_ref',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'f2ad05da-6a15-4b06-9f7a-5986402ac9ed';
  $display->content['new-f2ad05da-6a15-4b06-9f7a-5986402ac9ed'] = $pane;
  $display->panels['right'][10] = 'new-f2ad05da-6a15-4b06-9f7a-5986402ac9ed';
  $pane = new stdClass();
  $pane->pid = 'new-c625b893-3bcf-42ef-8c5c-486f3158f5b1';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'og_content_events-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => TRUE,
      ),
    ),
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => 'Discussions',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-pan-bg block-header-gray',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = 'c625b893-3bcf-42ef-8c5c-486f3158f5b1';
  $display->content['new-c625b893-3bcf-42ef-8c5c-486f3158f5b1'] = $pane;
  $display->panels['right'][11] = 'new-c625b893-3bcf-42ef-8c5c-486f3158f5b1';
  $pane = new stdClass();
  $pane->pid = 'new-f1419c74-9370-4bb1-b413-9b62eb6e488d';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'discussion' => 'discussion',
    ),
    'field_name' => 'og_group_ref',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'f1419c74-9370-4bb1-b413-9b62eb6e488d';
  $display->content['new-f1419c74-9370-4bb1-b413-9b62eb6e488d'] = $pane;
  $display->panels['right'][12] = 'new-f1419c74-9370-4bb1-b413-9b62eb6e488d';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__class-page'] = $handler;

  return $export;
}
