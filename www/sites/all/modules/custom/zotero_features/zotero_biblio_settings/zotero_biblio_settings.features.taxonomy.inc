<?php
/**
 * @file
 * zotero_biblio_settings.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function zotero_biblio_settings_taxonomy_default_vocabularies() {
  return array(
    'zotero_grade_vocabulary' => array(
      'name' => 'Grade',
      'machine_name' => 'zotero_grade_vocabulary',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'zotero_quarter_vocabulary' => array(
      'name' => 'Quarter',
      'machine_name' => 'zotero_quarter_vocabulary',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'zotero_tags' => array(
      'name' => 'Zotero Tags',
      'machine_name' => 'zotero_tags',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'zotero_theme_vocabulary' => array(
      'name' => 'Theme',
      'machine_name' => 'zotero_theme_vocabulary',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'zotero_unit_vocabulary' => array(
      'name' => 'Unit',
      'machine_name' => 'zotero_unit_vocabulary',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
