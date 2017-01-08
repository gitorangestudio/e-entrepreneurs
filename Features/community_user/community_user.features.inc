<?php
/**
 * @file
 * community_user.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function community_user_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function community_user_default_profile2_type() {
  $items = array();
  $items['counselor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "counselor",
    "label" : "Counselor",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['entrepreneur'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "entrepreneur",
    "label" : "Entrepreneur",
    "weight" : "10",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['expert'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "expert",
    "label" : "Expert",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['mentor'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "mentor",
    "label" : "Mentor",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 0 },
    "rdf_mapping" : []
  }');
  $items['normal'] = entity_import('profile2_type', '{
    "userCategory" : false,
    "userView" : false,
    "type" : "normal",
    "label" : "Normal",
    "weight" : "0",
    "data" : { "registration" : 0, "use_page" : 1 },
    "rdf_mapping" : []
  }');
  return $items;
}
