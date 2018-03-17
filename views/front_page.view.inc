<?php
$view = new view();
$view->name = 'front_page';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'node';
$view->human_name = 'Front Page';
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
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '1';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['row_options']['separator'] = ' and ';
/* Field: Content: Bride */
$handler->display->display_options['fields']['field_bride']['id'] = 'field_bride';
$handler->display->display_options['fields']['field_bride']['table'] = 'field_data_field_bride';
$handler->display->display_options['fields']['field_bride']['field'] = 'field_bride';
$handler->display->display_options['fields']['field_bride']['label'] = '';
$handler->display->display_options['fields']['field_bride']['exclude'] = TRUE;
$handler->display->display_options['fields']['field_bride']['element_label_colon'] = FALSE;
/* Field: Content: Groom */
$handler->display->display_options['fields']['field_groom']['id'] = 'field_groom';
$handler->display->display_options['fields']['field_groom']['table'] = 'field_data_field_groom';
$handler->display->display_options['fields']['field_groom']['field'] = 'field_groom';
$handler->display->display_options['fields']['field_groom']['label'] = '';
$handler->display->display_options['fields']['field_groom']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['field_groom']['alter']['text'] = '<span class="spouse">[field_bride]</span> and <span class="spouse">[field_groom]</span>';
$handler->display->display_options['fields']['field_groom']['element_type'] = 'h1';
$handler->display->display_options['fields']['field_groom']['element_label_colon'] = FALSE;
/* Field: Content: Date */
$handler->display->display_options['fields']['field_date']['id'] = 'field_date';
$handler->display->display_options['fields']['field_date']['table'] = 'field_data_field_date';
$handler->display->display_options['fields']['field_date']['field'] = 'field_date';
$handler->display->display_options['fields']['field_date']['label'] = '';
$handler->display->display_options['fields']['field_date']['element_label_colon'] = FALSE;
/* Field: Content: Location */
$handler->display->display_options['fields']['field_location']['id'] = 'field_location';
$handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
$handler->display->display_options['fields']['field_location']['field'] = 'field_location';
$handler->display->display_options['fields']['field_location']['label'] = '';
$handler->display->display_options['fields']['field_location']['element_label_colon'] = FALSE;
/* Field: Content: Image */
$handler->display->display_options['fields']['field_image']['id'] = 'field_image';
$handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
$handler->display->display_options['fields']['field_image']['field'] = 'field_image';
$handler->display->display_options['fields']['field_image']['label'] = '';
$handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
$handler->display->display_options['fields']['field_image']['settings'] = array(
  'image_style' => 'full_width_-_desktop',
  'image_link' => '',
);
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
  'splash' => 'splash',
);

/* Display: Page */
$handler = $view->new_display('page', 'Page', 'page');
$handler->display->display_options['path'] = 'index';
