<?php
/**
 * @file
 * community_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function community_user_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_languages|field_collection_item|field_professional_information|form';
  $field_group->group_name = 'group_languages';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_professional_information';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Languages',
    'weight' => '5',
    'children' => array(
      0 => 'field_lang_arabic',
      1 => 'field_lang_english',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-languages field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Languages');

  return $field_groups;
}
