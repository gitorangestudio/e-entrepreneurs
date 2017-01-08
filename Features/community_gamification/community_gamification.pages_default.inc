<?php
/**
 * @file
 * community_gamification.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function community_gamification_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_01ecf552-0c2a-436b-8cc6-a9423ae24a26';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Authenticated and expert',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'user-dashboard',
    'css_id' => 'auth-dashboard',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 2,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'php',
          'settings' => array(
            'description' => '',
            'php' => '
$profile_user = user_load((int)$contexts[\'argument_entity_id:user_1\']->argument);
$loged_user_object = user_load((int)$contexts[\'logged-in-user\']->argument);


if(isset($profile_user->field_private[\'und\'])){
      
    
    // Profile is public
    if($profile_user->field_private[\'und\'][0][\'value\'] == \'0\') {
        
        return TRUE;
    }
    // Profile is private
    elseif($profile_user->field_private[\'und\'][0][\'value\'] == \'1\'){
        
        
        if((in_array(\'administrator\', $loged_user_object->roles)) || 
           (in_array(\'Program Manager\', $loged_user_object->roles))  || 
           ($contexts[\'argument_entity_id:user_1\']->argument == (int)$contexts[\'logged-in-user\']->argument)){
            
            return TRUE;
            
        }
        
        return FALSE;
    }
    
    
}else{

    return TRUE;
}

',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
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
          2 => 2,
          3 => 3,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Projects',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'dashboard-part1',
        'hide_empty' => 0,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left',
          1 => 'right',
        ),
        'parent' => 'main',
        'class' => 'dashboard-top',
        'hide_empty' => 1,
      ),
      'left' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '37.29365536976531',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'dashboard-top-left',
        'hide_empty' => 1,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '62.70634463023469',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'dashboard-top-right',
        'hide_empty' => 1,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(),
        'parent' => 'main',
        'class' => 'dashboard-middle',
        'hide_empty' => 0,
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'left_2',
          1 => 'q_and_a',
          2 => 'center_',
        ),
        'parent' => 'main',
        'class' => 'dashboard-middle',
        'hide_empty' => 0,
      ),
      'left_2' => array(
        'type' => 'region',
        'title' => 'Left',
        'width' => '33.328429930371684',
        'width_type' => '%',
        'parent' => '3',
        'class' => 'dashboard-part1',
        'hide_empty' => 1,
      ),
      'q_and_a' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => '33.33156522887014',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
        'hide_empty' => 0,
      ),
      'center_' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '33.340004840758176',
        'width_type' => '%',
        'parent' => '3',
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
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right_2' => NULL,
      'q_and_a' => NULL,
      'center_' => NULL,
      'top' => NULL,
      'middle' => array(
        'column_type' => 'col-lg',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'left_2' => array(
      'style' => '-1',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Dashboard';
  $display->uuid = '9e0bf533-073d-4290-9c8d-e4fb7e7af511';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_01ecf552-0c2a-436b-8cc6-a9423ae24a26';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9b5d31b8-233a-451b-b566-e7d00ed75b80';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user_events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
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
    'display' => 'block_1',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-events',
    'css_class' => 'dashboard-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9b5d31b8-233a-451b-b566-e7d00ed75b80';
  $display->content['new-9b5d31b8-233a-451b-b566-e7d00ed75b80'] = $pane;
  $display->panels['left'][0] = 'new-9b5d31b8-233a-451b-b566-e7d00ed75b80';
  $pane = new stdClass();
  $pane->pid = 'new-ab6e29bd-d1f2-4d67-85fb-c5805f1d1fc7';
  $pane->panel = 'middle';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user_events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
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
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-discussions',
    'css_class' => 'dashboard-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'ab6e29bd-d1f2-4d67-85fb-c5805f1d1fc7';
  $display->content['new-ab6e29bd-d1f2-4d67-85fb-c5805f1d1fc7'] = $pane;
  $display->panels['middle'][0] = 'new-ab6e29bd-d1f2-4d67-85fb-c5805f1d1fc7';
  $pane = new stdClass();
  $pane->pid = 'new-750f2d98-de0c-4c05-9cd6-9c4e4cb192e5';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'dashboard_user_events';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_3',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-questions',
    'css_class' => 'dashboard-block',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '750f2d98-de0c-4c05-9cd6-9c4e4cb192e5';
  $display->content['new-750f2d98-de0c-4c05-9cd6-9c4e4cb192e5'] = $pane;
  $display->panels['right'][0] = 'new-750f2d98-de0c-4c05-9cd6-9c4e4cb192e5';
  $pane = new stdClass();
  $pane->pid = 'new-8417a89b-6af4-4218-888c-7176f1036d1f';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8417a89b-6af4-4218-888c-7176f1036d1f';
  $display->content['new-8417a89b-6af4-4218-888c-7176f1036d1f'] = $pane;
  $display->panels['top'][0] = 'new-8417a89b-6af4-4218-888c-7176f1036d1f';
  $pane = new stdClass();
  $pane->pid = 'new-ce10155d-dc61-4176-aeea-1c172dc1d939';
  $pane->panel = 'top';
  $pane->type = 'page_title';
  $pane->subtype = 'page_title';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'markup' => 'h1',
    'class' => '',
    'id' => '',
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
  $pane->uuid = 'ce10155d-dc61-4176-aeea-1c172dc1d939';
  $display->content['new-ce10155d-dc61-4176-aeea-1c172dc1d939'] = $pane;
  $display->panels['top'][1] = 'new-ce10155d-dc61-4176-aeea-1c172dc1d939';
  $pane = new stdClass();
  $pane->pid = 'new-e70b6b1b-f0c4-4f5b-ad91-6cd47811bbfb';
  $pane->panel = 'top';
  $pane->type = 'page_tabs';
  $pane->subtype = 'page_tabs';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'type' => 'both',
    'id' => 'tabs',
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
  $pane->uuid = 'e70b6b1b-f0c4-4f5b-ad91-6cd47811bbfb';
  $display->content['new-e70b6b1b-f0c4-4f5b-ad91-6cd47811bbfb'] = $pane;
  $display->panels['top'][2] = 'new-e70b6b1b-f0c4-4f5b-ad91-6cd47811bbfb';
  $pane = new stdClass();
  $pane->pid = 'new-37999158-e3ff-4685-b773-86341a9bc06d';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_2';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-inforamtion',
    'css_class' => 'dashboard-block-blue col-md-4 col-sm-12',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '37999158-e3ff-4685-b773-86341a9bc06d';
  $display->content['new-37999158-e3ff-4685-b773-86341a9bc06d'] = $pane;
  $display->panels['top'][3] = 'new-37999158-e3ff-4685-b773-86341a9bc06d';
  $pane = new stdClass();
  $pane->pid = 'new-2422b067-28c1-4cf7-8ba1-4f0155dd6eaa';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_3';
  $pane->shown = FALSE;
  $pane->access = array();
  $pane->configuration = array(
    'arguments' => array(
      'uid' => '358',
    ),
    'context' => array(
      0 => 'argument_entity_id:user_1',
    ),
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard-block-blue col-md-4 col-sm-12',
  );
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '2422b067-28c1-4cf7-8ba1-4f0155dd6eaa';
  $display->content['new-2422b067-28c1-4cf7-8ba1-4f0155dd6eaa'] = $pane;
  $display->panels['top'][4] = 'new-2422b067-28c1-4cf7-8ba1-4f0155dd6eaa';
  $pane = new stdClass();
  $pane->pid = 'new-68ddd4b0-2f95-4ffb-88e5-be985cbe2845';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_4';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'dashboard-block-blue col-md-4 col-sm-12',
  );
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '68ddd4b0-2f95-4ffb-88e5-be985cbe2845';
  $display->content['new-68ddd4b0-2f95-4ffb-88e5-be985cbe2845'] = $pane;
  $display->panels['top'][5] = 'new-68ddd4b0-2f95-4ffb-88e5-be985cbe2845';
  $pane = new stdClass();
  $pane->pid = 'new-6b1d99bd-6994-4e68-b26c-0f26aa056d06';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'projects_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
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
    'display' => 'block_2',
    'context' => array(
      0 => 'argument_entity_id:user_1.uid',
    ),
    'override_title' => 1,
    'override_title_text' => 'My Classes',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-classes',
    'css_class' => 'dashboard-block-blue col-md-4 col-sm-6 col-xs-12',
  );
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = '6b1d99bd-6994-4e68-b26c-0f26aa056d06';
  $display->content['new-6b1d99bd-6994-4e68-b26c-0f26aa056d06'] = $pane;
  $display->panels['top'][6] = 'new-6b1d99bd-6994-4e68-b26c-0f26aa056d06';
  $pane = new stdClass();
  $pane->pid = 'new-9a50e7a1-6a12-4c5b-babc-1aa671106f3d';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_5';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-jobhistory',
    'css_class' => 'dashboard-block-blue col-md-6 col-sm-12',
  );
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '9a50e7a1-6a12-4c5b-babc-1aa671106f3d';
  $display->content['new-9a50e7a1-6a12-4c5b-babc-1aa671106f3d'] = $pane;
  $display->panels['top'][7] = 'new-9a50e7a1-6a12-4c5b-babc-1aa671106f3d';
  $pane = new stdClass();
  $pane->pid = 'new-03b035ff-1b2a-41ff-b541-2385317c0812';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_6';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-cv',
    'css_class' => 'col-md-2 col-sm-6',
  );
  $pane->extras = array();
  $pane->position = 8;
  $pane->locks = array();
  $pane->uuid = '03b035ff-1b2a-41ff-b541-2385317c0812';
  $display->content['new-03b035ff-1b2a-41ff-b541-2385317c0812'] = $pane;
  $display->panels['top'][8] = 'new-03b035ff-1b2a-41ff-b541-2385317c0812';
  $pane = new stdClass();
  $pane->pid = 'new-ae7591c8-7a5e-4087-b7c7-67189b489b7c';
  $pane->panel = 'top';
  $pane->type = 'views_panes';
  $pane->subtype = 'dashboard_panes-panel_pane_7';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 5,
          ),
        ),
        'context' => 'argument_entity_id:user_1',
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      2 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-skills',
    'css_class' => 'dashboard-block-blue col-md-8 col-sm-12',
  );
  $pane->extras = array();
  $pane->position = 9;
  $pane->locks = array();
  $pane->uuid = 'ae7591c8-7a5e-4087-b7c7-67189b489b7c';
  $display->content['new-ae7591c8-7a5e-4087-b7c7-67189b489b7c'] = $pane;
  $display->panels['top'][9] = 'new-ae7591c8-7a5e-4087-b7c7-67189b489b7c';
  $pane = new stdClass();
  $pane->pid = 'new-159207bb-e80e-4bef-aa75-9d91aadd32ba';
  $pane->panel = 'top';
  $pane->type = 'views';
  $pane->subtype = 'projects_list';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'compare_users',
        'settings' => array(
          'equality' => '1',
        ),
        'context' => array(
          0 => 'argument_entity_id:user_1',
          1 => 'logged-in-user',
        ),
        'not' => FALSE,
      ),
      1 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'or',
  );
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
    'display' => 'block_1',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => 'My Business Ideas',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'dashboard-myproject',
    'css_class' => 'dashboard-block-blue col-md-12',
  );
  $pane->extras = array();
  $pane->position = 10;
  $pane->locks = array();
  $pane->uuid = '159207bb-e80e-4bef-aa75-9d91aadd32ba';
  $display->content['new-159207bb-e80e-4bef-aa75-9d91aadd32ba'] = $pane;
  $display->panels['top'][10] = 'new-159207bb-e80e-4bef-aa75-9d91aadd32ba';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_01ecf552-0c2a-436b-8cc6-a9423ae24a26'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'user_view__panel_context_38748981-37ce-4423-b354-ee80eccee5df';
  $handler->task = 'user_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Private Profile',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'private-profile',
    'css_id' => 'private-profile',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 13,
            ),
          ),
          'context' => 'argument_entity_id:user_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'compare_users',
          'settings' => array(
            'equality' => '0',
          ),
          'context' => array(
            0 => 'logged-in-user',
            1 => 'argument_entity_id:user_1',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3b423794-2f99-47ad-a60c-4bf0422b6dcc';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'user_view__panel_context_38748981-37ce-4423-b354-ee80eccee5df';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-9664b70b-7f51-4dbc-ab5c-3f90a26432a7';
  $pane->panel = 'middle';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Text',
    'title' => '',
    'body' => '<p>Sorry, this profile is private.</p>',
    'format' => 'filtered_html',
    'substitute' => 1,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '9664b70b-7f51-4dbc-ab5c-3f90a26432a7';
  $display->content['new-9664b70b-7f51-4dbc-ab5c-3f90a26432a7'] = $pane;
  $display->panels['middle'][0] = 'new-9664b70b-7f51-4dbc-ab5c-3f90a26432a7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-9664b70b-7f51-4dbc-ab5c-3f90a26432a7';
  $handler->conf['display'] = $display;
  $export['user_view__panel_context_38748981-37ce-4423-b354-ee80eccee5df'] = $handler;

  return $export;
}
