<?php
/**
 * @file
 * zotero_partner_sites.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function zotero_partner_sites_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'partner_sites';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Partner Sites';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Partner Sites';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_partner_site_description']['id'] = 'field_partner_site_description';
  $handler->display->display_options['fields']['field_partner_site_description']['table'] = 'field_data_field_partner_site_description';
  $handler->display->display_options['fields']['field_partner_site_description']['field'] = 'field_partner_site_description';
  $handler->display->display_options['fields']['field_partner_site_description']['label'] = '';
  $handler->display->display_options['fields']['field_partner_site_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_site_description']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_partner_site_description']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_partner_site_link']['id'] = 'field_partner_site_link';
  $handler->display->display_options['fields']['field_partner_site_link']['table'] = 'field_data_field_partner_site_link';
  $handler->display->display_options['fields']['field_partner_site_link']['field'] = 'field_partner_site_link';
  $handler->display->display_options['fields']['field_partner_site_link']['label'] = '';
  $handler->display->display_options['fields']['field_partner_site_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_site_link']['click_sort_column'] = 'url';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_partner_site_image']['id'] = 'field_partner_site_image';
  $handler->display->display_options['fields']['field_partner_site_image']['table'] = 'field_data_field_partner_site_image';
  $handler->display->display_options['fields']['field_partner_site_image']['field'] = 'field_partner_site_image';
  $handler->display->display_options['fields']['field_partner_site_image']['label'] = '';
  $handler->display->display_options['fields']['field_partner_site_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_partner_site_image']['click_sort_column'] = 'fid';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'partner_site' => 'partner_site',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $export['partner_sites'] = $view;

  return $export;
}
