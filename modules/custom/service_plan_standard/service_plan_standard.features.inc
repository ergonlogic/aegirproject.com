<?php
/**
 * @file
 * service_plan_standard.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_plan_standard_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
