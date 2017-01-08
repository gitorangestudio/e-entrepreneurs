<?php

$description  = $row->node_title;
$uri = $row->field_field_image[0]['raw']['uri'];
$image_uri = $uri;
$image = file_create_url($image_uri);

if(isset($row->field_field_link[0])){
  $link_title = $row->field_field_link[0]['raw']['title'];
  $link_url = file_create_url($row->field_field_link[0]['raw']['url']);
}


$breakpoints = picture_get_mapping_breakpoints(picture_mapping_load('banner_pictures'));

$picture =  theme('picture',
           array(
              'style_name' => 'node_slider_desktop',
              'uri' => $uri,
              'breakpoints' => $breakpoints,
              'attributes' => array(
                  'data-bgfit' => 'cover',
                  'data-bgposition' => 'center center',
                  'data-bgrepeat' => 'no-repeat'
                )
           ));

?>


<li data-transition="curtain-1" data-slotamount="5" data-masterspeed="700">

    <img src="<?php print $image; ?>" data-bgfit="cover" data-bgposition="center center" data-bgrepeat="no-repeat">
    <div class="tp-caption large_text sft customout"
        data-x="center"
        data-y="300"
        data-customout="x:0;y:0;z:0;rotationX:0;rotationY:0;rotationZ:0;scaleX:0.75;scaleY:0.75;skewX:0;skewY:0;opacity:0;transformPerspective:600;transformOrigin:50% 50%;"
        data-speed="800"
        data-start="1800"
        data-easing="Power4.easeOut"
        data-endspeed="300"
        data-endeasing="Power1.easeIn"
        data-captionhidden="on"
        data-width = "90%"
        style="z-index: 6">
     
     <span class="tp-description"><?php print $description; ?></span>
     <?php if(isset($link_title)): ?>
       <div style="clear: both;text-align: center;">
           <a class="tp-button" href="<?php print $link_url; ?>"><?php print $link_title; ?></a>
       </div>
      <?php endif; ?>
  </div>




</li>

