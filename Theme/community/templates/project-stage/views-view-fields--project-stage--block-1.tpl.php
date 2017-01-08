<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>

<div id="project-stage2">

<?php

if(isset($row->field_field_project_stage[0]) && isset($row->field_field_project_stage[0]['raw'])){
    $current_stage_tid = $row->field_field_project_stage[0]['raw']['tid'];
    if($current_stage_tid){

        $current_stage = taxonomy_term_load($current_stage_tid);
        $current_stage_weight = $current_stage->field_weight['und'][0]['value'];

        $all_stages  = taxonomy_vocabulary_machine_name_load('project_steps');
        $all_stages = entity_load('taxonomy_term', FALSE, array('vid' => $all_stages->vid));

        $ready_stages = array();
        foreach($all_stages as $stage){
            $ready_stages[$stage->field_weight['und'][0]['value']] = $stage;
        }
        unset($all_stages);
        unset($current_stage);
        ksort($ready_stages);

        foreach($ready_stages as $stage){
            $tmp = $stage->field_weight['und'][0]['value'];
            //dsm($stage);
            if(isset($stage->field_link['und']) && isset($stage->field_link['und'][0])){
                $stage_link = url($stage->field_link['und'][0]['url']);
            }
            else{
                $stage_link = '#';
            }
            
            $link = '<a href="'. $stage_link .'">'. $stage->name .'</a>';
            
            if($tmp < $current_stage_weight){
                $class = "stage-row completed-stage";
            print '<div class="'.$class.'"><span class="pcircle">'. $tmp .'</span></i>'. $link .'</div>';

            }elseif($tmp > $current_stage_weight){

                $class = "stage-row undone-stage";
            print '<div class="'.$class.'"><span class="pcircle">'. $tmp .'</span></i>'. $link .'</div>';

            }else{

                $class = "stage-row current-stage";
                print '<div class="'.$class.'"><span class="pcircle">'. $tmp .'</span></i>'. $link .'</div>';

            }

        }
    }
}
?>

<span id="vertical-arrow"></span>
</div>
