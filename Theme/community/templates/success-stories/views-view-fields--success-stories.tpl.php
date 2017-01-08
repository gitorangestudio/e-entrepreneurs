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
$name = $row->node_title;

$description = '';
if(isset($row->field_body[0]) && isset($row->field_body[0]['raw'])){
    $body = $row->field_body[0]['raw']['safe_value'];
    $description = strip_tags($body);
    $description = substr($description,0,250).'...';
}

$position = '';
if(isset($row->field_field_name[0]) && isset($row->field_field_name[0]['raw'])){
    $body = $row->field_field_name[0]['raw']['value'];
    $position = strip_tags($body);
}

$url = drupal_get_path_alias('node/'.$row->nid);

?>


 <div class="items">
     <a class="ss-link" href="<?php print $url; ?>">
        <div class="name" style="font-weight: bold;"><?php print $position; ?></div>     
        <div class="text"><?php print $description; ?></div>
        <div class="name"><?php print $name; ?></div>
     </a>
 </div>