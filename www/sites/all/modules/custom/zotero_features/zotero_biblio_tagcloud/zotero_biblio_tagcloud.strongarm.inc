<?php
/**
 * @file
 * zotero_biblio_tagcloud.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function zotero_biblio_tagcloud_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'tagclouds_block_tags_2';
  $strongarm->value = '12';
  $export['tagclouds_block_tags_2'] = $strongarm;

  return $export;
}
