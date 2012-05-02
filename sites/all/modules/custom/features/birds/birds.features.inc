<?php
/**
 * @file
 * birds.features.inc
 */

/**
 * Implements hook_node_info().
 */
function birds_node_info() {
  $items = array(
    'bird' => array(
      'name' => t('Bird'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
