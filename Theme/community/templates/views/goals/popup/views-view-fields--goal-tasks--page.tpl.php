<?php 
$uid = $_GET['user_id'];
//dsm($fields);
//$task_id = $fields['task_bundle']->goals_tasks_goals_task_id;
$task_id = $fields['task_id']->raw;
//$task_id = $fields['task_id'];
$task_progress = goals_get_task_progress($task_id, $uid);

?>

<?php if(isset($fields['title_1']->content)): ?>
  <?php print t($fields['title_1']->content); ?>
  <?php// print_r($fields['task_id']); ?>
<?php endif; ?> 

<?php print $fields['nothing']->content; ?>

<div class="goal-progress col-md-12">
  <div class="pro-bar-container color-asbestos">
    <div class="pro-bar bar-<?php print $task_progress; ?> color-peter-river" data-pro-bar-percent="100" data-pro-bar-delay="100">
    </div>
    <span class="progress-text"><?php print $task_progress;  ?> %</span>
  </div>

</div>