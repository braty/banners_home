<?php
/**
 * @file
 * banners_home.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function banners_home_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function banners_home_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('banner grande'),
      'base' => 'node_content',
      'description' => t('banner home'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'banner_pequeno' => array(
      'name' => t('banner pequeno'),
      'base' => 'node_content',
      'description' => t('banner pequeno na home'),
      'has_title' => '1',
      'title_label' => t('banner pequeno'),
      'help' => '',
    ),
  );
  return $items;
}
