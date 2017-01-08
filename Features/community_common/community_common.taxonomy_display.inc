<?php
/**
 * @file
 * community_common.taxonomy_display.inc
 */

/**
 * Implements hook_taxonomy_display_default_displays().
 */
function community_common_taxonomy_display_default_displays() {
  $export = array();

  $taxonomy_display = new stdClass();
  $taxonomy_display->api_version = 1;
  $taxonomy_display->machine_name = 'tags';
  $taxonomy_display->term_display_plugin = 'TaxonomyDisplayTermDisplayHandlerCore';
  $taxonomy_display->term_display_options = '';
  $taxonomy_display->associated_display_plugin = 'TaxonomyDisplayAssociatedDisplayHandlerViews';
  $taxonomy_display->associated_display_options = array(
    'view' => 'term_view',
    'display' => 'default',
  );
  $taxonomy_display->add_feed = FALSE;
  $taxonomy_display->breadcrumb_display_plugin = 'TaxonomyDisplayBreadcrumbDisplayHandlerIgnore';
  $taxonomy_display->breadcrumb_display_options = '';
  $export['tags'] = $taxonomy_display;

  return $export;
}
