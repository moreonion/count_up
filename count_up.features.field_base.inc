<?php

/**
 * @file
 * count_up.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function count_up_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_count_up'.
  $field_bases['field_count_up'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_count_up',
    'indexes' => array(
      'revision_id' => array(
        0 => 'revision_id',
      ),
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'field_collection',
    'settings' => array(
      'hide_blank_items' => 1,
      'hide_initial_item' => 0,
      'path' => '',
    ),
    'translatable' => 0,
    'type' => 'field_collection',
  );

  return $field_bases;
}
