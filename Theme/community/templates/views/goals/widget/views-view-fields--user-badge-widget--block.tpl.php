
 <?php if (!empty($fields['title'])): ?>
   <?php print $fields['title']->wrapper_prefix; ?>
    <?php print t($fields['title']->content); ?>
   <?php print $fields['title']->wrapper_suffix; ?>
 <?php endif; ?>  

  <?php if (!empty($fields['goal_img'])): ?>
   <?php print $fields['goal_img']->wrapper_prefix; ?>
    <?php print $fields['goal_img']->content; ?>
   <?php print $fields['goal_img']->wrapper_suffix; ?>
 <?php endif; ?>  

  <?php if (!empty($fields['points'])): ?>
   <?php print $fields['points']->wrapper_prefix; ?>
    <?php print $fields['points']->content; ?> Points
   <?php print $fields['points']->wrapper_suffix; ?> 
 <?php endif; ?>  



<?php 
if (strpos(arg(2), 'user') !== false) {
  $uid = str_replace('user:', '', arg(2));
  $next_level_points = goals_get_next_level($uid);
}
elseif(arg(0) == 'user' && is_numeric(arg(1))){
  $uid = arg(1); 
  $next_level_points = goals_get_next_level($uid);  
}else{
  global $user;
  $uid = $user->uid;
  // $challengs = $_SESSION['goals'];
  // $next_level_points = $challengs['next_level']['points'];
  $next_level_points = goals_get_next_level($uid);
}



$cuurent_points = $fields['points']->raw;

if(!$next_level_points) {
  $last_level = true;
}
else {
  $last_level = false;
  $next_level_points = $next_level_points['points'];
  $points_left = $next_level_points - $cuurent_points;
}


?>

<div class="next-level">
  <?php 
    if(!$last_level) {
      print t('You need') . ' ' . $points_left . ' ' . t('points to get to the next level');
    }else {
      print t('You are now at the last level');
    }
  ?>
</div>