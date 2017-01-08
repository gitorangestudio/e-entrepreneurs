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

// if (strpos(arg(2), 'user') !== false) {
//   $uid = str_replace('user:', '', arg(2));
// }
// elseif(arg(0) == 'user' && is_numeric(arg(1))){
//   $uid = arg(1); 
// }else{
//   global $user;
//   $uid = $user->uid;
// }

if (strpos(arg(2), 'user') !== false) {
  $uid = str_replace('user:', '', arg(2));
  $completed_goals = goals_get_completed_goals_user($uid);
}
elseif(arg(0) == 'user' && is_numeric(arg(1))){
  $uid = arg(1); 
  $completed_goals = goals_get_completed_goals_user($uid);
}else{
  global $user;
  $uid = $user->uid;
  $completed_goals = goals_get_completed_goals_user($uid);
  //$challengs = $_SESSION['completed'];
}

$complete_flag = false;
$complete_class = 'not-completed';

if(in_array($fields['goal_id']->raw, $completed_goals) ){
  $complete_flag = true;
  $complete_class = 'completed';
}
 


$current_level = goals_get_current_level($uid);
if($current_level == $fields['goal_id']->raw){
  $current_flag = 'true';
}else {
  $current_flag = 'false';
}




$next_level = goals_get_next_level($uid);
// dsm($current_level);
// dsm($next_level);
// dsm($fields);
$next_id = $next_level['goal_id'];
$next_flag = false;
if($next_id == $fields['goal_id']->raw){
  $next_flag = true;
}
//dsm($next_level);
?>

<div class="views-row row-<?php print $fields['goal_id']->raw; ?> <?php print $complete_class; ?>" level-id="<?php print $fields['goal_id']->raw; ?>" level-complete="<?php print $complete_flag; ?>" level-current="<?php print $current_flag; ?>" next-level="<?php print $next_flag; ?>">
  
  
  <div class="level-header">
    <div class="level-image col-md-4 pull-right">
      <?php if (!empty($fields['goal_img'])): ?>
       <?php print $fields['goal_img']->wrapper_prefix; ?>
        <?php print $fields['goal_img']->content; ?>
       <?php print $fields['goal_img']->wrapper_suffix; ?>
     <?php endif; ?>   
    </div>
    <div class="level-info col-md-8">
     <?php if (!empty($fields['title'])): ?>
       <?php print $fields['title']->wrapper_prefix; ?>
        <?php print t($fields['title']->content); ?>
       <?php print $fields['title']->wrapper_suffix; ?>
     <?php endif; ?>  
      
     <?php if (!empty($fields['field_goals_point_requiered'])): ?>
       <?php print $fields['field_goals_point_requiered']->wrapper_prefix; ?>
        <span class="level-points-label"><?php print t('Points requiered: ');?></span>
        <?php print $fields['field_goals_point_requiered']->content; ?>
       <?php print $fields['field_goals_point_requiered']->wrapper_suffix; ?>
     <?php endif; ?>  
      
      <?php 

        if($next_flag):
          $user_points = userpoints_get_current_points($uid, 'all');
          //dsm($user_points);
          $goal_progress = $user_points / $next_level['points'] * 100;
          $goal_progress_c = floor($goal_progress);
          $goal_progress = number_format($goal_progress, 2, ',', ' ');

          //dsm($goal_progress);
      ?>
        <div class="level-progress">
          <div class="pro-bar-container color-asbestos">
            <div class="pro-bar bar-<?php print $goal_progress_c; ?> color-peter-river" data-pro-bar-percent="<?php print $goal_progress_c; ?>" data-pro-bar-delay="100">
            </div>
            <span class="progress-text"><?php print $goal_progress ?> %</span>
          </div>          
        </div>
      
      <?php endif; ?>
    </div>
  </div>

  
</div>