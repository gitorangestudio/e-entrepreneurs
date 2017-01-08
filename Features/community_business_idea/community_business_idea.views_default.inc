<?php
/**
 * @file
 * community_business_idea.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function community_business_idea_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_projects';
  $view->description = '';
  $view->tag = 'Business Idea';
  $view->base_table = 'node';
  $view->human_name = 'All Business Ideas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Business Ideas';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'field_application_status_tid' => array(
      'bef_format' => 'bef_links',
      'more_options' => array(
        'bef_select_all_none' => FALSE,
        'bef_collapsible' => 0,
        'is_secondary' => 0,
        'any_label' => 'All',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            1 => 'vocabulary',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class'] = '[nid]';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'name' => 'name',
    'field_application_status' => 'field_application_status',
    'accept_new_project' => 'accept_new_project',
    'decline_new_project' => 'accept_new_project',
    'need_more_info' => 'accept_new_project',
    'survey_request' => 'accept_new_project',
    'view' => 'view',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
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
    'field_application_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'accept_new_project' => array(
      'align' => '',
      'separator' => '    ',
      'empty_column' => 0,
    ),
    'decline_new_project' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'need_more_info' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'survey_request' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<script>
    jQuery(document).ready(function(){    

        jQuery(\'.view-all-projects table.views-table tbody tr\').each(function(i,item){
            
            var item_id = jQuery(item).attr(\'class\');
            jQuery(item).attr(\'project-id\',item_id);
            jQuery(item).removeClass(item_id);
            jQuery(item).find(\'select\').attr(\'project-id\',item_id);
            
            console.log(jQuery(this).find(\'a.accept-link\').length);
            if(jQuery(this).find(\'a.accept-link\').length){
                
            }else{
                jQuery(this).find(\'.views-field-view\').html(\' \');
            }
            
        });
        
        
        
        jQuery(\'select\').on(\'change\', function() {
            
            var project_id = jQuery(this).attr(\'project-id\'); 
            var class_id = this.value;
            var accept_link = jQuery(\'tr[project-id="\'+project_id+\'"]\').find(\'a.accept-link\');
            
            if( typeof( accept_link.attr(\'orginal-href\') ) == \'undefined\' ) {
                accept_link.attr(\'orginal-href\', accept_link.attr(\'href\'));
                accept_link_href = accept_link.attr(\'href\') + \'?class-id=\'+class_id;
                accept_link.attr(\'href\',accept_link_href);                
            }else{
                accept_link_href = accept_link.attr(\'orginal-href\') + \'?class-id=\'+class_id;
                accept_link.attr(\'href\',accept_link_href);   
            }
            

            
        });
        
        jQuery(\'a.accept-link\').click(function(){
        
            //console.log(jQuery(this).parent(\'tr\').find(\'.views-field-view select\').val());
            var selection = jQuery(this).closest(\'tr\').find(\'.views-field-view select\').val();
            if(selection != 0){
                
            }else{
                event.preventDefault();
                jQuery(this).closest(\'tr\').find(\'.views-field-view select\').addClass(\'select-empty\');
            }
        
        });
    });

</script>

<style>
    .select-empty {
        border-color: red;
        border-width: 2px;
    }
    .class-select {
        width: 190px;
    }
</style>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'users';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['relationship'] = 'uid';
  $handler->display->display_options['fields']['uid']['label'] = '';
  $handler->display->display_options['fields']['uid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['uid']['link_to_user'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['exclude'] = TRUE;
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$user = user_load($row->uid);
$groups = og_get_groups_by_user($user, \'node\');


foreach($groups as $group){
   $node = node_load($group);
   if($node->type == \'class\'){
      print l(\'class: \'.$node->field_class_id[\'und\'][0][\'value\'], \'node/\'.$node->nid);
      break;
   }
}

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'By';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[name] <br>
[php]';
  /* Field: Content: Business Idea Status */
  $handler->display->display_options['fields']['field_application_status']['id'] = 'field_application_status';
  $handler->display->display_options['fields']['field_application_status']['table'] = 'field_data_field_application_status';
  $handler->display->display_options['fields']['field_application_status']['field'] = 'field_application_status';
  $handler->display->display_options['fields']['field_application_status']['label'] = 'Idea Status';
  $handler->display->display_options['fields']['field_application_status']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_application_status']['settings'] = array(
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
  /* Field: Content: Accept New Project */
  $handler->display->display_options['fields']['accept_new_project']['id'] = 'accept_new_project';
  $handler->display->display_options['fields']['accept_new_project']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['accept_new_project']['field'] = 'accept_new_project';
  $handler->display->display_options['fields']['accept_new_project']['label'] = 'Actions';
  $handler->display->display_options['fields']['accept_new_project']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['accept_new_project']['alter']['text'] = '<span class="project-accept">[accept_new_project]</span>';
  $handler->display->display_options['fields']['accept_new_project']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['accept_new_project']['alter']['link_class'] = 'accept-link';
  $handler->display->display_options['fields']['accept_new_project']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: Decline New Project */
  $handler->display->display_options['fields']['decline_new_project']['id'] = 'decline_new_project';
  $handler->display->display_options['fields']['decline_new_project']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['decline_new_project']['field'] = 'decline_new_project';
  $handler->display->display_options['fields']['decline_new_project']['label'] = '';
  $handler->display->display_options['fields']['decline_new_project']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['decline_new_project']['alter']['text'] = '<span class="project-decline">[decline_new_project]</span>';
  $handler->display->display_options['fields']['decline_new_project']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['decline_new_project']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: Need More Info */
  $handler->display->display_options['fields']['need_more_info']['id'] = 'need_more_info';
  $handler->display->display_options['fields']['need_more_info']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['need_more_info']['field'] = 'need_more_info';
  $handler->display->display_options['fields']['need_more_info']['label'] = '';
  $handler->display->display_options['fields']['need_more_info']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['need_more_info']['alter']['text'] = '<span class="project-info">[need_more_info]</span>';
  $handler->display->display_options['fields']['need_more_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['need_more_info']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Content: Survey Request */
  $handler->display->display_options['fields']['survey_request']['id'] = 'survey_request';
  $handler->display->display_options['fields']['survey_request']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['survey_request']['field'] = 'survey_request';
  $handler->display->display_options['fields']['survey_request']['label'] = '';
  $handler->display->display_options['fields']['survey_request']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['survey_request']['alter']['text'] = '<span class="projectsurvey">[survey_request]</span>';
  $handler->display->display_options['fields']['survey_request']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['survey_request']['rules_link'] = array(
    'rules_link_parameters' => '',
    'rules_link_rewrite' => '',
  );
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Add to class';
  $handler->display->display_options['fields']['view']['view'] = 'open_classes';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Business Idea Status (field_application_status) */
  $handler->display->display_options['filters']['field_application_status_tid']['id'] = 'field_application_status_tid';
  $handler->display->display_options['filters']['field_application_status_tid']['table'] = 'field_data_field_application_status';
  $handler->display->display_options['filters']['field_application_status_tid']['field'] = 'field_application_status_tid';
  $handler->display->display_options['filters']['field_application_status_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_application_status_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_application_status_tid']['expose']['operator_id'] = 'field_application_status_tid_op';
  $handler->display->display_options['filters']['field_application_status_tid']['expose']['label'] = 'Business Idea Status';
  $handler->display->display_options['filters']['field_application_status_tid']['expose']['operator'] = 'field_application_status_tid_op';
  $handler->display->display_options['filters']['field_application_status_tid']['expose']['identifier'] = 'field_application_status_tid';
  $handler->display->display_options['filters']['field_application_status_tid']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['filters']['field_application_status_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_application_status_tid']['vocabulary'] = 'application_status';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'submitted-business-ideas';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Projects';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'user-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_projects'] = $view;

  return $export;
}
