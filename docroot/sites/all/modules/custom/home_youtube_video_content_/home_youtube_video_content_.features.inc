<?php
/**
 * @file
 * home_youtube_video_content_.features.inc
 */

/**
 * Implements hook_views_api().
 */
function home_youtube_video_content__views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function home_youtube_video_content__node_info() {
  $items = array(
    'home_youtube_video' => array(
      'name' => t('Home Youtube Video'),
      'base' => 'node_content',
      'description' => t('This video\'ll show on home page '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
