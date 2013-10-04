<?php
/**
 * @file
 * zotero_general_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function zotero_general_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access all views.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: access navbar.
  $permissions['access navbar'] = array(
    'name' => 'access navbar',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'navbar',
  );

  // Exported permission: access rules debug.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: add media from remote sources.
  $permissions['add media from remote sources'] = array(
    'name' => 'add media from remote sources',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'media_internet',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer advanced pane settings.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer apps.
  $permissions['administer apps'] = array(
    'name' => 'administer apps',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'apps',
  );

  // Exported permission: administer blocks.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer default config.
  $permissions['administer default config'] = array(
    'name' => 'administer default config',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'defaultconfig',
  );

  // Exported permission: administer entityform types.
  $permissions['administer entityform types'] = array(
    'name' => 'administer entityform types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: administer facets.
  $permissions['administer facets'] = array(
    'name' => 'administer facets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'facetapi',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer feeds.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: administer fieldable panels panes.
  $permissions['administer fieldable panels panes'] = array(
    'name' => 'administer fieldable panels panes',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: administer fieldgroups.
  $permissions['administer fieldgroups'] = array(
    'name' => 'administer fieldgroups',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_group',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer filters.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: administer image styles.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: administer linkit.
  $permissions['administer linkit'] = array(
    'name' => 'administer linkit',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'linkit',
  );

  // Exported permission: administer media browser.
  $permissions['administer media browser'] = array(
    'name' => 'administer media browser',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: administer menu.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'menu',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: administer page manager.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: administer pane access.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panelizer.
  $permissions['administer panelizer'] = array(
    'name' => 'administer panelizer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page breadcrumbs.
  $permissions['administer panelizer node panopoly_page breadcrumbs'] = array(
    'name' => 'administer panelizer node panopoly_page breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page content.
  $permissions['administer panelizer node panopoly_page content'] = array(
    'name' => 'administer panelizer node panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page context.
  $permissions['administer panelizer node panopoly_page context'] = array(
    'name' => 'administer panelizer node panopoly_page context',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page defaults.
  $permissions['administer panelizer node panopoly_page defaults'] = array(
    'name' => 'administer panelizer node panopoly_page defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page layout.
  $permissions['administer panelizer node panopoly_page layout'] = array(
    'name' => 'administer panelizer node panopoly_page layout',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page overview.
  $permissions['administer panelizer node panopoly_page overview'] = array(
    'name' => 'administer panelizer node panopoly_page overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer node panopoly_page settings.
  $permissions['administer panelizer node panopoly_page settings'] = array(
    'name' => 'administer panelizer node panopoly_page settings',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories breadcrumbs.
  $permissions['administer panelizer taxonomy_term panopoly_categories breadcrumbs'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories content.
  $permissions['administer panelizer taxonomy_term panopoly_categories content'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories content',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories context.
  $permissions['administer panelizer taxonomy_term panopoly_categories context'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories context',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories defaults.
  $permissions['administer panelizer taxonomy_term panopoly_categories defaults'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories layout.
  $permissions['administer panelizer taxonomy_term panopoly_categories layout'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories layout',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories overview.
  $permissions['administer panelizer taxonomy_term panopoly_categories overview'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer taxonomy_term panopoly_categories settings.
  $permissions['administer panelizer taxonomy_term panopoly_categories settings'] = array(
    'name' => 'administer panelizer taxonomy_term panopoly_categories settings',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user breadcrumbs.
  $permissions['administer panelizer user user breadcrumbs'] = array(
    'name' => 'administer panelizer user user breadcrumbs',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user content.
  $permissions['administer panelizer user user content'] = array(
    'name' => 'administer panelizer user user content',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user context.
  $permissions['administer panelizer user user context'] = array(
    'name' => 'administer panelizer user user context',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user defaults.
  $permissions['administer panelizer user user defaults'] = array(
    'name' => 'administer panelizer user user defaults',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user layout.
  $permissions['administer panelizer user user layout'] = array(
    'name' => 'administer panelizer user user layout',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user overview.
  $permissions['administer panelizer user user overview'] = array(
    'name' => 'administer panelizer user user overview',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panelizer user user settings.
  $permissions['administer panelizer user user settings'] = array(
    'name' => 'administer panelizer user user settings',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panelizer',
  );

  // Exported permission: administer panels layouts.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer panels styles.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer redirects.
  $permissions['administer redirects'] = array(
    'name' => 'administer redirects',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'redirect',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: administer search.
  $permissions['administer search'] = array(
    'name' => 'administer search',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'search',
  );

  // Exported permission: administer search_api.
  $permissions['administer search_api'] = array(
    'name' => 'administer search_api',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'search_api',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'user',
  );

  // Exported permission: administer uuid.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: block IP addresses.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  // Exported permission: bypass file access.
  $permissions['bypass file access'] = array(
    'name' => 'bypass file access',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: change layouts in place editing.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create fieldable basic_file.
  $permissions['create fieldable basic_file'] = array(
    'name' => 'create fieldable basic_file',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable fieldable_panels_pane.
  $permissions['create fieldable fieldable_panels_pane'] = array(
    'name' => 'create fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable image.
  $permissions['create fieldable image'] = array(
    'name' => 'create fieldable image',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable map.
  $permissions['create fieldable map'] = array(
    'name' => 'create fieldable map',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable quick_links.
  $permissions['create fieldable quick_links'] = array(
    'name' => 'create fieldable quick_links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable spotlight.
  $permissions['create fieldable spotlight'] = array(
    'name' => 'create fieldable spotlight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable table.
  $permissions['create fieldable table'] = array(
    'name' => 'create fieldable table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable text.
  $permissions['create fieldable text'] = array(
    'name' => 'create fieldable text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create fieldable video.
  $permissions['create fieldable video'] = array(
    'name' => 'create fieldable video',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: create files.
  $permissions['create files'] = array(
    'name' => 'create files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: create panopoly_page content.
  $permissions['create panopoly_page content'] = array(
    'name' => 'create panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any entityform.
  $permissions['delete any entityform'] = array(
    'name' => 'delete any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete any panopoly_page content.
  $permissions['delete any panopoly_page content'] = array(
    'name' => 'delete any panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete fieldable basic_file.
  $permissions['delete fieldable basic_file'] = array(
    'name' => 'delete fieldable basic_file',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable fieldable_panels_pane.
  $permissions['delete fieldable fieldable_panels_pane'] = array(
    'name' => 'delete fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable image.
  $permissions['delete fieldable image'] = array(
    'name' => 'delete fieldable image',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable map.
  $permissions['delete fieldable map'] = array(
    'name' => 'delete fieldable map',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable quick_links.
  $permissions['delete fieldable quick_links'] = array(
    'name' => 'delete fieldable quick_links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable spotlight.
  $permissions['delete fieldable spotlight'] = array(
    'name' => 'delete fieldable spotlight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable table.
  $permissions['delete fieldable table'] = array(
    'name' => 'delete fieldable table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable text.
  $permissions['delete fieldable text'] = array(
    'name' => 'delete fieldable text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable video.
  $permissions['delete fieldable video'] = array(
    'name' => 'delete fieldable video',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete own entityform.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: delete own files.
  $permissions['delete own files'] = array(
    'name' => 'delete own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete own panopoly_page content.
  $permissions['delete own panopoly_page content'] = array(
    'name' => 'delete own panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: delete terms in 1.
  $permissions['delete terms in 1'] = array(
    'name' => 'delete terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: display drupal links.
  $permissions['display drupal links'] = array(
    'name' => 'display drupal links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: download any files.
  $permissions['download any files'] = array(
    'name' => 'download any files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: download own files.
  $permissions['download own files'] = array(
    'name' => 'download own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any entityform.
  $permissions['edit any entityform'] = array(
    'name' => 'edit any entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit any panopoly_page content.
  $permissions['edit any panopoly_page content'] = array(
    'name' => 'edit any panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit fieldable basic_file.
  $permissions['edit fieldable basic_file'] = array(
    'name' => 'edit fieldable basic_file',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable fieldable_panels_pane.
  $permissions['edit fieldable fieldable_panels_pane'] = array(
    'name' => 'edit fieldable fieldable_panels_pane',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable image.
  $permissions['edit fieldable image'] = array(
    'name' => 'edit fieldable image',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable map.
  $permissions['edit fieldable map'] = array(
    'name' => 'edit fieldable map',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable quick_links.
  $permissions['edit fieldable quick_links'] = array(
    'name' => 'edit fieldable quick_links',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable spotlight.
  $permissions['edit fieldable spotlight'] = array(
    'name' => 'edit fieldable spotlight',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable table.
  $permissions['edit fieldable table'] = array(
    'name' => 'edit fieldable table',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable text.
  $permissions['edit fieldable text'] = array(
    'name' => 'edit fieldable text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable video.
  $permissions['edit fieldable video'] = array(
    'name' => 'edit fieldable video',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit node machine name.
  $permissions['edit node machine name'] = array(
    'name' => 'edit node machine name',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'defaultcontent',
  );

  // Exported permission: edit own entityform.
  $permissions['edit own entityform'] = array(
    'name' => 'edit own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit own panopoly_page content.
  $permissions['edit own panopoly_page content'] = array(
    'name' => 'edit own panopoly_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit terms in 1.
  $permissions['edit terms in 1'] = array(
    'name' => 'edit terms in 1',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: export tablefield.
  $permissions['export tablefield'] = array(
    'name' => 'export tablefield',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'tablefield',
  );

  // Exported permission: field hidden administer.
  $permissions['field hidden administer'] = array(
    'name' => 'field hidden administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_hidden',
  );

  // Exported permission: flush caches.
  $permissions['flush caches'] = array(
    'name' => 'flush caches',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: notify of path changes.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: save draft.
  $permissions['save draft'] = array(
    'name' => 'save draft',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'save_draft',
  );

  // Exported permission: search content.
  $permissions['search content'] = array(
    'name' => 'search content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: use advanced search.
  $permissions['use advanced search'] = array(
    'name' => 'use advanced search',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'search',
  );

  // Exported permission: use page manager.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: use panels caching features.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels dashboard.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels in place editing.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'panels',
  );

  // Exported permission: use panels locks.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: use text format panopoly_html_text.
  $permissions['use text format panopoly_html_text'] = array(
    'name' => 'use text format panopoly_html_text',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format panopoly_wysiwyg_text.
  $permissions['use text format panopoly_wysiwyg_text'] = array(
    'name' => 'use text format panopoly_wysiwyg_text',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'filter',
  );

  // Exported permission: view any entityform.
  $permissions['view any entityform'] = array(
    'name' => 'view any entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own entityform.
  $permissions['view own entityform'] = array(
    'name' => 'view own entityform',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'site admin' => 'site admin',
    ),
    'module' => 'entityform',
  );

  // Exported permission: view own files.
  $permissions['view own files'] = array(
    'name' => 'view own files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own private files.
  $permissions['view own private files'] = array(
    'name' => 'view own private files',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: view pane admin links.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: view private files.
  $permissions['view private files'] = array(
    'name' => 'view private files',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
      'site admin' => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
      'site admin' => 'site admin',
    ),
    'module' => 'system',
  );

  return $permissions;
}
