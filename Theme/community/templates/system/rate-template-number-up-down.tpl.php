<?php

/**
 * @file
 * Rate widget theme
 */

?>

<?php
  /*
  <div class="rate-label">
    <?php print $display_options['title']; ?>
  </div>
  */
?>


<?php

$widgets = variable_get(RATE_VAR_WIDGETS, array());
$widget = $widgets['1'];
_rate_check_widget($widget);
$entities = entity_load($content_type, array($content_id));
$node = $entities[$content_id];
$permission_status = _rate_check_permissions($widget, $node);

?>
    
<?php if($permission_status == 1): ?>
<span class="rate-link rate-up"><?php print $up_button; ?></span>
<?php else:?>
<span class="rate-link rate-ups"><a></a></span>
<?php endif;?>

<div class="rate-number-up-down-rating <?php print $score_class ?>"><?php print $score; ?></div>

<?php if($permission_status == 1): ?>
<span class="rate-link rate-down"><?php print $down_button; ?></span>
<?php else:?>
<span class="rate-link rate-downs"><a></a></span>
<?php endif;?>

<?php

if ($info) {
  //print '<div class="rate-info">' . $info . '</div>';
}

if ($display_options['description']) {
  //print '<div class="rate-description">' . $display_options['description'] . '</div>';
}
