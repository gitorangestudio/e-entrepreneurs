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

<div class="dashboard-user-header ">

    <?php if(!empty($fields['field_cover_photo']->content)): ?>
        <?php print $fields['field_cover_photo']->wrapper_prefix; ?>
            <?php print $fields['field_cover_photo']->content; ?>
        <?php print $fields['field_cover_photo']->wrapper_suffix; ?>
    <?php endif;?>
    

    <div class="dashboard-user-info col-md-12 col-sm-6">

        
        <div class="col-md-3">
                    <?php if(!empty($fields['picture'])): ?>
                        <?php print $fields['picture']->wrapper_prefix; ?>
                            <?php print $fields['picture']->content; ?>
                        <?php print $fields['picture']->wrapper_suffix; ?>
                    <?php endif;?>
            <div class="dashboard-user-name ">
            
             <?php if(!empty($fields['field_private']) && $fields['field_private']->content == '1'): ?>
                <?php print $fields['field_private']->wrapper_prefix; ?>
                    <i class="fa fa-lock"></i>
                <?php print $fields['field_private']->wrapper_suffix; ?>
            <?php endif;?>            
            
            <?php if(!empty($fields['name'])): ?>
                <?php print $fields['name']->wrapper_prefix; ?>
                    <?php print $fields['name']->content; ?>
                <?php print $fields['name']->wrapper_suffix; ?>
            <?php endif;?>  
            <?php if(!empty($fields['view'])): ?>
                <?php print $fields['view']->wrapper_prefix; ?>
                    <?php print $fields['view']->label_html; ?>
                    <?php print $fields['view']->content; ?>
                <?php print $fields['view']->wrapper_suffix; ?>
                <?php endif;?>
            </div>
            
            
            <?php if((!empty($fields['field_linkedin_profile'])) || (!empty($fields['field_facebook'])) || (!empty($fields['field_twitter']))): ?>
            <div class="dashboard-user-social">
                <?php if(!empty($fields['field_linkedin_profile'])): ?>
                    <?php print $fields['field_linkedin_profile']->wrapper_prefix; ?>
                        <?php print $fields['field_linkedin_profile']->content; ?>
                    <?php print $fields['field_linkedin_profile']->wrapper_suffix; ?>
                <?php endif;?>     
                
                <?php if(!empty($fields['field_facebook'])): ?>
                    <?php print $fields['field_facebook']->wrapper_prefix; ?>
                        <?php print $fields['field_facebook']->content; ?>
                    <?php print $fields['field_facebook']->wrapper_suffix; ?>
                <?php endif;?>              


                <?php if(!empty($fields['field_twitter'])): ?>
                    <?php print $fields['field_twitter']->wrapper_prefix; ?>
                        <?php print $fields['field_twitter']->content; ?>
                    <?php print $fields['field_twitter']->wrapper_suffix; ?>
                <?php endif;?>                 
            </div>
            <?php endif;?>
        </div>


        <div class="user-widget col-md-offset-6 col-md-3">
            <?php
             $uid = arg(1);
              if($uid == 'me'){
                global $user;
                $uid = $user->uid;    
              }else{
                $username = arg(1);
                $user = user_load($username);
                //$uid = $user->uid;
                //dsm($user);
              }
              $content = views_embed_view('user_badge_widget', 'block', $uid);
              print $content;
            ?>
        </div>
        
    </div>

    
    
</div>