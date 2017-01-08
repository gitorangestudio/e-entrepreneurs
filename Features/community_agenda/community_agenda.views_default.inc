<?php
/**
 * @file
 * community_agenda.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function community_agenda_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'agenda_schedule';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Class Agenda';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Class Agenda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Field collection item: Entity with the Schedule (field_schedule) */
  $handler->display->display_options['relationships']['field_schedule_node']['id'] = 'field_schedule_node';
  $handler->display->display_options['relationships']['field_schedule_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_schedule_node']['field'] = 'field_schedule_node';
  $handler->display->display_options['relationships']['field_schedule_node']['required'] = TRUE;
  /* Field: Field collection item: Date */
  $handler->display->display_options['fields']['field_date']['id'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
  $handler->display->display_options['fields']['field_date']['field'] = 'field_date';
  $handler->display->display_options['fields']['field_date']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
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
  );
  /* Field: Field collection item: Training Subject	 */
  $handler->display->display_options['fields']['field_subject']['id'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['table'] = 'field_data_field_subject';
  $handler->display->display_options['fields']['field_subject']['field'] = 'field_subject';
  $handler->display->display_options['fields']['field_subject']['settings'] = array(
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
  );
  /* Field: Field collection item: Lecture Type */
  $handler->display->display_options['fields']['field_lecture_type']['id'] = 'field_lecture_type';
  $handler->display->display_options['fields']['field_lecture_type']['table'] = 'field_data_field_lecture_type';
  $handler->display->display_options['fields']['field_lecture_type']['field'] = 'field_lecture_type';
  $handler->display->display_options['fields']['field_lecture_type']['settings'] = array(
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
  );
  /* Field: Field collection item: Presenter(s) */
  $handler->display->display_options['fields']['field_presenter']['id'] = 'field_presenter';
  $handler->display->display_options['fields']['field_presenter']['table'] = 'field_data_field_presenter';
  $handler->display->display_options['fields']['field_presenter']['field'] = 'field_presenter';
  $handler->display->display_options['fields']['field_presenter']['settings'] = array(
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
  );
  $handler->display->display_options['fields']['field_presenter']['delta_offset'] = '0';
  /* Field: Field collection item: Lecture */
  $handler->display->display_options['fields']['field_lecture_ref']['id'] = 'field_lecture_ref';
  $handler->display->display_options['fields']['field_lecture_ref']['table'] = 'field_data_field_lecture_ref';
  $handler->display->display_options['fields']['field_lecture_ref']['field'] = 'field_lecture_ref';
  $handler->display->display_options['fields']['field_lecture_ref']['settings'] = array(
    'link' => 0,
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
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_schedule_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Global: PHP */
  $handler->display->display_options['filters']['php']['id'] = 'php';
  $handler->display->display_options['filters']['php']['table'] = 'views';
  $handler->display->display_options['filters']['php']['field'] = 'php';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Agenda Schedule';
  $export['agenda_schedule'] = $view;

  return $export;
}
