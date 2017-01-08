<?php
/**
 * @file
 * community_common.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function community_common_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function community_common_image_default_styles() {
  $styles = array();

  // Exported image style: 150-150.
  $styles['150-150'] = array(
    'label' => '150-150',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 150,
          'height' => 150,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_image_inside_node.
  $styles['banner_image_inside_node'] = array(
    'label' => 'Banner image inside node',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_picture_large.
  $styles['banner_picture_large'] = array(
    'label' => 'Banner Picture Large',
    'effects' => array(
      13 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 600,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_picture_medium_landscape.
  $styles['banner_picture_medium_landscape'] = array(
    'label' => 'Banner Picture Medium Landscape',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 438,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_picture_medium_portrait.
  $styles['banner_picture_medium_portrait'] = array(
    'label' => 'Banner Picture Medium portrait',
    'effects' => array(
      15 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 328,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_picture_small.
  $styles['banner_picture_small'] = array(
    'label' => 'Banner Picture Small',
    'effects' => array(
      16 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 650,
          'height' => 277,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: banner_picture_xsmall.
  $styles['banner_picture_xsmall'] = array(
    'label' => 'Banner Picture xSmall',
    'effects' => array(
      17 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 400,
          'height' => 170,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: goal_image.
  $styles['goal_image'] = array(
    'label' => 'goal_image',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 30,
          'height' => 30,
          'upscale' => TRUE,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: node_full_content_larg.
  $styles['node_full_content_larg'] = array(
    'label' => 'Node Full Content Larg',
    'effects' => array(
      9 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_full_content_medium.
  $styles['node_full_content_medium'] = array(
    'label' => 'Node Full Content Medium',
    'effects' => array(
      10 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 600,
          'height' => 338,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_full_content_small.
  $styles['node_full_content_small'] = array(
    'label' => 'Node Full Content Small',
    'effects' => array(
      11 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 253,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: node_full_content_xsmall.
  $styles['node_full_content_xsmall'] = array(
    'label' => 'Node Full Content xSmall',
    'effects' => array(
      12 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 380,
          'height' => 214,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_cover.
  $styles['profile_cover'] = array(
    'label' => 'Profile Cover',
    'effects' => array(
      18 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 1140,
          'height' => 350,
          'keepproportions' => 1,
          'reuse_crop_style' => '',
          'style_name' => 'profile_cover',
        ),
        'weight' => 0,
      ),
      23 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1140,
          'height' => 350,
          'upscale' => 1,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: profile_cover_medium.
  $styles['profile_cover_medium'] = array(
    'label' => 'Profile Cover Medium',
    'effects' => array(
      25 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 800,
          'height' => 246,
          'keepproportions' => 1,
          'reuse_crop_style' => 'profile_cover',
          'style_name' => 'profile_cover_medium',
        ),
        'weight' => 0,
      ),
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 800,
          'height' => 246,
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: profile_cover_small.
  $styles['profile_cover_small'] = array(
    'label' => 'Profile Cover Small',
    'effects' => array(
      19 => array(
        'name' => 'manualcrop_crop',
        'data' => array(
          'width' => 600,
          'height' => 200,
          'keepproportions' => 0,
          'reuse_crop_style' => 'profile_cover',
          'style_name' => 'profile_cover_small',
        ),
        'weight' => 0,
      ),
      22 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 200,
          'upscale' => 1,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: project_full_content.
  $styles['project_full_content'] = array(
    'label' => 'Project Full Content',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 800,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_in_dashboard.
  $styles['project_in_dashboard'] = array(
    'label' => 'Project in Dashboard',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 425,
          'height' => 190,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: resources_main_media.
  $styles['resources_main_media'] = array(
    'label' => 'Resources main media',
    'effects' => array(
      26 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 300,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: section_image.
  $styles['section_image'] = array(
    'label' => 'Section image',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 338,
          'height' => 250,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: user_picture.
  $styles['user_picture'] = array(
    'label' => 'User Picture',
    'effects' => array(
      6 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
