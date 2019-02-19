<?php

/**
 * @file
 * count_up.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function count_up_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cck_blocks_count_up_block_availability';
  $strongarm->value = 2;
  $export['cck_blocks_count_up_block_availability'] = $strongarm;

  return $export;
}
