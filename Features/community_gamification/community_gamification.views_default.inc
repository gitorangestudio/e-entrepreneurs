<?php
/**
 * @file
 * community_gamification.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function community_gamification_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'dashboard_panes';
  $view->description = 'New Dashboard Panes.';
  $view->tag = 'Dashboard';
  $view->base_table = 'users';
  $view->human_name = 'Dashboard Panes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'mail' => 'mail',
    'field_cpr_number' => 'field_cpr_number',
    'field_gender' => 'field_gender',
    'field_lang_arabic' => 'field_lang_arabic',
    'field_lang_english' => 'field_lang_english',
    'field_birthdate' => 'field_birthdate',
    'field_address' => 'field_address',
  );
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'expert' => 'expert',
    'mentor' => 'mentor',
    'counselor' => 'counselor',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_basic_information_value']['delta'] = '0';
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  /* Relationship: OG membership: OG membership from User */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'users';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  /* Field: User: Cover Photo */
  $handler->display->display_options['fields']['field_cover_photo']['id'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['table'] = 'field_data_field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['field'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['label'] = '';
  $handler->display->display_options['fields']['field_cover_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_photo']['type'] = 'picture';
  $handler->display->display_options['fields']['field_cover_photo']['settings'] = array(
    'picture_mapping' => 'dashboard_cover',
    'fallback_image_style' => 'profile_cover',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Class ID */
  $handler->display->display_options['fields']['field_class_id']['id'] = 'field_class_id';
  $handler->display->display_options['fields']['field_class_id']['table'] = 'field_data_field_class_id';
  $handler->display->display_options['fields']['field_class_id']['field'] = 'field_class_id';
  $handler->display->display_options['fields']['field_class_id']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['fields']['field_class_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_class_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
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
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Dashboard - Header */
  $handler = $view->new_display('panel_pane', 'Dashboard - Header', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'List Username, class id, profile picture and cover';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_class_id' => 'field_class_id',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'expert' => 'expert',
    'mentor' => 'mentor',
    'counselor' => 'counselor',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_basic_information_value']['delta'] = '-1';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: Cover Photo */
  $handler->display->display_options['fields']['field_cover_photo']['id'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['table'] = 'field_data_field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['field'] = 'field_cover_photo';
  $handler->display->display_options['fields']['field_cover_photo']['label'] = '';
  $handler->display->display_options['fields']['field_cover_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cover_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cover_photo']['type'] = 'picture';
  $handler->display->display_options['fields']['field_cover_photo']['settings'] = array(
    'picture_mapping' => 'dashboard_cover',
    'fallback_image_style' => 'profile_cover',
    'lazyload' => 0,
    'lazyload_aspect_ratio' => 0,
    'image_link' => '',
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'user_class_dashboard';
  $handler->display->display_options['fields']['view']['arguments'] = '!1';
  /* Field: User: Make my profile private */
  $handler->display->display_options['fields']['field_private']['id'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['table'] = 'field_data_field_private';
  $handler->display->display_options['fields']['field_private']['field'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['label'] = '';
  $handler->display->display_options['fields']['field_private']['element_type'] = '0';
  $handler->display->display_options['fields']['field_private']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_private']['settings'] = array(
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
  /* Field: Field collection item: Facebook Account */
  $handler->display->display_options['fields']['field_facebook']['id'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['table'] = 'field_data_field_facebook';
  $handler->display->display_options['fields']['field_facebook']['field'] = 'field_facebook';
  $handler->display->display_options['fields']['field_facebook']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_facebook']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['text'] = '<i class="fa fa-facebook-square"></i>';
  $handler->display->display_options['fields']['field_facebook']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['alter']['path'] = '[field_facebook-url]';
  $handler->display->display_options['fields']['field_facebook']['alter']['target'] = 'blank';
  $handler->display->display_options['fields']['field_facebook']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_facebook']['settings'] = array(
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
  /* Field: Field collection item: Linkedin Profile */
  $handler->display->display_options['fields']['field_linkedin_profile']['id'] = 'field_linkedin_profile';
  $handler->display->display_options['fields']['field_linkedin_profile']['table'] = 'field_data_field_linkedin_profile';
  $handler->display->display_options['fields']['field_linkedin_profile']['field'] = 'field_linkedin_profile';
  $handler->display->display_options['fields']['field_linkedin_profile']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_linkedin_profile']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_profile']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_profile']['alter']['text'] = '<i class="fa fa-linkedin-square"></i>';
  $handler->display->display_options['fields']['field_linkedin_profile']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_profile']['alter']['path'] = '[field_linkedin_profile-url]';
  $handler->display->display_options['fields']['field_linkedin_profile']['alter']['target'] = 'blank';
  $handler->display->display_options['fields']['field_linkedin_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_profile']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_linkedin_profile']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_profile']['settings'] = array(
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
  /* Field: Field collection item: Twitter Account */
  $handler->display->display_options['fields']['field_twitter']['id'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['table'] = 'field_data_field_twitter';
  $handler->display->display_options['fields']['field_twitter']['field'] = 'field_twitter';
  $handler->display->display_options['fields']['field_twitter']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_twitter']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['text'] = '<i class="fa fa-twitter-square"></i>';
  $handler->display->display_options['fields']['field_twitter']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['alter']['path'] = '[field_twitter-url]';
  $handler->display->display_options['fields']['field_twitter']['alter']['target'] = 'blank';
  $handler->display->display_options['fields']['field_twitter']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_twitter']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_twitter']['settings'] = array(
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Dashboard - Information */
  $handler = $view->new_display('panel_pane', 'Dashboard - Information', 'panel_pane_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Information';
  $handler->display->display_options['display_description'] = 'List User Information such as gender, speaks, DOB...';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'expert' => 'expert',
    'mentor' => 'mentor',
    'counselor' => 'counselor',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_basic_information_value']['delta'] = '0';
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  /* Field: Field collection item: CPR Number */
  $handler->display->display_options['fields']['field_cpr_number']['id'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['table'] = 'field_data_field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['field'] = 'field_cpr_number';
  $handler->display->display_options['fields']['field_cpr_number']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_cpr_number']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cpr_number']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cpr_number']['settings'] = array(
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
  /* Field: Field collection item: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_gender']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_gender']['settings'] = array(
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
  /* Field: Field collection item: Arabic */
  $handler->display->display_options['fields']['field_lang_arabic']['id'] = 'field_lang_arabic';
  $handler->display->display_options['fields']['field_lang_arabic']['table'] = 'field_data_field_lang_arabic';
  $handler->display->display_options['fields']['field_lang_arabic']['field'] = 'field_lang_arabic';
  $handler->display->display_options['fields']['field_lang_arabic']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_lang_arabic']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lang_arabic']['settings'] = array(
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
  $handler->display->display_options['fields']['field_lang_arabic']['delta_offset'] = '0';
  /* Field: Field collection item: English */
  $handler->display->display_options['fields']['field_lang_english']['id'] = 'field_lang_english';
  $handler->display->display_options['fields']['field_lang_english']['table'] = 'field_data_field_lang_english';
  $handler->display->display_options['fields']['field_lang_english']['field'] = 'field_lang_english';
  $handler->display->display_options['fields']['field_lang_english']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_lang_english']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_lang_english']['settings'] = array(
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
  $handler->display->display_options['fields']['field_lang_english']['delta_offset'] = '0';
  /* Field: Field: Date of birth */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_birthdate']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'short',
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
  /* Field: Field: Country */
  $handler->display->display_options['fields']['field_country']['id'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['table'] = 'field_data_field_country';
  $handler->display->display_options['fields']['field_country']['field'] = 'field_country';
  $handler->display->display_options['fields']['field_country']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_country']['settings'] = array(
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
  /* Field: Field: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_phone']['label'] = 'Phone Number';
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_phone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_phone']['settings'] = array(
    'title' => '',
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
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'context',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Dashboard - Bio */
  $handler = $view->new_display('panel_pane', 'Dashboard - Bio', 'panel_pane_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Biography';
  $handler->display->display_options['display_description'] = 'Display User Bio';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'expert' => 'expert',
    'mentor' => 'mentor',
    'counselor' => 'counselor',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_basic_information_value']['delta'] = '0';
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Bio */
  $handler->display->display_options['fields']['field_bio_1']['id'] = 'field_bio_1';
  $handler->display->display_options['fields']['field_bio_1']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio_1']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio_1']['relationship'] = 'profile';
  $handler->display->display_options['fields']['field_bio_1']['label'] = '';
  $handler->display->display_options['fields']['field_bio_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bio_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio_1']['settings'] = array(
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
  /* Field: Field: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_bio']['label'] = '';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['empty'] = '[field_bio_1]';
  $handler->display->display_options['fields']['field_bio']['settings'] = array(
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
  $handler->display->display_options['argument_input'] = array(
    'uid' => array(
      'type' => 'none',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );

  /* Display: Dashboard - Tech */
  $handler = $view->new_display('panel_pane', 'Dashboard - Tech', 'panel_pane_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Technical Background';
  $handler->display->display_options['display_description'] = 'Display User Tech';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'expert' => 'expert',
    'mentor' => 'mentor',
    'counselor' => 'counselor',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_basic_information_value']['delta'] = '0';
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Technical Background */
  $handler->display->display_options['fields']['field_technical_background']['id'] = 'field_technical_background';
  $handler->display->display_options['fields']['field_technical_background']['table'] = 'field_data_field_technical_background';
  $handler->display->display_options['fields']['field_technical_background']['field'] = 'field_technical_background';
  $handler->display->display_options['fields']['field_technical_background']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_technical_background']['label'] = '';
  $handler->display->display_options['fields']['field_technical_background']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_technical_background']['settings'] = array(
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

  /* Display: Dashboard - Job History */
  $handler = $view->new_display('panel_pane', 'Dashboard - Job History', 'panel_pane_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Job History';
  $handler->display->display_options['display_description'] = 'Display User Job History';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'mail' => 'mail',
    'field_cpr_number' => 'field_cpr_number',
    'field_gender' => 'field_gender',
    'field_lang_arabic' => 'field_lang_arabic',
    'field_lang_english' => 'field_lang_english',
    'field_birthdate' => 'field_birthdate',
    'field_address' => 'field_address',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'cme' => 'cme',
  );
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Jobs History */
  $handler->display->display_options['fields']['field_employment_history']['id'] = 'field_employment_history';
  $handler->display->display_options['fields']['field_employment_history']['table'] = 'field_data_field_employment_history';
  $handler->display->display_options['fields']['field_employment_history']['field'] = 'field_employment_history';
  $handler->display->display_options['fields']['field_employment_history']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_employment_history']['label'] = '';
  $handler->display->display_options['fields']['field_employment_history']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_employment_history']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_employment_history']['settings'] = array(
    'view_mode' => 'full',
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
  $handler->display->display_options['fields']['field_employment_history']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_employment_history']['multi_type'] = 'ul';

  /* Display: Dashboard - CV */
  $handler = $view->new_display('panel_pane', 'Dashboard - CV', 'panel_pane_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'Display User CV ';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'mail' => 'mail',
    'field_cpr_number' => 'field_cpr_number',
    'field_gender' => 'field_gender',
    'field_lang_arabic' => 'field_lang_arabic',
    'field_lang_english' => 'field_lang_english',
    'field_birthdate' => 'field_birthdate',
    'field_address' => 'field_address',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'cme' => 'cme',
  );
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Upload Your CV */
  $handler->display->display_options['fields']['field_cv']['id'] = 'field_cv';
  $handler->display->display_options['fields']['field_cv']['table'] = 'field_data_field_cv';
  $handler->display->display_options['fields']['field_cv']['field'] = 'field_cv';
  $handler->display->display_options['fields']['field_cv']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_cv']['label'] = '';
  $handler->display->display_options['fields']['field_cv']['alter']['text'] = 'Download';
  $handler->display->display_options['fields']['field_cv']['alter']['target'] = 'blank';
  $handler->display->display_options['fields']['field_cv']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cv']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_cv']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_cv']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_cv']['settings'] = array(
    'text' => 'Download',
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
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Field: Upload Your CV (field_cv:fid) */
  $handler->display->display_options['filters']['field_cv_fid']['id'] = 'field_cv_fid';
  $handler->display->display_options['filters']['field_cv_fid']['table'] = 'field_data_field_cv';
  $handler->display->display_options['filters']['field_cv_fid']['field'] = 'field_cv_fid';
  $handler->display->display_options['filters']['field_cv_fid']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['filters']['field_cv_fid']['operator'] = 'not empty';

  /* Display: Dashboard - Lines of Business */
  $handler = $view->new_display('panel_pane', 'Dashboard - Lines of Business', 'panel_pane_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Lines of Business';
  $handler->display->display_options['display_description'] = 'Display User Lines of Business';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'mail' => 'mail',
    'field_cpr_number' => 'field_cpr_number',
    'field_gender' => 'field_gender',
    'field_lang_arabic' => 'field_lang_arabic',
    'field_lang_english' => 'field_lang_english',
    'field_birthdate' => 'field_birthdate',
    'field_address' => 'field_address',
  );
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
    'cme' => 'cme',
  );
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Lines of business */
  $handler->display->display_options['fields']['field_skills']['id'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['table'] = 'field_data_field_skills';
  $handler->display->display_options['fields']['field_skills']['field'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_skills']['label'] = '';
  $handler->display->display_options['fields']['field_skills']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_skills']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_skills']['settings'] = array(
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
  $handler->display->display_options['fields']['field_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_skills']['multi_type'] = 'ul';
  /* Field: Field: Other Lines of business */
  $handler->display->display_options['fields']['field_other_lines_of_business']['id'] = 'field_other_lines_of_business';
  $handler->display->display_options['fields']['field_other_lines_of_business']['table'] = 'field_data_field_other_lines_of_business';
  $handler->display->display_options['fields']['field_other_lines_of_business']['field'] = 'field_other_lines_of_business';
  $handler->display->display_options['fields']['field_other_lines_of_business']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_other_lines_of_business']['label'] = '';
  $handler->display->display_options['fields']['field_other_lines_of_business']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_other_lines_of_business']['settings'] = array(
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
  $export['dashboard_panes'] = $view;

  $view = new view();
  $view->name = 'dashboard_user_bio_tech';
  $view->description = 'User Card in dashboard page';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Dashboard - User Bio Tech';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  /* Field: Field: Bio */
  $handler->display->display_options['fields']['field_bio']['id'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['table'] = 'field_data_field_bio';
  $handler->display->display_options['fields']['field_bio']['field'] = 'field_bio';
  $handler->display->display_options['fields']['field_bio']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_bio']['label'] = 'biography';
  $handler->display->display_options['fields']['field_bio']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bio']['settings'] = array(
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
  /* Field: Field collection item: Technical Background */
  $handler->display->display_options['fields']['field_technical_background']['id'] = 'field_technical_background';
  $handler->display->display_options['fields']['field_technical_background']['table'] = 'field_data_field_technical_background';
  $handler->display->display_options['fields']['field_technical_background']['field'] = 'field_technical_background';
  $handler->display->display_options['fields']['field_technical_background']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_technical_background']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_technical_background']['settings'] = array(
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
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['dashboard_user_bio_tech'] = $view;

  $view = new view();
  $view->name = 'dashboard_user_card';
  $view->description = 'User Card in dashboard page';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Dashboard - User Card';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: User: Profile */
  $handler->display->display_options['relationships']['profile']['id'] = 'profile';
  $handler->display->display_options['relationships']['profile']['table'] = 'users';
  $handler->display->display_options['relationships']['profile']['field'] = 'profile';
  $handler->display->display_options['relationships']['profile']['bundle_types'] = array(
    'entrepreneur' => 'entrepreneur',
  );
  /* Relationship: Profile: Basic Information (field_basic_information) */
  $handler->display->display_options['relationships']['field_basic_information_value']['id'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['table'] = 'field_data_field_basic_information';
  $handler->display->display_options['relationships']['field_basic_information_value']['field'] = 'field_basic_information_value';
  $handler->display->display_options['relationships']['field_basic_information_value']['relationship'] = 'profile';
  /* Relationship: Profile: Professional Information (field_professional_information) */
  $handler->display->display_options['relationships']['field_professional_information_value']['id'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['table'] = 'field_data_field_professional_information';
  $handler->display->display_options['relationships']['field_professional_information_value']['field'] = 'field_professional_information_value';
  $handler->display->display_options['relationships']['field_professional_information_value']['relationship'] = 'profile';
  $handler->display->display_options['relationships']['field_professional_information_value']['delta'] = '0';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['picture']['link_photo_to_profile'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_address_country']['id'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_country']['field'] = 'field_address_country';
  $handler->display->display_options['fields']['field_address_country']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_address_country']['label'] = '';
  $handler->display->display_options['fields']['field_address_country']['element_label_colon'] = FALSE;
  /* Field: Field: Lines of business */
  $handler->display->display_options['fields']['field_skills']['id'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['table'] = 'field_data_field_skills';
  $handler->display->display_options['fields']['field_skills']['field'] = 'field_skills';
  $handler->display->display_options['fields']['field_skills']['relationship'] = 'field_professional_information_value';
  $handler->display->display_options['fields']['field_skills']['label'] = '';
  $handler->display->display_options['fields']['field_skills']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_skills']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_skills']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_skills']['settings'] = array(
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
  $handler->display->display_options['fields']['field_skills']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_skills']['multi_type'] = 'ul';
  /* Field: Field: Date of birth */
  $handler->display->display_options['fields']['field_birthdate']['id'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['table'] = 'field_data_field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['field'] = 'field_birthdate';
  $handler->display->display_options['fields']['field_birthdate']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_birthdate']['label'] = '';
  $handler->display->display_options['fields']['field_birthdate']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_birthdate']['settings'] = array(
    'format_type' => 'long',
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
  /* Field: Field collection item: Gender */
  $handler->display->display_options['fields']['field_gender']['id'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['table'] = 'field_data_field_gender';
  $handler->display->display_options['fields']['field_gender']['field'] = 'field_gender';
  $handler->display->display_options['fields']['field_gender']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_gender']['label'] = '';
  $handler->display->display_options['fields']['field_gender']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_gender']['settings'] = array(
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
  /* Field: Field collection item: Linkedin Profile */
  $handler->display->display_options['fields']['field_linkedin_profile']['id'] = 'field_linkedin_profile';
  $handler->display->display_options['fields']['field_linkedin_profile']['table'] = 'field_data_field_linkedin_profile';
  $handler->display->display_options['fields']['field_linkedin_profile']['field'] = 'field_linkedin_profile';
  $handler->display->display_options['fields']['field_linkedin_profile']['relationship'] = 'field_basic_information_value';
  $handler->display->display_options['fields']['field_linkedin_profile']['label'] = '';
  $handler->display->display_options['fields']['field_linkedin_profile']['element_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_profile']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_profile']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_profile']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_linkedin_profile']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_linkedin_profile']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_linkedin_profile']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_linkedin_profile']['settings'] = array(
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
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'My Class';
  $handler->display->display_options['fields']['view']['empty'] = 'You are not currently a member of any class.';
  $handler->display->display_options['fields']['view']['view'] = 'member_class_link';
  $handler->display->display_options['fields']['view']['arguments'] = '[!uid]';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $export['dashboard_user_card'] = $view;

  $view = new view();
  $view->name = 'dashboard_user_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Dashboard - User Content';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'load_more';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['effects']['type'] = 'fade';
  $handler->display->display_options['pager']['options']['effects']['speed'] = 'slow';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="views-empty-result">You don\'t have any events.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: OG membership: OG membership from Node */
  $handler->display->display_options['relationships']['og_membership_rel']['id'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel']['field'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_rel']['required'] = TRUE;
  /* Relationship: OG membership: Group Node from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_node_group']['id'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['field'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['relationship'] = 'og_membership_rel';
  $handler->display->display_options['relationships']['og_membership_related_node_group']['required'] = TRUE;
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_user']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
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
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fa fa-calendar"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'event' => 'event',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'project' => 'project',
  );

  /* Display: Users Events */
  $handler = $view->new_display('block', 'Users Events', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Events';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fa fa-calendar"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['label'] = '';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
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

  /* Display: Users Discussion */
  $handler = $view->new_display('block', 'Users Discussion', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Discussions';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="views-empty-result">You don\'t have any discussions.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fa fa-comments"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Last comment time */
  $handler->display->display_options['fields']['last_comment_timestamp']['id'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['last_comment_timestamp']['field'] = 'last_comment_timestamp';
  $handler->display->display_options['fields']['last_comment_timestamp']['label'] = 'Last comment at';
  $handler->display->display_options['fields']['last_comment_timestamp']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['last_comment_timestamp']['date_format'] = 'time ago';
  $handler->display->display_options['fields']['last_comment_timestamp']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'discussion' => 'discussion',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'og_membership_related_node_group';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'project' => 'project',
  );

  /* Display: Users Questions */
  $handler = $view->new_display('block', 'Users Questions', 'block_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Questions';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="views-empty-result">You don\'t have any questions.</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<i class="fa fa-question"></i>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  $export['dashboard_user_events'] = $view;

  $view = new view();
  $view->name = 'goal_tasks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'goals';
  $view->human_name = 'Goal Tasks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goal Tasks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'Sorry, there is no details for [title].';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = TRUE;
  /* Relationship: Goal: Goal task */
  $handler->display->display_options['relationships']['goals_tasks']['id'] = 'goals_tasks';
  $handler->display->display_options['relationships']['goals_tasks']['table'] = 'goals';
  $handler->display->display_options['relationships']['goals_tasks']['field'] = 'goals_tasks';
  /* Field: Goal: Goal ID */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['label'] = '';
  $handler->display->display_options['fields']['goal_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Goal: User Points */
  $handler->display->display_options['fields']['goal_userpoints']['id'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['table'] = 'field_data_goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['field'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['label'] = 'Points';
  $handler->display->display_options['fields']['goal_userpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Goal: Goal Category */
  $handler->display->display_options['fields']['field_goal_category']['id'] = 'field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['field'] = 'field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['label'] = '';
  $handler->display->display_options['fields']['field_goal_category']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_goal_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_goal_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_goal_category']['settings'] = array(
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
  /* Field: Goal task: Bundle_type */
  $handler->display->display_options['fields']['bundle_type']['id'] = 'bundle_type';
  $handler->display->display_options['fields']['bundle_type']['table'] = 'goals_tasks';
  $handler->display->display_options['fields']['bundle_type']['field'] = 'bundle_type';
  $handler->display->display_options['fields']['bundle_type']['relationship'] = 'goals_tasks';
  $handler->display->display_options['fields']['bundle_type']['label'] = '';
  $handler->display->display_options['fields']['bundle_type']['element_label_colon'] = FALSE;
  /* Field: Goal task: Goal task ID */
  $handler->display->display_options['fields']['task_id']['id'] = 'task_id';
  $handler->display->display_options['fields']['task_id']['table'] = 'goals_tasks';
  $handler->display->display_options['fields']['task_id']['field'] = 'task_id';
  $handler->display->display_options['fields']['task_id']['relationship'] = 'goals_tasks';
  $handler->display->display_options['fields']['task_id']['label'] = '';
  $handler->display->display_options['fields']['task_id']['element_label_colon'] = FALSE;
  /* Field: Goal Content */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Goal Content';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="pop-goal-img col-md-3 col-sm-6 col-xs-12">
[goal_img] 
</div>
<div class="pop-goal-description col-md-9 col-sm-6 col-xs-12">
 
  <div class="pop-goal-points">Win: [goal_userpoints]  point</div>
  <div class="pop-goal-content"></div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Goal task: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'goals_tasks';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'goals_tasks';
  $handler->display->display_options['fields']['title_1']['label'] = '';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = FALSE;
  /* Contextual filter: Goal: Goal ID */
  $handler->display->display_options['arguments']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['arguments']['goal_id']['table'] = 'goals';
  $handler->display->display_options['arguments']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['arguments']['goal_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['goal_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['goal_id']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['goal_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['goal_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['goal_id']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'goal/%/tasks';
  $export['goal_tasks'] = $view;

  $view = new view();
  $view->name = 'goals_completed_by_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Goals completed by users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goals completed by users';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'تطبيق';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابق';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'التالي ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'points',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'goal_id' => 'goal_id',
    'title' => 'title',
    'goal_img' => 'goal_img',
    'goal_userpoints' => 'goal_userpoints',
    'points' => 'points',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goal_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goal_img' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goal_userpoints' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'points' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Goal - completed by users */
  $handler->display->display_options['relationships']['goals_completed_goals']['id'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goals_completed_goals']['table'] = 'users';
  $handler->display->display_options['relationships']['goals_completed_goals']['field'] = 'goals_completed_goals';
  /* Relationship: Goal - completed by users: Goal */
  $handler->display->display_options['relationships']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['relationships']['goal_id']['table'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['relationships']['goal_id']['relationship'] = 'goals_completed_goals';
  /* Relationship: Userpoints total: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Goal - completed by users: Goal */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals_completed_goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['relationship'] = 'goals_completed_goals';
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'goal_id';
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['relationship'] = 'goal_id';
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Goal: User Points */
  $handler->display->display_options['fields']['goal_userpoints']['id'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['table'] = 'field_data_goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['field'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['relationship'] = 'goal_id';
  $handler->display->display_options['fields']['goal_userpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  /* Sort criterion: Userpoints total: Current total points */
  $handler->display->display_options['sorts']['points']['id'] = 'points';
  $handler->display->display_options['sorts']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['sorts']['points']['field'] = 'points';
  $handler->display->display_options['sorts']['points']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_raw']['expose']['operator_id'] = 'uid_raw_op';
  $handler->display->display_options['filters']['uid_raw']['expose']['label'] = 'The user ID';
  $handler->display->display_options['filters']['uid_raw']['expose']['operator'] = 'uid_raw_op';
  $handler->display->display_options['filters']['uid_raw']['expose']['identifier'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'goals-completed-by-users';
  $export['goals_completed_by_users'] = $view;

  $view = new view();
  $view->name = 'goals_managment';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'goals';
  $view->human_name = 'Goals Managment';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goals Managment';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['label'] = '';
  $handler->display->display_options['fields']['goal_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Goal: Goal Category */
  $handler->display->display_options['fields']['field_goal_category']['id'] = 'field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['field'] = 'field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_goal_category']['settings'] = array(
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
  /* Field: Goal: Goal ID */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  /* Field: Goal: User Points */
  $handler->display->display_options['fields']['goal_userpoints']['id'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['table'] = 'field_data_goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['field'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Goal: Point Required	 */
  $handler->display->display_options['fields']['field_goals_point_requiered']['id'] = 'field_goals_point_requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['table'] = 'field_data_field_goals_point_requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['field'] = 'field_goals_point_requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['label'] = 'Point Requiered (Level)';
  $handler->display->display_options['fields']['field_goals_point_requiered']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Goal: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_goal';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Filter criterion: Goal: Goal Category (field_goal_category) */
  $handler->display->display_options['filters']['field_goal_category_tid']['id'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['filters']['field_goal_category_tid']['field'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_goal_category_tid']['expose']['operator_id'] = 'field_goal_category_tid_op';
  $handler->display->display_options['filters']['field_goal_category_tid']['expose']['label'] = 'Category';
  $handler->display->display_options['filters']['field_goal_category_tid']['expose']['operator'] = 'field_goal_category_tid_op';
  $handler->display->display_options['filters']['field_goal_category_tid']['expose']['identifier'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_goal_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_goal_category_tid']['vocabulary'] = 'goal_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'control-panel/goals';
  $export['goals_managment'] = $view;

  $view = new view();
  $view->name = 'manage_users';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Manage Users';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Users';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'picture' => 'picture',
    'name' => 'name',
    'mail' => 'mail',
    'rid' => 'rid',
    'created' => 'created',
    'access' => 'access',
    'login' => 'login',
    'view_user' => 'view_user',
    'edit_node' => 'view_user',
    'cancel_node' => 'view_user',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'picture' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'mail' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'rid' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'access' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'login' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_user' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'cancel_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: User: Make my profile private */
  $handler->display->display_options['fields']['field_private']['id'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['table'] = 'field_data_field_private';
  $handler->display->display_options['fields']['field_private']['field'] = 'field_private';
  $handler->display->display_options['fields']['field_private']['label'] = '';
  $handler->display->display_options['fields']['field_private']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_private']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_private']['alter']['text'] = '<i class="fa fa-lock"></i>';
  $handler->display->display_options['fields']['field_private']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_private']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_private']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_private']['settings'] = array(
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
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['picture']['alter']['text'] = '[picture]
[field_private]';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: User: E-mail */
  $handler->display->display_options['fields']['mail']['id'] = 'mail';
  $handler->display->display_options['fields']['mail']['table'] = 'users';
  $handler->display->display_options['fields']['mail']['field'] = 'mail';
  $handler->display->display_options['fields']['mail']['link_to_user'] = '0';
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Field: User: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'users';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Last access */
  $handler->display->display_options['fields']['access']['id'] = 'access';
  $handler->display->display_options['fields']['access']['table'] = 'users';
  $handler->display->display_options['fields']['access']['field'] = 'access';
  $handler->display->display_options['fields']['access']['date_format'] = 'raw time ago';
  $handler->display->display_options['fields']['access']['second_date_format'] = 'long';
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['view_user']['alter']['text'] = '<i class="fa fa-eye"></i>';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  /* Field: User: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'users';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = '<i class="fa fa-pencil"></i>';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: User: Cancel link */
  $handler->display->display_options['fields']['cancel_node']['id'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['table'] = 'users';
  $handler->display->display_options['fields']['cancel_node']['field'] = 'cancel_node';
  $handler->display->display_options['fields']['cancel_node']['label'] = '';
  $handler->display->display_options['fields']['cancel_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['cancel_node']['alter']['text'] = '<i class="fa fa-trash-o"></i>';
  $handler->display->display_options['fields']['cancel_node']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = 'id';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Realname: Real name */
  $handler->display->display_options['fields']['realname']['id'] = 'realname';
  $handler->display->display_options['fields']['realname']['table'] = 'realname';
  $handler->display->display_options['fields']['realname']['field'] = 'realname';
  $handler->display->display_options['fields']['realname']['exclude'] = TRUE;
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['operator'] = 'not';
  $handler->display->display_options['filters']['rid']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['filters']['rid']['group'] = 1;
  /* Filter criterion: Realname: Name */
  $handler->display->display_options['filters']['realname']['id'] = 'realname';
  $handler->display->display_options['filters']['realname']['table'] = 'realname';
  $handler->display->display_options['filters']['realname']['field'] = 'realname';
  $handler->display->display_options['filters']['realname']['operator'] = 'contains';
  $handler->display->display_options['filters']['realname']['group'] = 1;
  $handler->display->display_options['filters']['realname']['exposed'] = TRUE;
  $handler->display->display_options['filters']['realname']['expose']['operator_id'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['realname']['expose']['operator'] = 'realname_op';
  $handler->display->display_options['filters']['realname']['expose']['identifier'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_field'] = 'realname';
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['realname']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['operator'] = '!=';
  $handler->display->display_options['filters']['uid_raw']['value']['value'] = '0';
  $handler->display->display_options['filters']['uid_raw']['group'] = 1;
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['operator'] = 'starts';
  $handler->display->display_options['filters']['mail']['group'] = 1;
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_field'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Roles */
  $handler->display->display_options['filters']['rid_1']['id'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid_1']['field'] = 'rid';
  $handler->display->display_options['filters']['rid_1']['value'] = array(
    4 => '4',
    5 => '5',
    7 => '7',
    8 => '8',
    9 => '9',
  );
  $handler->display->display_options['filters']['rid_1']['group'] = 1;
  $handler->display->display_options['filters']['rid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['expose']['operator_id'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['label'] = 'Roles';
  $handler->display->display_options['filters']['rid_1']['expose']['operator'] = 'rid_1_op';
  $handler->display->display_options['filters']['rid_1']['expose']['identifier'] = 'rid_1';
  $handler->display->display_options['filters']['rid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['rid_1']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['rid_1']['reduce_duplicates'] = TRUE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'manage-users';
  $export['manage_users'] = $view;

  $view = new view();
  $view->name = 'reports_goal_tasks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'goals';
  $view->human_name = 'Reports: Goal Tasks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reports: Goal Tasks';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    1 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'goal_id' => 'goal_id',
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'goal_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Goal: Goal task */
  $handler->display->display_options['relationships']['goals_tasks']['id'] = 'goals_tasks';
  $handler->display->display_options['relationships']['goals_tasks']['table'] = 'goals';
  $handler->display->display_options['relationships']['goals_tasks']['field'] = 'goals_tasks';
  /* Field: Goal: Goal ID */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['exclude'] = TRUE;
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'goals/goal/[goal_id]';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Goal task: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'goals_tasks';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'goals_tasks';
  $handler->display->display_options['fields']['title_1']['label'] = 'Tasks';
  /* Filter criterion: Goal: Goal ID */
  $handler->display->display_options['filters']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['filters']['goal_id']['table'] = 'goals';
  $handler->display->display_options['filters']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['filters']['goal_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['goal_id']['expose']['operator_id'] = 'goal_id_op';
  $handler->display->display_options['filters']['goal_id']['expose']['label'] = 'Goal ID';
  $handler->display->display_options['filters']['goal_id']['expose']['operator'] = 'goal_id_op';
  $handler->display->display_options['filters']['goal_id']['expose']['identifier'] = 'goal_id';
  $handler->display->display_options['filters']['goal_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  /* Filter criterion: Goal: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'goals';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    10 => 0,
    11 => 0,
    12 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reports/goal-tasks';
  $export['reports_goal_tasks'] = $view;

  $view = new view();
  $view->name = 'reports_users_achieved_goals';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Reports: Users Achieved Goals';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Goals completed by users';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'تطبيق';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« الأولى';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ السابق';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'التالي ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'الأخيرة »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
    1 => array(
      'field' => 'points',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'goal_id' => 'goal_id',
    'title' => 'title',
    'goal_img' => 'goal_img',
    'goal_userpoints' => 'goal_userpoints',
    'points' => 'points',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goal_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goal_img' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'goal_userpoints' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'points' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: User: Goal - completed by users */
  $handler->display->display_options['relationships']['goals_completed_goals']['id'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goals_completed_goals']['table'] = 'users';
  $handler->display->display_options['relationships']['goals_completed_goals']['field'] = 'goals_completed_goals';
  /* Relationship: Goal - completed by users: Goal */
  $handler->display->display_options['relationships']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['relationships']['goal_id']['table'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['relationships']['goal_id']['relationship'] = 'goals_completed_goals';
  /* Relationship: Userpoints total: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Goal - completed by users: Goal */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals_completed_goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['relationship'] = 'goals_completed_goals';
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'goal_id';
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['relationship'] = 'goal_id';
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Goal: User Points */
  $handler->display->display_options['fields']['goal_userpoints']['id'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['table'] = 'field_data_goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['field'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['relationship'] = 'goal_id';
  $handler->display->display_options['fields']['goal_userpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['exclude'] = TRUE;
  /* Sort criterion: Userpoints total: Current total points */
  $handler->display->display_options['sorts']['points']['id'] = 'points';
  $handler->display->display_options['sorts']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['sorts']['points']['field'] = 'points';
  $handler->display->display_options['sorts']['points']['order'] = 'DESC';
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: The user ID */
  $handler->display->display_options['filters']['uid_raw']['id'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['table'] = 'users';
  $handler->display->display_options['filters']['uid_raw']['field'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid_raw']['expose']['operator_id'] = 'uid_raw_op';
  $handler->display->display_options['filters']['uid_raw']['expose']['label'] = 'The user ID';
  $handler->display->display_options['filters']['uid_raw']['expose']['operator'] = 'uid_raw_op';
  $handler->display->display_options['filters']['uid_raw']['expose']['identifier'] = 'uid_raw';
  $handler->display->display_options['filters']['uid_raw']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  /* Filter criterion: User: E-mail */
  $handler->display->display_options['filters']['mail']['id'] = 'mail';
  $handler->display->display_options['filters']['mail']['table'] = 'users';
  $handler->display->display_options['filters']['mail']['field'] = 'mail';
  $handler->display->display_options['filters']['mail']['exposed'] = TRUE;
  $handler->display->display_options['filters']['mail']['expose']['operator_id'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['label'] = 'E-mail';
  $handler->display->display_options['filters']['mail']['expose']['operator'] = 'mail_op';
  $handler->display->display_options['filters']['mail']['expose']['identifier'] = 'mail';
  $handler->display->display_options['filters']['mail']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['mail']['expose']['autocomplete_dependent'] = 0;

  /* Display: Achieved Goals */
  $handler = $view->new_display('page', 'Achieved Goals', 'page');
  $handler->display->display_options['path'] = 'reports/achieved-goals';

  /* Display: Achieved Goals */
  $handler = $view->new_display('page', 'Achieved Goals', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Goals completed by user';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'reports/achieved-goals/%';
  $export['reports_users_achieved_goals'] = $view;

  $view = new view();
  $view->name = 'user_badge_widget';
  $view->description = 'Goals';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'User Badge widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'User Badge widget';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No level';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: User: Goal - completed by users */
  $handler->display->display_options['relationships']['goals_completed_goals']['id'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goals_completed_goals']['table'] = 'users';
  $handler->display->display_options['relationships']['goals_completed_goals']['field'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goals_completed_goals']['required'] = TRUE;
  /* Relationship: Goal - completed by users: Goal */
  $handler->display->display_options['relationships']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['relationships']['goal_id']['table'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['relationships']['goal_id']['relationship'] = 'goals_completed_goals';
  $handler->display->display_options['relationships']['goal_id']['required'] = TRUE;
  /* Relationship: Userpoints total: User */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'userpoints_total';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'goal_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['relationship'] = 'goal_id';
  $handler->display->display_options['fields']['goal_img']['label'] = '';
  $handler->display->display_options['fields']['goal_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Userpoints total: Current total points */
  $handler->display->display_options['fields']['points']['id'] = 'points';
  $handler->display->display_options['fields']['points']['table'] = 'userpoints_total';
  $handler->display->display_options['fields']['points']['field'] = 'points';
  $handler->display->display_options['fields']['points']['label'] = 'Your Points';
  $handler->display->display_options['fields']['points']['element_label_colon'] = FALSE;
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Sort criterion: Goal: Level (field_level) */
  $handler->display->display_options['sorts']['field_level_value']['id'] = 'field_level_value';
  $handler->display->display_options['sorts']['field_level_value']['table'] = 'field_data_field_level';
  $handler->display->display_options['sorts']['field_level_value']['field'] = 'field_level_value';
  $handler->display->display_options['sorts']['field_level_value']['relationship'] = 'goal_id';
  $handler->display->display_options['sorts']['field_level_value']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Goal: Goal Category (field_goal_category) */
  $handler->display->display_options['filters']['field_goal_category_tid']['id'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['filters']['field_goal_category_tid']['field'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['relationship'] = 'goal_id';
  $handler->display->display_options['filters']['field_goal_category_tid']['value'] = array(
    660 => '660',
  );
  $handler->display->display_options['filters']['field_goal_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_goal_category_tid']['vocabulary'] = 'goal_category';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Goal: Goal Category (field_goal_category) */
  $handler->display->display_options['filters']['field_goal_category_tid']['id'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['filters']['field_goal_category_tid']['field'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['relationship'] = 'goal_id';
  $handler->display->display_options['filters']['field_goal_category_tid']['value'] = array(
    629 => '629',
  );
  $handler->display->display_options['filters']['field_goal_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_goal_category_tid']['vocabulary'] = 'goal_category';
  $export['user_badge_widget'] = $view;

  $view = new view();
  $view->name = 'user_bages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'goals';
  $view->human_name = 'user bages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'user badges';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Goal: Goal ID */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['label'] = '';
  $handler->display->display_options['fields']['goal_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Goal: User Points */
  $handler->display->display_options['fields']['goal_userpoints']['id'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['table'] = 'field_data_goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['field'] = 'goal_userpoints';
  $handler->display->display_options['fields']['goal_userpoints']['label'] = 'Points';
  $handler->display->display_options['fields']['goal_userpoints']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Goal: Goal Category */
  $handler->display->display_options['fields']['field_goal_category']['id'] = 'field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['field'] = 'field_goal_category';
  $handler->display->display_options['fields']['field_goal_category']['label'] = '';
  $handler->display->display_options['fields']['field_goal_category']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_goal_category']['settings'] = array(
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
  /* Field: Goal: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'goals';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Filter criterion: Goal: Goal Active (field_goal_active) */
  $handler->display->display_options['filters']['field_goal_active_value']['id'] = 'field_goal_active_value';
  $handler->display->display_options['filters']['field_goal_active_value']['table'] = 'field_data_field_goal_active';
  $handler->display->display_options['filters']['field_goal_active_value']['field'] = 'field_goal_active_value';
  $handler->display->display_options['filters']['field_goal_active_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Goal: Goal Category (field_goal_category) */
  $handler->display->display_options['filters']['field_goal_category_tid']['id'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['filters']['field_goal_category_tid']['field'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_goal_category_tid']['value'] = array(
    629 => '629',
  );
  $handler->display->display_options['filters']['field_goal_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_goal_category_tid']['vocabulary'] = 'goal_category';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'user/%/badges';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Badges';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['user_bages'] = $view;

  $view = new view();
  $view->name = 'user_class_dashboard';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'User Class (in dashboard)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
  );
  /* Relationship: OG membership: OG membership from Node group */
  $handler->display->display_options['relationships']['og_membership_rel_group']['id'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['table'] = 'node';
  $handler->display->display_options['relationships']['og_membership_rel_group']['field'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_rel_group']['required'] = TRUE;
  /* Relationship: OG membership: User from OG membership */
  $handler->display->display_options['relationships']['og_membership_related_user']['id'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['table'] = 'og_membership';
  $handler->display->display_options['relationships']['og_membership_related_user']['field'] = 'og_membership_related_user';
  $handler->display->display_options['relationships']['og_membership_related_user']['relationship'] = 'og_membership_rel_group';
  $handler->display->display_options['relationships']['og_membership_related_user']['required'] = TRUE;
  /* Field: Content: Class ID */
  $handler->display->display_options['fields']['field_class_id']['id'] = 'field_class_id';
  $handler->display->display_options['fields']['field_class_id']['table'] = 'field_data_field_class_id';
  $handler->display->display_options['fields']['field_class_id']['field'] = 'field_class_id';
  $handler->display->display_options['fields']['field_class_id']['label'] = '';
  $handler->display->display_options['fields']['field_class_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_class_id']['alter']['text'] = '- [field_class_id] ';
  $handler->display->display_options['fields']['field_class_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_class_id']['empty'] = 'Unknown';
  $handler->display->display_options['fields']['field_class_id']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_class_id']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Class';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[field_class_id] ';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'og_membership_related_user';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'user';
  $handler->display->display_options['arguments']['uid']['default_argument_options']['user'] = FALSE;
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'user';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'class' => 'class',
  );
  $export['user_class_dashboard'] = $view;

  $view = new view();
  $view->name = 'user_level_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'goals';
  $view->human_name = 'user Level block';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Current level';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Goal: Goal ID */
  $handler->display->display_options['fields']['goal_id']['id'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['table'] = 'goals';
  $handler->display->display_options['fields']['goal_id']['field'] = 'goal_id';
  $handler->display->display_options['fields']['goal_id']['label'] = '';
  $handler->display->display_options['fields']['goal_id']['element_label_colon'] = FALSE;
  /* Field: Goal: Goal Image */
  $handler->display->display_options['fields']['goal_img']['id'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['table'] = 'field_data_goal_img';
  $handler->display->display_options['fields']['goal_img']['field'] = 'goal_img';
  $handler->display->display_options['fields']['goal_img']['label'] = '';
  $handler->display->display_options['fields']['goal_img']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['goal_img']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['goal_img']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
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
  /* Field: Goal: Point Required	 */
  $handler->display->display_options['fields']['field_goals_point_requiered']['id'] = 'field_goals_point_requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['table'] = 'field_data_field_goals_point_requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['field'] = 'field_goals_point_requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['label'] = 'Points Requiered';
  $handler->display->display_options['fields']['field_goals_point_requiered']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
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
  /* Field: Goal: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'goals';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Sort criterion: Goal: Level (field_level) */
  $handler->display->display_options['sorts']['field_level_value']['id'] = 'field_level_value';
  $handler->display->display_options['sorts']['field_level_value']['table'] = 'field_data_field_level';
  $handler->display->display_options['sorts']['field_level_value']['field'] = 'field_level_value';
  /* Filter criterion: Goal: Goal Category (field_goal_category) */
  $handler->display->display_options['filters']['field_goal_category_tid']['id'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['table'] = 'field_data_field_goal_category';
  $handler->display->display_options['filters']['field_goal_category_tid']['field'] = 'field_goal_category_tid';
  $handler->display->display_options['filters']['field_goal_category_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_goal_category_tid']['value'] = array(
    628 => '628',
  );
  $handler->display->display_options['filters']['field_goal_category_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_goal_category_tid']['vocabulary'] = 'goal_category';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['user_level_block'] = $view;

  return $export;
}
