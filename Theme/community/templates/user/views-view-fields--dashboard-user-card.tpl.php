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



<div class="row dashboard-user-card">

    <div class="col-xs-5 dashboard-user-card-left">
        <div class="dashboard-user-card-pic">
            <?php print render($fields['picture']->content); ?>
        </div>
        <div class="dashboard-user-card-name">
            <?php print render($fields['name']->content); ?>
        </div>        
    </div>

    <div class="col-xs-7 dashboard-user-card-right">
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

</div>



<?php if(isset($fields['view']->content)): ?>
    <div class="dashboard-user-classs">
        <h2><?php print render($fields['view']->label); ?></h2>
        <?php print render($fields['view']->content); ?>
    </div>
<?php endif; ?>

<?php 
$username = strip_tags($fields['name']->content);
?>

<?php if(isset($fields['field_linkedin_profile']->content)): ?>
<div class="linkedin-profile">
    <script src="//platform.linkedin.com/in.js" type="text/javascript"></script>
    <script type="IN/MemberProfile" data-id="<?php print render($fields['field_linkedin_profile']->content); ?>" data-format="hover" data-text="<?php print $username; ?>"></script>
</div>
<?php endif; ?>

