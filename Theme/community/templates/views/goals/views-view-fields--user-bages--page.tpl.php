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

$goal_progress = goals_get_goal_progress($fields['goal_id']->raw, $uid);

$complete_flag = false;
$complete_class = 'not-completed';
if(isset($completed_goals[$fields['goal_id']->raw])){
  $complete_flag = true;
  $complete_class = 'completed';
}


//dsm($fields);
?>

<div class="views-row col-md-4 col-sm-6 col-xs-12  cat-<?php print $fields['goal_id']->raw . ' ' . $complete_class; ?>" goal-completed="<?php print $complete_flag; ?>" goal-points='<?php print $fields["goal_userpoints"]->content; ?>' goal-id="<?php print $fields['goal_id']->raw; ?>" goal-category='<?php print $fields['goal_id']->raw; ?>' goal-date='<?php print $fields["created"]->content; ?>'>
  
  <div class="row-content">
  <div class="goal-header">
    <div class="goal-img col-md-3">
     <?php if (!empty($fields['goal_img'])): ?>
       <?php print $fields['goal_img']->wrapper_prefix; ?>

        <?php if(!$complete_flag): ?>
          <div class="goal-notcompleted">
        <?php endif; ?>    

          <?php print $fields['goal_img']->content; ?>

        <?php if(!$complete_flag): ?>
          </div>
        <?php endif; ?>          
       <?php print $fields['goal_img']->wrapper_suffix; ?>
     <?php endif; ?>
    </div>
    <div class="goal-main col-md-9">
     <?php if (!empty($fields['title'])): ?>
       <?php print $fields['title']->wrapper_prefix; ?>
        <?php print t($fields['title']->content); ?>
       <?php print $fields['title']->wrapper_suffix; ?>
     <?php endif; ?>

     <?php if (!empty($fields['goal_userpoints'])): ?>
       <?php print $fields['goal_userpoints']->wrapper_prefix; ?>
        <?php print $fields['goal_userpoints']->content; ?>
        <span class="goal-point-label"><?php print t('Points');?></span>
       <?php print $fields['goal_userpoints']->wrapper_suffix; ?>
     <?php endif; ?>  

     <?php //if (!empty($fields['field_goal_category'])): ?>
       <?php //print $fields['field_goal_category']->wrapper_prefix; ?>
        <!--<span class="goal-category-label"><?php //print t('النوع: ');?></span>-->
        <?php //print t($fields['field_goal_category']->content); ?>
       <?php //print $fields['field_goal_category']->wrapper_suffix; ?>
     <?php //endif; ?> 
      
    </div>
  </div>

  <div class="goal-progress col-md-12">
    <div class="pro-bar-container color-asbestos">
      <div class="pro-bar bar-<?php print $goal_progress; ?> color-peter-river" data-pro-bar-percent="<?php print $goal_progress; ?>" data-pro-bar-delay="100">
      </div>
      <span class="progress-text"><?php print $goal_progress ?> %</span>
    </div>

  </div>

  <div class="goal-body col-md-12">
     <?php if (!empty($fields['field_goal_description'])): ?>
       <?php print $fields['field_goal_description']->wrapper_prefix; ?>
        <?php print $fields['field_goal_description']->content; ?>
       <?php print $fields['field_goal_description']->wrapper_suffix; ?>
     <?php endif; ?>
  </div>

</div>
</div>  