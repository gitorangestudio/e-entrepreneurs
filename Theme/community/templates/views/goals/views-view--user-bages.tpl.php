<!-- <link href="//code.jquery.com/ui/1.11.4/themes/smoothness/jquery-ui.css"> -->
<!-- <script src="//code.jquery.com/ui/1.11.4/jquery-ui.js"></script> -->
<?php

/**
 * @file
 * Main view template.
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */

?>
  <div  class="dashboard-profile" style="margin-bottom: 10px;">
  <?php
if (strpos(arg(2), 'user') !== false) {
  $uid = str_replace('user:', '', arg(2));
}
elseif(arg(0) == 'user' && is_numeric(arg(1))){
  $uid = arg(1); 
}else{
  global $user;
  $uid = $user->uid;
}

    $content = views_embed_view('dashboard_panes', 'panel_pane_1', $uid);
    print $content;
  ?>
  </div>
<div class="<?php print $classes; ?> col-md-9 col-sm-12 col-xs-12">
<!-- <input class="date"></input> -->
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  


  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

 

</div>


<div id="user-level" class="col-md-3 col-xs-12">
  <div class="level-label"><?php print t('Current Level');?></div>
<?php
  $content = views_embed_view('user_level_block', 'block_1', array());
  print $content;
?>
</div>

 <!-- Modal -->
  <div class="modal fade" id="modalGoal" role="dialog">
    <div class="modal-dialog">
    
      <!-- Modal content-->
      <div class="modal-content">
        <div class="modal-header">
          <button type="button" class="close" data-dismiss="modal">&times;</button>
          <h4 class="modal-title"><?php print t('Achievement Details');?></h4>
        </div>
        <div class="modal-body">
          
        </div>
        <div class="modal-footer">
          <button type="button" class="btn btn-default" data-dismiss="modal"><?php print t('Close'); ?></button>
        </div>
      </div>
      
    </div>
  </div>
  
</div>

