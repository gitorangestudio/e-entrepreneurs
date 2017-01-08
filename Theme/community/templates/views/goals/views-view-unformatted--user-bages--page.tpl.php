<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
if (strpos(arg(2), 'user') !== false) {
  $uid = str_replace('user:', '', arg(2));
}
elseif(arg(0) == 'user' && is_numeric(arg(1))){
  $uid = arg(1); 
}else{
  global $user;
  $uid = $user->uid;
}

?>

<?php foreach ($rows as $id => $row): ?>
    <?php print $row; ?>
<?php endforeach; ?>

<script type="text/javascript">
jQuery(document).ready(function () {  
    
    // Popup
    jQuery('.view-user-bages .views-row .row-content').on('click', function(){
      
      var goal_id = jQuery(this).parent().attr('goal-id');
      var url = window.location.protocol + "//" + window.location.host  + "/goal/"+ goal_id +"/tasks?user_id=<?php print $uid;?>" ;
      
      
      var ajax_request = jQuery.get( url, function(data) {
        
        console.log(url);


        
        }).done(function( data ) {
          var content = jQuery(data).find('.view-content');
          jQuery('#modalGoal .modal-body').html(content);
          jQuery("#modalGoal").modal();
        });


    });
});
</script>


