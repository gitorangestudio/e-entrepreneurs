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

if($row->nid){
$nid = $row->nid;
$vocabulary = taxonomy_get_tree(2,0,null,true);
$counter = 0;
$position = 0;
$terms_count = count($vocabulary);
foreach($vocabulary as $term){
    $counter++;
    
    if($fields['tid']->raw == $term->tid ){
        $position = $counter;
        
    }
}

if($position == 0){
    $position = 1;
}



$total = ((100 * $position) / $terms_count) / 100;

?>


<div id="circle-<?php print $nid;?>"></div>
<div id="total"><?php print $total * 100; ?>%</div>

<script>
    jQuery('#circle-<?php print $nid;?>').circleProgress({
        value: <?php print $total; ?>,
        size: 80,
        //startAngle: 90,
        //animation: { duration: 1200, easing: "circleProgressEase" },
        fill: {
            gradient: ["red", "orange"]
        }
    });
</script>
<?php
}else {
?>

<div id="circle-0"></div>
<div id="total">0%</div>

<script>
    jQuery('#circle-0').circleProgress({
        value: 0.0,
        size: 80,
        //startAngle: 90,
        //animation: { duration: 1200, easing: "circleProgressEase" },
        fill: {
            gradient: ["red", "orange"]
        }
    });
</script>
<?php 
}

?>