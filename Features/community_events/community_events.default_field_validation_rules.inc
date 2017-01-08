<?php
/**
 * @file
 * community_events.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function community_events_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Event Date';
  $rule->name = 'Event Date';
  $rule->field_name = 'field_event_date';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'event';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '-1 day',
    'max' => '',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      3 => 0,
      4 => 0,
      5 => 0,
      7 => 0,
      8 => 0,
      9 => 0,
      10 => 0,
      11 => 0,
      12 => 0,
    ),
    'errors' => 1,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'Can\'t set event start date in the past.';
  $export['Event Date'] = $rule;

  return $export;
}
