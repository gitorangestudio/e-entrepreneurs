<?php

/**
 * @file
 * Default simple view template to display a list of rows.
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


//dsm($completed_goals);
// $result = goals_award_task(33,$uid);


?>

<?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
<?php endforeach; ?>