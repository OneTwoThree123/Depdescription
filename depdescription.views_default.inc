<?php
/**
 * @file
 * depdescription.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function depdescription_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = '_clubdep';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '社团部门';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '社团部门';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重设';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '6';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_depimage' => 'field_depimage',
    'title' => 'field_description',
    'field_description' => 'field_description',
    'field_duty' => 'field_description',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_depimage' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '                                        ',
      'empty_column' => 0,
    ),
    'field_duty' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* 字段: 内容: 部门图片 */
  $handler->display->display_options['fields']['field_depimage']['id'] = 'field_depimage';
  $handler->display->display_options['fields']['field_depimage']['table'] = 'field_data_field_depimage';
  $handler->display->display_options['fields']['field_depimage']['field'] = 'field_depimage';
  $handler->display->display_options['fields']['field_depimage']['label'] = '';
  $handler->display->display_options['fields']['field_depimage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_depimage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_depimage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_depimage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_depimage']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_depimage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_depimage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_depimage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_depimage']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_depimage']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_depimage']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_depimage']['field_api_classes'] = 0;
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* 字段: 内容: 部门描述 */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_description']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_description']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_description']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_description']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_description']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_description']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_description']['field_api_classes'] = 0;
  /* 字段: 内容: 部门任务 */
  $handler->display->display_options['fields']['field_duty']['id'] = 'field_duty';
  $handler->display->display_options['fields']['field_duty']['table'] = 'field_data_field_duty';
  $handler->display->display_options['fields']['field_duty']['field'] = 'field_duty';
  $handler->display->display_options['fields']['field_duty']['label'] = '';
  $handler->display->display_options['fields']['field_duty']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_duty']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_duty']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_duty']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_duty']['element_type'] = 'h3';
  $handler->display->display_options['fields']['field_duty']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_duty']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_duty']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_duty']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_duty']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_duty']['field_api_classes'] = 0;
  /* Sort criterion: 内容: 标题 */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    '_department' => '_department',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = '-clubdepartment';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '社团部门';
  $handler->display->display_options['menu']['name'] = 'main-menu';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = '-clubdepartment.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );
  $translatables['_clubdep'] = array(
    t('Master'),
    t('社团部门'),
    t('more'),
    t('Apply'),
    t('重设'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Page'),
    t('Feed'),
  );
  $export['_clubdep'] = $view;

  return $export;
}
