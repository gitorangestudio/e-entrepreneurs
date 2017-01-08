<?php
/**
 * @file
 * community_user.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function community_user_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_education_pattern';
  $strongarm->value = 'cme-education/[term:name]';
  $export['pathauto_taxonomy_term_mentor_education_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_mentor_expertise_pattern';
  $strongarm->value = 'cme-expoertise/[term:name]';
  $export['pathauto_taxonomy_term_mentor_expertise_pattern'] = $strongarm;

  return $export;
}
