<?php
/**
 * @file
 * depdescription.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function depdescription_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function depdescription_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function depdescription_node_info() {
  $items = array(
    '_department' => array(
      'name' => t('部门'),
      'base' => 'node_content',
      'description' => t('介绍部门'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
