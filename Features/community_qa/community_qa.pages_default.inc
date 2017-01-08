<?php
/**
 * @file
 * community_qa.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function community_qa_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_fbd5e554-f138-40af-9f37-bc18c9fc4565';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Panel Question',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
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
              'question' => 'question',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'og_is_node_group',
          'settings' => NULL,
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
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
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'question_page_body',
          1 => 'question_statistics',
        ),
        'parent' => 'main',
        'class' => 'question-page-header',
        'hide_empty' => 1,
      ),
      'question_page_body' => array(
        'type' => 'region',
        'title' => 'Question Page Body',
        'width' => '76.80084399765353',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'Question-page-body',
        'hide_empty' => 1,
      ),
      'question_statistics' => array(
        'type' => 'region',
        'title' => 'Question Statistics',
        'width' => '23.199156002346477',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'question-page-statistics',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'question_page_body' => NULL,
      'question_statistics' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4e6fbe3c-2d63-43f7-9e16-aac50e5857f3';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_fbd5e554-f138-40af-9f37-bc18c9fc4565';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b0082258-f6c5-4d69-a654-b7f5b0736d2b';
  $pane->panel = 'question_page_body';
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
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b0082258-f6c5-4d69-a654-b7f5b0736d2b';
  $display->content['new-b0082258-f6c5-4d69-a654-b7f5b0736d2b'] = $pane;
  $display->panels['question_page_body'][0] = 'new-b0082258-f6c5-4d69-a654-b7f5b0736d2b';
  $pane = new stdClass();
  $pane->pid = 'new-7f30056e-ee9e-462a-a580-12ef3661738d';
  $pane->panel = 'question_page_body';
  $pane->type = 'views';
  $pane->subtype = 'question_s_answers';
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
    'css_id' => 'question-answers',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '7f30056e-ee9e-462a-a580-12ef3661738d';
  $display->content['new-7f30056e-ee9e-462a-a580-12ef3661738d'] = $pane;
  $display->panels['question_page_body'][1] = 'new-7f30056e-ee9e-462a-a580-12ef3661738d';
  $pane = new stdClass();
  $pane->pid = 'new-c6d126ee-b70a-4c35-8878-06132653a6ea';
  $pane->panel = 'question_page_body';
  $pane->type = 'node_create_links';
  $pane->subtype = 'node_create_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'types' => array(
      'answer' => 'answer',
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
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'c6d126ee-b70a-4c35-8878-06132653a6ea';
  $display->content['new-c6d126ee-b70a-4c35-8878-06132653a6ea'] = $pane;
  $display->panels['question_page_body'][2] = 'new-c6d126ee-b70a-4c35-8878-06132653a6ea';
  $pane = new stdClass();
  $pane->pid = 'new-b20f7aff-ec6c-4f69-8afc-316f4a622275';
  $pane->panel = 'question_statistics';
  $pane->type = 'views';
  $pane->subtype = 'author_question_list';
  $pane->shown = TRUE;
  $pane->access = array();
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
    'display' => 'default',
    'context' => array(
      0 => 'argument_entity_id:node_1.nid',
    ),
    'override_title' => 1,
    'override_title_text' => 'Author',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'question-page-author',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b20f7aff-ec6c-4f69-8afc-316f4a622275';
  $display->content['new-b20f7aff-ec6c-4f69-8afc-316f4a622275'] = $pane;
  $display->panels['question_statistics'][0] = 'new-b20f7aff-ec6c-4f69-8afc-316f4a622275';
  $pane = new stdClass();
  $pane->pid = 'new-f7757e58-7305-43e2-b764-177800100dac';
  $pane->panel = 'question_statistics';
  $pane->type = 'rate_widget';
  $pane->subtype = 'rate_widget';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'build_mode' => '1',
    'widget_name' => '1',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => 'Rate This Question',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'question-rate-this',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'f7757e58-7305-43e2-b764-177800100dac';
  $display->content['new-f7757e58-7305-43e2-b764-177800100dac'] = $pane;
  $display->panels['question_statistics'][1] = 'new-f7757e58-7305-43e2-b764-177800100dac';
  $pane = new stdClass();
  $pane->pid = 'new-7f467d69-0704-413d-886d-b08018075096';
  $pane->panel = 'question_statistics';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:group_access';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 6,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'editable',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'fallback_format' => 'list_default',
      'click_to_edit' => 0,
      'click_to_edit_style' => 'button',
      'empty_text' => '',
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
    'override_title' => 1,
    'override_title_text' => 'Question Visibility',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'question-visibility',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '7f467d69-0704-413d-886d-b08018075096';
  $display->content['new-7f467d69-0704-413d-886d-b08018075096'] = $pane;
  $display->panels['question_statistics'][2] = 'new-7f467d69-0704-413d-886d-b08018075096';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b0082258-f6c5-4d69-a654-b7f5b0736d2b';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_fbd5e554-f138-40af-9f37-bc18c9fc4565'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function community_qa_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ask_a_question';
  $page->task = 'page';
  $page->admin_title = 'Ask a question';
  $page->admin_description = '';
  $page->path = 'ask-question';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ask_a_question__panel';
  $handler->task = 'page';
  $handler->subtask = 'ask_a_question';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'ask-question-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'ask-question',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f0f05812-3cc9-42ab-b678-0010b8943685';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_ask_a_question__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6dfb0819-1018-498c-91a4-e2921b4b7762';
  $pane->panel = 'top';
  $pane->type = 'custom';
  $pane->subtype = 'custom';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Search TEXT',
    'title' => 'Welcome to Virtual Innovation and Entrepreneurship Hub!',
    'body' => '<p><span style="color: rgb(34, 34, 34); font-family: Arial, \'Helvetica Neue\', Helvetica, sans-serif; font-size: 13px; line-height: 16.9px;">We’d love to help you, and will do our best to get back to you as soon as possible.</span><br><span style="color: rgb(34, 34, 34); font-family: Arial, \'Helvetica Neue\', Helvetica, sans-serif; font-size: 13px; line-height: 16.9px;">However, your question might have been answered before. Try the search box below and if you don\'t find what you are looking for please go ahead and ask your question.</span></p>',
    'format' => 'full_html',
    'substitute' => TRUE,
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6dfb0819-1018-498c-91a4-e2921b4b7762';
  $display->content['new-6dfb0819-1018-498c-91a4-e2921b4b7762'] = $pane;
  $display->panels['top'][0] = 'new-6dfb0819-1018-498c-91a4-e2921b4b7762';
  $pane = new stdClass();
  $pane->pid = 'new-65dddcca-9cde-45a4-b984-d147f82bec22';
  $pane->panel = 'top';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
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
  $pane->uuid = '65dddcca-9cde-45a4-b984-d147f82bec22';
  $display->content['new-65dddcca-9cde-45a4-b984-d147f82bec22'] = $pane;
  $display->panels['top'][1] = 'new-65dddcca-9cde-45a4-b984-d147f82bec22';
  $pane = new stdClass();
  $pane->pid = 'new-44870853-1444-4ac2-9260-5295c953bbb7';
  $pane->panel = 'top';
  $pane->type = 'php';
  $pane->subtype = 'php';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Ask a question link',
    'title' => '',
    'body' => '<a href="<?php print url(\'add-question\'); ?>">Ask a question</a>',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'ask-question-block',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '44870853-1444-4ac2-9260-5295c953bbb7';
  $display->content['new-44870853-1444-4ac2-9260-5295c953bbb7'] = $pane;
  $display->panels['top'][2] = 'new-44870853-1444-4ac2-9260-5295c953bbb7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-6dfb0819-1018-498c-91a4-e2921b4b7762';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'questions_answers';
  $page->task = 'page';
  $page->admin_title = 'Questions & Answers';
  $page->admin_description = '';
  $page->path = 'node/66';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_questions_answers__panel';
  $handler->task = 'page';
  $handler->subtask = 'questions_answers';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'questions-page',
    'css_id' => 'questions-page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
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
        'width' => '73.97891963109355',
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'top',
        ),
        'parent' => 'main',
        'class' => 'question-header',
        'hide_empty' => 1,
      ),
      'top' => array(
        'type' => 'region',
        'title' => 'Top',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      'right' => array(
        'type' => 'region',
        'title' => 'Right',
        'width' => '26.021080368906457',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => 'question-right',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'center' => NULL,
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '9',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'center' => array(
      'style' => '-1',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '98a4a976-d968-4d4a-814f-ed97bcb39f88';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_questions_answers__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-b55ce77b-bd12-4a0d-8c7b-d68a0546da23';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'questions_blocks_in_question_answers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block',
    'override_title' => 1,
    'override_title_text' => 'Latest Questions',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'top-questions',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'b55ce77b-bd12-4a0d-8c7b-d68a0546da23';
  $display->content['new-b55ce77b-bd12-4a0d-8c7b-d68a0546da23'] = $pane;
  $display->panels['left'][0] = 'new-b55ce77b-bd12-4a0d-8c7b-d68a0546da23';
  $pane = new stdClass();
  $pane->pid = 'new-43846818-a5f8-4f2e-a688-b83d5efc8dc2';
  $pane->panel = 'left';
  $pane->type = 'views';
  $pane->subtype = 'questions_blocks_in_question_answers';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 1,
    'nodes_per_page' => '20',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_1',
    'override_title' => 1,
    'override_title_text' => 'All Questions',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'all-questions',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '43846818-a5f8-4f2e-a688-b83d5efc8dc2';
  $display->content['new-43846818-a5f8-4f2e-a688-b83d5efc8dc2'] = $pane;
  $display->panels['left'][1] = 'new-43846818-a5f8-4f2e-a688-b83d5efc8dc2';
  $pane = new stdClass();
  $pane->pid = 'new-429360ac-2078-433e-a6f6-925040f2de4f';
  $pane->panel = 'right';
  $pane->type = 'block';
  $pane->subtype = 'custom_search_blocks-1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Q&A Search',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'questions-search',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '429360ac-2078-433e-a6f6-925040f2de4f';
  $display->content['new-429360ac-2078-433e-a6f6-925040f2de4f'] = $pane;
  $display->panels['right'][0] = 'new-429360ac-2078-433e-a6f6-925040f2de4f';
  $pane = new stdClass();
  $pane->pid = 'new-8e32370b-d930-4977-bf2e-d3bebb44c3fe';
  $pane->panel = 'right';
  $pane->type = 'php';
  $pane->subtype = 'php';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'admin_title' => 'Question Create Link',
    'title' => '',
    'body' => '<?php

print l(t(\'Ask a Question\'), \'ask-question\', array(\'attributes\' => array(\'class\' => array(\'create-link\',\'create-link-question\'))));

 ?>
',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'ask-question',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8e32370b-d930-4977-bf2e-d3bebb44c3fe';
  $display->content['new-8e32370b-d930-4977-bf2e-d3bebb44c3fe'] = $pane;
  $display->panels['right'][1] = 'new-8e32370b-d930-4977-bf2e-d3bebb44c3fe';
  $pane = new stdClass();
  $pane->pid = 'new-af7f3b32-d1d4-411a-8843-5133d77e03cf';
  $pane->panel = 'right';
  $pane->type = 'views';
  $pane->subtype = 'questions_blocks_in_question_answers';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 2,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
  );
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '5',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'block_2',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'my-questions',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'af7f3b32-d1d4-411a-8843-5133d77e03cf';
  $display->content['new-af7f3b32-d1d4-411a-8843-5133d77e03cf'] = $pane;
  $display->panels['right'][2] = 'new-af7f3b32-d1d4-411a-8843-5133d77e03cf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages[''] = $page;

  return $pages;

}
