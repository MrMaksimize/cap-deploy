<?php
/**
 * @file
 * zotero_feeds_importer.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function zotero_feeds_importer_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear zotero_feeds_importer feeds.
  $permissions['clear zotero_feeds_importer feeds'] = array(
    'name' => 'clear zotero_feeds_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create zotero_feed content.
  $permissions['create zotero_feed content'] = array(
    'name' => 'create zotero_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any zotero_feed content.
  $permissions['delete any zotero_feed content'] = array(
    'name' => 'delete any zotero_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own zotero_feed content.
  $permissions['delete own zotero_feed content'] = array(
    'name' => 'delete own zotero_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any zotero_feed content.
  $permissions['edit any zotero_feed content'] = array(
    'name' => 'edit any zotero_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own zotero_feed content.
  $permissions['edit own zotero_feed content'] = array(
    'name' => 'edit own zotero_feed content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: import zotero_feeds_importer feeds.
  $permissions['import zotero_feeds_importer feeds'] = array(
    'name' => 'import zotero_feeds_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock zotero_feeds_importer feeds.
  $permissions['unlock zotero_feeds_importer feeds'] = array(
    'name' => 'unlock zotero_feeds_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  return $permissions;
}
