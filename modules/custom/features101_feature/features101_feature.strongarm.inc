<?php
/**
 * @file
 * features101_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features101_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_image';
  $strongarm->value = 0;
  $export['comment_anonymous_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_image';
  $strongarm->value = 1;
  $export['comment_default_mode_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_image';
  $strongarm->value = '50';
  $export['comment_default_per_page_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_image';
  $strongarm->value = 1;
  $export['comment_form_location_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_image';
  $strongarm->value = '2';
  $export['comment_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_image';
  $strongarm->value = '1';
  $export['comment_preview_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_image';
  $strongarm->value = 1;
  $export['comment_subject_field_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_image';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_image';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_image';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_image';
  $strongarm->value = '1';
  $export['node_preview_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_image';
  $strongarm->value = 1;
  $export['node_submitted_image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'marinelli';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_marinelli_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'breadcrumb_title' => '1',
    'breadcrumb_title_length' => '50',
    'layout_width' => '1',
    'layout_type' => '1',
    'blocks' => '2',
    'menu_type' => '1',
    'menu_element' => 'main-menu',
    'menu_alt_class' => array(
      0 => '0',
    ),
    'outside_tags' => '0',
    'title_tags' => '0',
    'menu_headings' => '1',
    'sticky_text' => 'Sticky',
    'bartext' => 'Slide Down',
    'bartext2' => 'Slide Up',
    'css' => '1',
    'css_typo' => '1',
    'banner_usage' => '0',
    'banner_effect' => 'fade',
    'banner_speed' => '1000',
    'banner_delay' => '4000',
    'banner_pause' => '1',
    'banner_showtext' => '1',
    'banner_shownavigation' => '1',
    'images' => array(
      0 => array(
        'image' => array(
          'image_path' => 'public://banner/2.jpg',
          'image_thumb' => 'public://banner/thumb/2.jpg',
          'image_title' => 'Title for image 2',
          'image_description' => 'Description for image 2',
          'image_url' => '<front>',
          'image_visibility' => '*',
          'image_weight' => '0',
          'image_published' => 1,
          'image_delete' => 0,
        ),
      ),
      1 => array(
        'image' => array(
          'image_path' => 'public://banner/1.jpg',
          'image_thumb' => 'public://banner/thumb/1.jpg',
          'image_title' => 'Title for image 1',
          'image_description' => 'Description for image 1',
          'image_url' => '<front>',
          'image_visibility' => '*',
          'image_weight' => '0',
          'image_published' => 1,
          'image_delete' => 0,
        ),
      ),
      2 => array(
        'image' => array(
          'image_path' => 'public://banner/3.jpg',
          'image_thumb' => 'public://banner/thumb/3.jpg',
          'image_title' => 'Title for image 3',
          'image_description' => 'Description for image 3',
          'image_url' => '<front>',
          'image_visibility' => '*',
          'image_weight' => '0',
          'image_published' => 1,
          'image_delete' => 0,
        ),
      ),
      3 => array(
        'image' => array(
          'image_path' => 'public://banner/4.jpg',
          'image_thumb' => 'public://banner/thumb/4.jpg',
          'image_title' => 'Title for image 4',
          'image_description' => 'Description for image 4',
          'image_url' => '<front>',
          'image_visibility' => '*',
          'image_weight' => '0',
          'image_published' => 1,
          'image_delete' => 0,
        ),
      ),
      4 => array(
        'image' => array(
          'image_path' => 'public://banner/6.jpg',
          'image_thumb' => 'public://banner/thumb/6.jpg',
          'image_title' => 'Title for image 6',
          'image_description' => 'Description for image 6',
          'image_url' => '<front>',
          'image_visibility' => '*',
          'image_weight' => '0',
          'image_published' => 1,
          'image_delete' => 0,
        ),
      ),
      5 => array(
        'image' => array(
          'image_path' => 'public://banner/5.jpg',
          'image_thumb' => 'public://banner/thumb/5.jpg',
          'image_title' => 'Title for image 5',
          'image_description' => 'Description for image 5',
          'image_url' => '<front>',
          'image_visibility' => '*',
          'image_weight' => '0',
          'image_published' => 1,
          'image_delete' => 0,
        ),
      ),
      'images__active_tab' => 'edit-images-0',
    ),
    'image_upload' => '',
  );
  $export['theme_marinelli_settings'] = $strongarm;

  return $export;
}
