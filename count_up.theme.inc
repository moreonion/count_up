<?php

/**
 * Prepares variables for count_up templates.
 */
function template_process_count_up(&$variables) {
  $variables['children'] = [];
  foreach (element_children($variables['element']) as $key) {
    $variables['children'][$key] = $variables['element'][$key];
  }

  // This is intentionally not done in #attached so that theme preprocess
  // functions can override the variables.
  $element = $variables['element'];
  $settings['count_up'][$element['#id']] = [
    'increment' => (int) $element['#increment'],
    'interval' => (int) $element['#interval'],
    'initial_time' => (int) $element['#initial_time'],
    'initial_value' => (int) $element['#initial_value'],
    'update_interval_ms' => (int) $element['#update_interval'],
    'odometer_settings' => $element['#odometer_settings'],
  ];
  drupal_add_js($settings, ['type' => 'setting']);
}
