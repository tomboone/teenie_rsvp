<?php
$view = new view();
$view->name = 'rsvps';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'RSVPs';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  3 => '3',
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['query']['options']['distinct'] = TRUE;
$handler->display->display_options['query']['options']['pure_distinct'] = TRUE;
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'field_guest' => 'field_guest',
  'field_total' => 'field_total',
  'field_explain_restrictions' => 'field_explain_restrictions',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'field_guest' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_total' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'field_explain_restrictions' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Field: Content: Guest */
$handler->display->display_options['fields']['field_guest']['id'] = 'field_guest';
$handler->display->display_options['fields']['field_guest']['table'] = 'field_data_field_guest';
$handler->display->display_options['fields']['field_guest']['field'] = 'field_guest';
$handler->display->display_options['fields']['field_guest']['label'] = 'Party';
$handler->display->display_options['fields']['field_guest']['settings'] = array(
  'bypass_access' => 0,
  'link' => 0,
);
/* Field: Content: No. of Guests */
$handler->display->display_options['fields']['field_total']['id'] = 'field_total';
$handler->display->display_options['fields']['field_total']['table'] = 'field_data_field_total';
$handler->display->display_options['fields']['field_total']['field'] = 'field_total';
$handler->display->display_options['fields']['field_total']['label'] = '#';
$handler->display->display_options['fields']['field_total']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
/* Field: Content: Explain your dietary restrictions */
$handler->display->display_options['fields']['field_explain_restrictions']['id'] = 'field_explain_restrictions';
$handler->display->display_options['fields']['field_explain_restrictions']['table'] = 'field_data_field_explain_restrictions';
$handler->display->display_options['fields']['field_explain_restrictions']['field'] = 'field_explain_restrictions';
$handler->display->display_options['fields']['field_explain_restrictions']['label'] = 'Dietary Restrictions';
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
  'rsvp' => 'rsvp',
);
/* Filter criterion: Content: RSVP (field_rsvp) */
$handler->display->display_options['filters']['field_rsvp_value']['id'] = 'field_rsvp_value';
$handler->display->display_options['filters']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
$handler->display->display_options['filters']['field_rsvp_value']['field'] = 'field_rsvp_value';
$handler->display->display_options['filters']['field_rsvp_value']['value'] = array(
  0 => '0',
);

/* Display: Yes */
$handler = $view->new_display('page', 'Yes', 'page');
$handler->display->display_options['path'] = 'rsvp/totals/yes';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Will Attend';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;
$handler->display->display_options['tab_options']['weight'] = '0';

/* Display: No */
$handler = $view->new_display('page', 'No', 'page_1');
$handler->display->display_options['defaults']['empty'] = FALSE;
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = 'No one has RSVP\'d "No"';
$handler->display->display_options['empty']['area']['format'] = 'filtered_html';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: Guest */
$handler->display->display_options['fields']['field_guest']['id'] = 'field_guest';
$handler->display->display_options['fields']['field_guest']['table'] = 'field_data_field_guest';
$handler->display->display_options['fields']['field_guest']['field'] = 'field_guest';
$handler->display->display_options['fields']['field_guest']['label'] = 'Guest(s)';
$handler->display->display_options['fields']['field_guest']['settings'] = array(
  'bypass_access' => 0,
  'link' => 0,
);
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
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
  'rsvp' => 'rsvp',
);
/* Filter criterion: Content: RSVP (field_rsvp) */
$handler->display->display_options['filters']['field_rsvp_value']['id'] = 'field_rsvp_value';
$handler->display->display_options['filters']['field_rsvp_value']['table'] = 'field_data_field_rsvp';
$handler->display->display_options['filters']['field_rsvp_value']['field'] = 'field_rsvp_value';
$handler->display->display_options['filters']['field_rsvp_value']['value'] = array(
  1 => '1',
);
$handler->display->display_options['path'] = 'rsvp/totals/no';
$handler->display->display_options['menu']['type'] = 'tab';
$handler->display->display_options['menu']['title'] = 'Won\'t Attend';
$handler->display->display_options['menu']['weight'] = '2';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Attachment */
$handler = $view->new_display('attachment', 'Attachment', 'attachment_1');
$handler->display->display_options['defaults']['group_by'] = FALSE;
$handler->display->display_options['group_by'] = TRUE;
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: Content: No. of Guests */
$handler->display->display_options['fields']['field_total']['id'] = 'field_total';
$handler->display->display_options['fields']['field_total']['table'] = 'field_data_field_total';
$handler->display->display_options['fields']['field_total']['field'] = 'field_total';
$handler->display->display_options['fields']['field_total']['group_type'] = 'sum';
$handler->display->display_options['fields']['field_total']['label'] = 'Guest Total';
$handler->display->display_options['fields']['field_total']['settings'] = array(
  'thousand_separator' => '',
  'prefix_suffix' => 1,
);
$handler->display->display_options['fields']['field_total']['group_columns'] = array(
  'value' => 'value',
);
$handler->display->display_options['displays'] = array(
  'page' => 'page',
  'default' => 0,
  'page_1' => 0,
);
