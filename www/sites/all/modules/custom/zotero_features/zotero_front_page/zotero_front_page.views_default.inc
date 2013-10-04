<?php
/**
 * @file
 * zotero_front_page.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function zotero_front_page_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'front_page_biblio';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front page - biblio';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Show All -';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
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
    'biblio' => 'biblio',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Grade (field_biblio_grade) */
  $handler->display->display_options['filters']['field_biblio_grade_tid']['id'] = 'field_biblio_grade_tid';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['table'] = 'field_data_field_biblio_grade';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['field'] = 'field_biblio_grade_tid';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_biblio_grade_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_grade_tid']['expose']['operator_id'] = 'field_biblio_grade_tid_op';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['expose']['label'] = 'Grade';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['expose']['operator'] = 'field_biblio_grade_tid_op';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['expose']['identifier'] = 'field_biblio_grade_tid';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_biblio_grade_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['vocabulary'] = 'zotero_grade_vocabulary';
  $handler->display->display_options['filters']['field_biblio_grade_tid']['error_message'] = FALSE;
  /* Filter criterion: Global: Dependent filter */
  $handler->display->display_options['filters']['views_dependent_filter']['id'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter']['table'] = 'views';
  $handler->display->display_options['filters']['views_dependent_filter']['field'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter']['group'] = 1;
  $handler->display->display_options['filters']['views_dependent_filter']['controller_filter'] = 'field_biblio_grade_tid';
  $handler->display->display_options['filters']['views_dependent_filter']['controller_values'] = array(
    55 => '55',
    48 => '48',
    45 => '45',
    54 => '54',
  );
  $handler->display->display_options['filters']['views_dependent_filter']['dependent_filters'] = array(
    'field_biblio_quarter_tid' => 'field_biblio_quarter_tid',
    'field_biblio_theme_tid' => 0,
    'field_biblio_unit_tid' => 0,
  );
  /* Filter criterion: Content: Quarter (field_biblio_quarter) */
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['id'] = 'field_biblio_quarter_tid';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['table'] = 'field_data_field_biblio_quarter';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['field'] = 'field_biblio_quarter_tid';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['expose']['operator_id'] = 'field_biblio_quarter_tid_op';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['expose']['label'] = 'Quarter';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['expose']['operator'] = 'field_biblio_quarter_tid_op';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['expose']['identifier'] = 'field_biblio_quarter_tid';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['vocabulary'] = 'zotero_quarter_vocabulary';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['error_message'] = FALSE;
  /* Filter criterion: Global: Dependent filter */
  $handler->display->display_options['filters']['views_dependent_filter_1']['id'] = 'views_dependent_filter_1';
  $handler->display->display_options['filters']['views_dependent_filter_1']['table'] = 'views';
  $handler->display->display_options['filters']['views_dependent_filter_1']['field'] = 'views_dependent_filter';
  $handler->display->display_options['filters']['views_dependent_filter_1']['group'] = 1;
  $handler->display->display_options['filters']['views_dependent_filter_1']['controller_filter'] = 'field_biblio_quarter_tid';
  $handler->display->display_options['filters']['views_dependent_filter_1']['controller_values'] = array(
    53 => '53',
    56 => '56',
  );
  $handler->display->display_options['filters']['views_dependent_filter_1']['dependent_filters'] = array(
    'field_biblio_theme_tid' => 'field_biblio_theme_tid',
    'field_biblio_unit_tid' => 0,
  );
  /* Filter criterion: Content: Theme (field_biblio_theme) */
  $handler->display->display_options['filters']['field_biblio_theme_tid']['id'] = 'field_biblio_theme_tid';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['table'] = 'field_data_field_biblio_theme';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['field'] = 'field_biblio_theme_tid';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['value'] = '';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_biblio_theme_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_theme_tid']['expose']['operator_id'] = 'field_biblio_theme_tid_op';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['expose']['operator'] = 'field_biblio_theme_tid_op';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['expose']['identifier'] = 'field_biblio_theme_tid';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
    5 => 0,
  );
  $handler->display->display_options['filters']['field_biblio_theme_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['vocabulary'] = 'zotero_theme_vocabulary';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['error_message'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'front-page-biblio';
  $export['front_page_biblio'] = $view;

  return $export;
}
