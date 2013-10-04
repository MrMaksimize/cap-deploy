<?php
/**
 * @file
 * zotero_feeds_importer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function zotero_feeds_importer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'edit_feeds_feedszoterofetcher_api_key';
  $strongarm->value = 'F4QV7TD6Pp5poSRAfobsPWDa';
  $export['edit_feeds_feedszoterofetcher_api_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'edit_feeds_feedszoterofetcher_limit';
  $strongarm->value = '99';
  $export['edit_feeds_feedszoterofetcher_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'edit_feeds_feedszoterofetcher_zotero_id';
  $strongarm->value = '1378123';
  $export['edit_feeds_feedszoterofetcher_zotero_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'edit_feeds_feedszoterofetcher_zotero_type';
  $strongarm->value = 1;
  $export['edit_feeds_feedszoterofetcher_zotero_type'] = $strongarm;

  return $export;
}
