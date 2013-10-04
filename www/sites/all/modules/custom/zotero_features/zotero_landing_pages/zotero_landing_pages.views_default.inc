<?php
/**
 * @file
 * zotero_landing_pages.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function zotero_landing_pages_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'landing_pages';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Landing Pages';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found.';
  $handler->display->display_options['empty']['area']['format'] = 'panopoly_wysiwyg_text';
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
  /* Filter criterion: Content: Quarter (field_biblio_quarter) */
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['id'] = 'field_biblio_quarter_tid';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['table'] = 'field_data_field_biblio_quarter';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['field'] = 'field_biblio_quarter_tid';
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['value'] = '';
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
  );
  $handler->display->display_options['filters']['field_biblio_quarter_tid']['vocabulary'] = 'zotero_quarter_vocabulary';
  /* Filter criterion: Content: Theme (field_biblio_theme) */
  $handler->display->display_options['filters']['field_biblio_theme_tid']['id'] = 'field_biblio_theme_tid';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['table'] = 'field_data_field_biblio_theme';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['field'] = 'field_biblio_theme_tid';
  $handler->display->display_options['filters']['field_biblio_theme_tid']['value'] = '';
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
  );
  $handler->display->display_options['filters']['field_biblio_theme_tid']['vocabulary'] = 'zotero_theme_vocabulary';
  /* Filter criterion: Content: Unit (field_biblio_unit) */
  $handler->display->display_options['filters']['field_biblio_unit_tid']['id'] = 'field_biblio_unit_tid';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['table'] = 'field_data_field_biblio_unit';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['field'] = 'field_biblio_unit_tid';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['value'] = '';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_unit_tid']['expose']['operator_id'] = 'field_biblio_unit_tid_op';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['expose']['label'] = 'Unit';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['expose']['operator'] = 'field_biblio_unit_tid_op';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['expose']['identifier'] = 'field_biblio_unit_tid';
  $handler->display->display_options['filters']['field_biblio_unit_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_biblio_unit_tid']['vocabulary'] = 'zotero_unit_vocabulary';
  /* Filter criterion: Content: Zotero Tags (field_biblio_zotero_tags) */
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['id'] = 'field_biblio_zotero_tags_tid';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['table'] = 'field_data_field_biblio_zotero_tags';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['field'] = 'field_biblio_zotero_tags_tid';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['value'] = '';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['expose']['operator_id'] = 'field_biblio_zotero_tags_tid_op';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['expose']['label'] = 'Tags';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['expose']['operator'] = 'field_biblio_zotero_tags_tid_op';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['expose']['identifier'] = 'field_biblio_zotero_tags_tid';
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_biblio_zotero_tags_tid']['vocabulary'] = 'zotero_tags';
  /* Filter criterion: Content: Theme (field_biblio_theme) */
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['id'] = 'field_biblio_theme_tid_1';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['table'] = 'field_data_field_biblio_theme';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['field'] = 'field_biblio_theme_tid';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['value'] = '';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['expose']['operator_id'] = 'field_biblio_theme_tid_1_op';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['expose']['label'] = 'Theme';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['expose']['operator'] = 'field_biblio_theme_tid_1_op';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['expose']['identifier'] = 'field_biblio_theme_tid_1';
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
    4 => 0,
  );
  $handler->display->display_options['filters']['field_biblio_theme_tid_1']['vocabulary'] = 'zotero_theme_vocabulary';

  /* Display: Content pane - Grade */
  $handler = $view->new_display('panel_pane', 'Content pane - Grade', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Grade (field_biblio_grade) */
  $handler->display->display_options['relationships']['field_biblio_grade_tid']['id'] = 'field_biblio_grade_tid';
  $handler->display->display_options['relationships']['field_biblio_grade_tid']['table'] = 'field_data_field_biblio_grade';
  $handler->display->display_options['relationships']['field_biblio_grade_tid']['field'] = 'field_biblio_grade_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Grade (field_biblio_grade) */
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['id'] = 'field_biblio_grade_tid';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['table'] = 'field_data_field_biblio_grade';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['field'] = 'field_biblio_grade_tid';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_biblio_grade_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_biblio_grade_tid' => array(
      'type' => 'panel',
      'context' => 'entity:node.field_biblio_grade',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Grade (field_biblio_grade)',
    ),
  );

  /* Display: Content pane - Unit */
  $handler = $view->new_display('panel_pane', 'Content pane - Unit', 'panel_pane_2');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Unit (field_biblio_unit) */
  $handler->display->display_options['relationships']['field_biblio_unit_tid']['id'] = 'field_biblio_unit_tid';
  $handler->display->display_options['relationships']['field_biblio_unit_tid']['table'] = 'field_data_field_biblio_unit';
  $handler->display->display_options['relationships']['field_biblio_unit_tid']['field'] = 'field_biblio_unit_tid';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Unit (field_biblio_unit) */
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['id'] = 'field_biblio_unit_tid';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['table'] = 'field_data_field_biblio_unit';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['field'] = 'field_biblio_unit_tid';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_biblio_unit_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'field_biblio_unit_tid' => array(
      'type' => 'panel',
      'context' => 'entity:entityform.changed',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Unit (field_biblio_unit)',
    ),
  );
  $export['landing_pages'] = $view;

  return $export;
}
