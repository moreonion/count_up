<?php

/**
 * @file
 * count_up.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function count_up_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
