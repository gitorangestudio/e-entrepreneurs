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

global $user;
$uid = $user->uid;

if(isset($fields['nid'])){
  $course_id = $fields['nid']->raw;
}
else {
  $course_id = (int)arg(1);
}

$lectures_cout = db_select("og_membership", "ogm");
  $lectures_cout->condition("ogm.gid", $course_id, "=");
  $lectures_cout->condition("ogm.entity_type", "node", "=");
  $lectures_cout->fields("ogm", array("etid"));
  $lectures_cout->join("node", "n", "n.nid = ogm.etid");
  $lectures_cout->condition("n.type", "h5p_content");
  $result = $lectures_cout->execute();
  $lectures_cout = $result->rowCount();

$completed_cout = db_select("og_membership", "ogm");
  $completed_cout->condition("ogm.gid", $course_id, "=");
  $completed_cout->condition("ogm.entity_type", "node", "=");
  $completed_cout->fields("ogm", array("etid"));
  $completed_cout->join("node", "n", "n.nid = ogm.etid");
  $completed_cout->condition("n.type", "h5p_content");
  $completed_cout->join("flagging", "f", "n.nid = f.entity_id");
  $completed_cout->condition("f.uid", $uid, "=");
  $result = $completed_cout->execute();
  $completed_cout = $result->rowCount();


?>

<?php if( $lectures_cout != 0): ?>
<?php
$percentage = $completed_cout / $lectures_cout * 100;
?>

You completed <?php print $completed_cout; ?> out of <?php print $lectures_cout; ?> lectures.
<div class="progress-bar1 blue stripes"> <span style="width: <?php print $percentage; ?>%"></span> </div>

<?php endif; ?>

