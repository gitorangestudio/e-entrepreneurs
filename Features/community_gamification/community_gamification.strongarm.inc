<?php
/**
 * @file
 * community_gamification.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function community_gamification_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_goal_task__task_bundle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-10',
        ),
        'goal_id' => array(
          'weight' => '-9',
        ),
        'type' => array(
          'weight' => '-8',
        ),
        'task_count' => array(
          'weight' => '-7',
        ),
        'within' => array(
          'weight' => '-6',
        ),
        'within_interval' => array(
          'weight' => '-3',
        ),
        'limit_count' => array(
          'weight' => '-7',
        ),
        'limit_interval' => array(
          'weight' => '-5',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_goal_task__task_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_goal__goal_bundle';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_goal__goal_bundle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_goal_category_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_goal_category_pattern'] = $strongarm;

  return $export;
}
