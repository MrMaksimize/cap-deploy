<?php
/**
 * @file
 * zotero_partner_sites.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function zotero_partner_sites_user_default_permissions() {
  $permissions = array();

  // Exported permission: create partner_site content.
  $permissions['create partner_site content'] = array(
    'name' => 'create partner_site content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any partner_site content.
  $permissions['delete any partner_site content'] = array(
    'name' => 'delete any partner_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own partner_site content.
  $permissions['delete own partner_site content'] = array(
    'name' => 'delete own partner_site content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any partner_site content.
  $permissions['edit any partner_site content'] = array(
    'name' => 'edit any partner_site content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own partner_site content.
  $permissions['edit own partner_site content'] = array(
    'name' => 'edit own partner_site content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
