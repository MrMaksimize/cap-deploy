<?php
/**
 * @file
 * zotero_partner_sites.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zotero_partner_sites_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function zotero_partner_sites_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function zotero_partner_sites_node_info() {
  $items = array(
    'partner_site' => array(
      'name' => t('Partner Site'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
