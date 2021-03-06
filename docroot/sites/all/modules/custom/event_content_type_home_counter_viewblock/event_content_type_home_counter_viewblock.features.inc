<?php
/**
 * @file
 * event_content_type_home_counter_viewblock.features.inc
 */

/**
 * Implements hook_views_api().
 */
function event_content_type_home_counter_viewblock_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function event_content_type_home_counter_viewblock_image_default_styles() {
  $styles = array();

  // Exported image style: home_event_counter_flag_image.
  $styles['home_event_counter_flag_image'] = array(
    'label' => 'Home Event Counter Flag Image',
    'effects' => array(
      2 => array(
        'name' => 'image_resize',
        'data' => array(
          'width' => 20,
          'height' => 20,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function event_content_type_home_counter_viewblock_node_info() {
  $items = array(
    'events' => array(
      'name' => t('Events'),
      'base' => 'node_content',
      'description' => t('All upcoming Events'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
