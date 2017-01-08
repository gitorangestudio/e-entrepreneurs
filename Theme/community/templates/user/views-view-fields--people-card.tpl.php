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


if(isset($fields['uid'])){
    $alias = drupal_get_path_alias('user/'.$fields['uid']->raw);
}else{
    $alias = '#';
}

?>



<div class="row dashboard-user-card">
    
    <a href="<?php print $alias; ?>">
    
    <div class="col-md-5 dashboard-user-card-left">
        <div class="dashboard-user-card-pic">
            <?php print render($fields['picture']->content); ?>
        </div>
        <div class="dashboard-user-card-name">
            <?php print render($fields['realname']->content); ?>
        </div>        
    </div>

    <div class="col-md-7 dashboard-user-card-right">
        <div class="dashboard-user-card-roles">
            <?php print render($fields['rid']->content); ?>
        </div>        
        <div class="dashboard-user-card-birthdate">
            <?php print render($fields['field_birthdate']->content); ?>
        </div>
        <div class="dashboard-user-card-gender">
            <?php print render($fields['field_gender']->content); ?>
        </div>     
        <div class="dashboard-user-card-country">
            <?php print render($fields['field_address_country']->content); ?>
        </div>          
        <div class="dashboard-user-card-skills">
            <?php print render($fields['field_skills']->content); ?>
        </div>          
    </div>
        
    </a>
    
</div>
