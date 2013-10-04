<?php
/**
 * @file
 * zotero_biblio_tagcloud.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function zotero_biblio_tagcloud_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['tagclouds-2'] = array(
    'cache' => 8,
    'custom' => 0,
    'delta' => 2,
    'module' => 'tagclouds',
    'node_types' => array(
      0 => 'biblio',
    ),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'responsive_bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'responsive_bartik',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
