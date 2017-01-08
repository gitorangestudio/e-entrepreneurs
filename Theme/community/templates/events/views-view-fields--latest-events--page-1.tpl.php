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

if(isset($row->field_field_image[0]['raw'])){
$title = $row->node_title;

$day = '';
$month = '';
if(isset($row->field_field_event_date[0]) && isset($row->field_field_event_date[0]['raw'])){
    $date = $row->field_field_event_date[0]['raw']['value'];
	$date = new DateTime($date);
	$month =  $date->format('M');
	$day = $date->format('j');
}


$image = '';
if(isset($row->field_field_image[0]) && isset($row->field_field_image[0]['raw'])){
    $image_uri = $row->field_field_image[0]['raw']['uri'];
    $image = image_style_url('section_image',$image_uri);
}


$nid = $row->nid;
$path = 'node/' . $nid;
$node_url = drupal_get_path_alias($path);
?>

   <div class="col-xs-12 col-sm-6 col-md-4 post" data-animation="fadeInUp" data-animation-delay="300">
    <a class="event-link" href="<?php print $node_url; ?>">
        <div class="event-container">
          <div class="picture"><img src="<?php print $image; ?>" class="img-responsive" alt=""></div>
            <div class="black-layer">
              <div class="date">
                 <?php print $day; ?>
                 <p><?php print $month; ?></p>
              </div>
                
                <div class="heading"><?php print $title; ?></div>
                <?php if(!empty($row->field_field_event_organizers)): ?>
                <!--
                <div class="orgniazers">
                    
                    <h4>Organizers</h4>
                    <?php
                        /*foreach($row->field_field_event_organizers as $item){
                            print '<span class="ogr-item">'. $item['raw']['entity']->name .'</span>';
                        }*/
                    ?>
                </div>
                -->
                <?php endif; ?>
            </div>
        </div>            
    </a>
   </div>
<?php 
}
?>