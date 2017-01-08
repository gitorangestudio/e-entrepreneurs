<?php
/**
 * @file
 * community_og_bridge.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function community_og_bridge_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_afddf782-562f-4d81-8903-37e5ea77589d';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Project Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'project-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'project' => 'project',
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
      'top' => NULL,
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
  );
  $display->cache = array();
  $display->title = 'No Title';
  $display->uuid = '0994fa9e-2d7f-44d0-9c29-3d674e92fe28';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_afddf782-562f-4d81-8903-37e5ea77589d';
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
  $pane->pid = 'new-6bc11124-f0b1-4e9c-8f0f-e3ce74cfc3c6';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'project_circle_progrss';
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
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'project-progress',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '6bc11124-f0b1-4e9c-8f0f-e3ce74cfc3c6';
  $display->content['new-6bc11124-f0b1-4e9c-8f0f-e3ce74cfc3c6'] = $pane;
  $display->panels['left'][1] = 'new-6bc11124-f0b1-4e9c-8f0f-e3ce74cfc3c6';
  $pane = new stdClass();
  $pane->pid = 'new-42ecff6b-877d-46ab-bc67-e1ccc74b0cb0';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'project_owner';
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
    'override_title_text' => 'By',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'project-owner',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '42ecff6b-877d-46ab-bc67-e1ccc74b0cb0';
  $display->content['new-42ecff6b-877d-46ab-bc67-e1ccc74b0cb0'] = $pane;
  $display->panels['left'][2] = 'new-42ecff6b-877d-46ab-bc67-e1ccc74b0cb0';
  $pane = new stdClass();
  $pane->pid = 'new-b08c301a-1179-46a8-a6b6-e4b139dc6f5a';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_project_image';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'picture',
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
      'image_style' => 'project_full_content',
      'image_link' => '',
      'picture_mapping' => 'node_pictures',
      'fallback_image_style' => '',
      'lazyload' => 0,
      'lazyload_aspect_ratio' => 0,
    ),
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = 'b08c301a-1179-46a8-a6b6-e4b139dc6f5a';
  $display->content['new-b08c301a-1179-46a8-a6b6-e4b139dc6f5a'] = $pane;
  $display->panels['left'][3] = 'new-b08c301a-1179-46a8-a6b6-e4b139dc6f5a';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111';
  $display->content['new-86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111'] = $pane;
  $display->panels['left'][4] = 'new-86bcb0f3-c84f-4ac5-a96f-c9e2d06f5111';
  $pane = new stdClass();
  $pane->pid = 'new-4fa85fbd-93fa-474b-99cd-5867deebe90b';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_line_ofbusines';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Line of Business',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '4fa85fbd-93fa-474b-99cd-5867deebe90b';
  $display->content['new-4fa85fbd-93fa-474b-99cd-5867deebe90b'] = $pane;
  $display->panels['left'][5] = 'new-4fa85fbd-93fa-474b-99cd-5867deebe90b';
  $pane = new stdClass();
  $pane->pid = 'new-02ec39dd-2639-4a55-9d10-76242f917f58';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_explain_steps';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'above',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Steps Taken',
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
  $pane->uuid = '02ec39dd-2639-4a55-9d10-76242f917f58';
  $display->content['new-02ec39dd-2639-4a55-9d10-76242f917f58'] = $pane;
  $display->panels['left'][6] = 'new-02ec39dd-2639-4a55-9d10-76242f917f58';
  $pane = new stdClass();
  $pane->pid = 'new-27f8cf82-1fe8-46e4-b104-96cc65379242';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_field_video_url';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'file_rendered',
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
      'file_view_mode' => 'default',
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Project Video',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '27f8cf82-1fe8-46e4-b104-96cc65379242';
  $display->content['new-27f8cf82-1fe8-46e4-b104-96cc65379242'] = $pane;
  $display->panels['left'][7] = 'new-27f8cf82-1fe8-46e4-b104-96cc65379242';
  $pane = new stdClass();
  $pane->pid = 'new-50d7c758-f832-4e98-bc67-f187a05c7efd';
  $pane->panel = 'left';
  $pane->type = 'entity_view';
  $pane->subtype = 'node';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'project_in_panel_left_',
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '50d7c758-f832-4e98-bc67-f187a05c7efd';
  $display->content['new-50d7c758-f832-4e98-bc67-f187a05c7efd'] = $pane;
  $display->panels['left'][8] = 'new-50d7c758-f832-4e98-bc67-f187a05c7efd';
  $pane = new stdClass();
  $pane->pid = 'new-2810367d-5c93-4ac4-9e9c-2c6695c7b698';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:rules_links_accept_new_project';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = '2810367d-5c93-4ac4-9e9c-2c6695c7b698';
  $display->content['new-2810367d-5c93-4ac4-9e9c-2c6695c7b698'] = $pane;
  $display->panels['left'][9] = 'new-2810367d-5c93-4ac4-9e9c-2c6695c7b698';
  $pane = new stdClass();
  $pane->pid = 'new-5ccb7e18-2a1c-4260-82b2-b2950426abc1';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:rules_links_decline_new_project';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '5ccb7e18-2a1c-4260-82b2-b2950426abc1';
  $display->content['new-5ccb7e18-2a1c-4260-82b2-b2950426abc1'] = $pane;
  $display->panels['left'][10] = 'new-5ccb7e18-2a1c-4260-82b2-b2950426abc1';
  $pane = new stdClass();
  $pane->pid = 'new-230b53d9-5879-45ab-ac42-4d0f595ecb9b';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:rules_links_need_more_info';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '230b53d9-5879-45ab-ac42-4d0f595ecb9b';
  $display->content['new-230b53d9-5879-45ab-ac42-4d0f595ecb9b'] = $pane;
  $display->panels['left'][11] = 'new-230b53d9-5879-45ab-ac42-4d0f595ecb9b';
  $pane = new stdClass();
  $pane->pid = 'new-efae633e-76e5-4500-acda-3f5f8694d171';
  $pane->panel = 'left';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:rules_links_submit_a_project';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'view_mode' => 'full',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'efae633e-76e5-4500-acda-3f5f8694d171';
  $display->content['new-efae633e-76e5-4500-acda-3f5f8694d171'] = $pane;
  $display->panels['left'][12] = 'new-efae633e-76e5-4500-acda-3f5f8694d171';
  $pane = new stdClass();
  $pane->pid = 'new-948547d0-be17-4b05-8ed1-29dd7b4f7eee';
  $pane->panel = 'right';
  $pane->type = 'entity_field_extra';
  $pane->subtype = 'node:rules_links_submit_a_project';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'administer group',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'view_mode' => 'full',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'submit-project-link',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '948547d0-be17-4b05-8ed1-29dd7b4f7eee';
  $display->content['new-948547d0-be17-4b05-8ed1-29dd7b4f7eee'] = $pane;
  $display->panels['right'][0] = 'new-948547d0-be17-4b05-8ed1-29dd7b4f7eee';
  $pane = new stdClass();
  $pane->pid = 'new-090e8eae-4f74-4c48-b578-237e246bad6a';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'project_stage';
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
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '1',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'context' => array(
      0 => '',
    ),
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
  $pane->uuid = '090e8eae-4f74-4c48-b578-237e246bad6a';
  $display->content['new-090e8eae-4f74-4c48-b578-237e246bad6a'] = $pane;
  $display->panels['right'][1] = 'new-090e8eae-4f74-4c48-b578-237e246bad6a';
  $pane = new stdClass();
  $pane->pid = 'new-4b2ccf2e-2f36-4802-9c2a-c690a5b6e62b';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'og_members';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '3',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 1,
    'link_to_view' => 0,
    'args' => '%1',
    'url' => '',
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => 'Members',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'block-pan-bg block-header-blue',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '4b2ccf2e-2f36-4802-9c2a-c690a5b6e62b';
  $display->content['new-4b2ccf2e-2f36-4802-9c2a-c690a5b6e62b'] = $pane;
  $display->panels['right'][2] = 'new-4b2ccf2e-2f36-4802-9c2a-c690a5b6e62b';
  $pane = new stdClass();
  $pane->pid = 'new-2b16db40-ad5c-41ee-ab11-c2cdc777cf12';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:group_group';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'og_group_subscribe',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'field_name' => '0',
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
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '2b16db40-ad5c-41ee-ab11-c2cdc777cf12';
  $display->content['new-2b16db40-ad5c-41ee-ab11-c2cdc777cf12'] = $pane;
  $display->panels['right'][3] = 'new-2b16db40-ad5c-41ee-ab11-c2cdc777cf12';
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
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '19a02a3e-90bf-4847-b22d-9d29c82d8e8d';
  $display->content['new-19a02a3e-90bf-4847-b22d-9d29c82d8e8d'] = $pane;
  $display->panels['right'][4] = 'new-19a02a3e-90bf-4847-b22d-9d29c82d8e8d';
  $pane = new stdClass();
  $pane->pid = 'new-076f2cbd-909c-4b35-a456-b4fa8cf42beb';
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
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '076f2cbd-909c-4b35-a456-b4fa8cf42beb';
  $display->content['new-076f2cbd-909c-4b35-a456-b4fa8cf42beb'] = $pane;
  $display->panels['right'][5] = 'new-076f2cbd-909c-4b35-a456-b4fa8cf42beb';
  $pane = new stdClass();
  $pane->pid = 'new-1b6e9742-b648-477a-a479-06de84d10408';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(),
    'field_name' => 'field_invitation_group',
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
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '1b6e9742-b648-477a-a479-06de84d10408';
  $display->content['new-1b6e9742-b648-477a-a479-06de84d10408'] = $pane;
  $display->panels['right'][6] = 'new-1b6e9742-b648-477a-a479-06de84d10408';
  $pane = new stdClass();
  $pane->pid = 'new-f94c4f20-4623-46b9-9a6f-95b85a77f6dd';
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
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = 'f94c4f20-4623-46b9-9a6f-95b85a77f6dd';
  $display->content['new-f94c4f20-4623-46b9-9a6f-95b85a77f6dd'] = $pane;
  $display->panels['right'][7] = 'new-f94c4f20-4623-46b9-9a6f-95b85a77f6dd';
  $pane = new stdClass();
  $pane->pid = 'new-065665f7-82e1-4bda-aae4-67886a821b97';
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
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '065665f7-82e1-4bda-aae4-67886a821b97';
  $display->content['new-065665f7-82e1-4bda-aae4-67886a821b97'] = $pane;
  $display->panels['right'][8] = 'new-065665f7-82e1-4bda-aae4-67886a821b97';
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
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'c625b893-3bcf-42ef-8c5c-486f3158f5b1';
  $display->content['new-c625b893-3bcf-42ef-8c5c-486f3158f5b1'] = $pane;
  $display->panels['right'][9] = 'new-c625b893-3bcf-42ef-8c5c-486f3158f5b1';
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
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = 'f1419c74-9370-4bb1-b413-9b62eb6e488d';
  $display->content['new-f1419c74-9370-4bb1-b413-9b62eb6e488d'] = $pane;
  $display->panels['right'][10] = 'new-f1419c74-9370-4bb1-b413-9b62eb6e488d';
  $pane = new stdClass();
  $pane->pid = 'new-775da691-4f4b-455d-a798-62a9407037a1';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'og_invite_people-og_invite_people_form';
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
      1 => array(
        'name' => 'og_perm',
        'settings' => array(
          'perm' => 'invite people',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_entity_id:node_1',
        ),
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'invite-block',
    'css_class' => 'block-pan-bg block-header-gray',
  );
  $pane->extras = array();
  $pane->position = 11;
  $pane->locks = array();
  $pane->uuid = '775da691-4f4b-455d-a798-62a9407037a1';
  $display->content['new-775da691-4f4b-455d-a798-62a9407037a1'] = $pane;
  $display->panels['right'][11] = 'new-775da691-4f4b-455d-a798-62a9407037a1';
  $pane = new stdClass();
  $pane->pid = 'new-da434e1a-0fdf-40a9-8d55-0240febfa813';
  $pane->panel = 'right';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(),
    'field_name' => 'og_user_node',
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
  $pane->position = 12;
  $pane->locks = array();
  $pane->uuid = 'da434e1a-0fdf-40a9-8d55-0240febfa813';
  $display->content['new-da434e1a-0fdf-40a9-8d55-0240febfa813'] = $pane;
  $display->panels['right'][12] = 'new-da434e1a-0fdf-40a9-8d55-0240febfa813';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_afddf782-562f-4d81-8903-37e5ea77589d'] = $handler;

  return $export;
}
