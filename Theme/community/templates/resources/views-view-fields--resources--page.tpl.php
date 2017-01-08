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

$title = $row->node_title;

$image = '';
if(isset($row->field_field_main_media[0]) && isset($row->field_field_main_media[0]['raw'])){
    //$image_uri = $row->field_field_image[0]['raw']['uri'];
	$file = file_load($row->field_field_main_media[0]['raw']['fid']);
    $image_uri = file_view_file($file, 'resources_main_media');
    //$image = image_style_url('section_image',$image_uri);
}

if(isset($row->_field_data['nid']['entity']->field_resource_type['und'][0])){
	$tid = $row->_field_data['nid']['entity']->field_resource_type['und'][0]['tid'];
	$term = taxonomy_term_load($tid);

	if($term){

		$term_name = $term->name;

		$term_name = str_replace('&', '-', $term_name);
		$term_name = str_replace(' ', '-', $term_name);
	}else {
		$term_name = '';
	}
}else {
		$term_name = '';
}

$nid = $row->nid;
$path = 'node/' . $nid;
$node_url = drupal_get_path_alias($path);
?>


<div class="col-xs-12 col-sm-6 col-md-3 items <?php print $term_name; ?>" data-animation="fadeIn" data-animation-delay="1700">
	<a href="<?php print url($node_url); ?>" class="overlayzoom">
		<?php print drupal_render($image_uri); ?>
		<span class="zoom">
			<span>
				<i class="fa fa-link"></i>
				<h3 class="resource-title"><?php print $title; ?></h3>
				
			</span>
		</span>
	</a>
</div>
            