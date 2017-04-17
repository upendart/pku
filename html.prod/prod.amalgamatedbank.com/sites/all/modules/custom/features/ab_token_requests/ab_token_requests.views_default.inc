<?php
/**
 * @file
 * ab_token_requests.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ab_token_requests_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'token_request_export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Token Request Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Token Request Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer ama_token_requests';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_admin_email' => 'field_admin_email',
    'field_company_id' => 'field_company_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_admin_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_company_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No Token Request  found.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Token Requests (field_token_request) */
  $handler->display->display_options['relationships']['field_token_request_value']['id'] = 'field_token_request_value';
  $handler->display->display_options['relationships']['field_token_request_value']['table'] = 'field_data_field_token_request';
  $handler->display->display_options['relationships']['field_token_request_value']['field'] = 'field_token_request_value';
  $handler->display->display_options['relationships']['field_token_request_value']['delta'] = '-1';
  /* Field: Field collection item: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Serial Number */
  $handler->display->display_options['fields']['field_serial_number']['id'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['table'] = 'field_data_field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['field'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_serial_number']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Masked Serial */
  $handler->display->display_options['fields']['field_masked_serial']['id'] = 'field_masked_serial';
  $handler->display->display_options['fields']['field_masked_serial']['table'] = 'field_data_field_masked_serial';
  $handler->display->display_options['fields']['field_masked_serial']['field'] = 'field_masked_serial';
  $handler->display->display_options['fields']['field_masked_serial']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_masked_serial']['label'] = 'Masked Serial Number';
  $handler->display->display_options['fields']['field_masked_serial']['element_label_colon'] = FALSE;
  /* Field: Content: Administrator Email */
  $handler->display->display_options['fields']['field_admin_email']['id'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['table'] = 'field_data_field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['field'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_email']['type'] = 'email_plain';
  /* Field: Content: Company ID */
  $handler->display->display_options['fields']['field_company_id']['id'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['table'] = 'field_data_field_company_id';
  $handler->display->display_options['fields']['field_company_id']['field'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Link';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field collection item: Token Type */
  $handler->display->display_options['fields']['field_token_type']['id'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['table'] = 'field_data_field_token_type';
  $handler->display->display_options['fields']['field_token_type']['field'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_token_type']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'token_request' => 'token_request',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: First Name */
  $handler->display->display_options['fields']['field_first_name']['id'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['table'] = 'field_data_field_first_name';
  $handler->display->display_options['fields']['field_first_name']['field'] = 'field_first_name';
  $handler->display->display_options['fields']['field_first_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_first_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Last Name */
  $handler->display->display_options['fields']['field_last_name']['id'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['table'] = 'field_data_field_last_name';
  $handler->display->display_options['fields']['field_last_name']['field'] = 'field_last_name';
  $handler->display->display_options['fields']['field_last_name']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_last_name']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Serial Number */
  $handler->display->display_options['fields']['field_serial_number']['id'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['table'] = 'field_data_field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['field'] = 'field_serial_number';
  $handler->display->display_options['fields']['field_serial_number']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_serial_number']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Masked Serial */
  $handler->display->display_options['fields']['field_masked_serial']['id'] = 'field_masked_serial';
  $handler->display->display_options['fields']['field_masked_serial']['table'] = 'field_data_field_masked_serial';
  $handler->display->display_options['fields']['field_masked_serial']['field'] = 'field_masked_serial';
  $handler->display->display_options['fields']['field_masked_serial']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_masked_serial']['label'] = 'Masked Serial Number';
  $handler->display->display_options['fields']['field_masked_serial']['element_label_colon'] = FALSE;
  /* Field: Content: Administrator Email */
  $handler->display->display_options['fields']['field_admin_email']['id'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['table'] = 'field_data_field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['field'] = 'field_admin_email';
  $handler->display->display_options['fields']['field_admin_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_admin_email']['type'] = 'email_plain';
  /* Field: Content: Company ID */
  $handler->display->display_options['fields']['field_company_id']['id'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['table'] = 'field_data_field_company_id';
  $handler->display->display_options['fields']['field_company_id']['field'] = 'field_company_id';
  $handler->display->display_options['fields']['field_company_id']['element_label_colon'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = 'Link';
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '<a href="[path]">View</a>';
  $handler->display->display_options['fields']['path']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['path']['alter']['max_length'] = '50';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Field collection item: Token Type */
  $handler->display->display_options['fields']['field_token_type']['id'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['table'] = 'field_data_field_token_type';
  $handler->display->display_options['fields']['field_token_type']['field'] = 'field_token_type';
  $handler->display->display_options['fields']['field_token_type']['relationship'] = 'field_token_request_value';
  $handler->display->display_options['fields']['field_token_type']['element_label_colon'] = FALSE;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'AMA-Tokens-Requests-%timestamp-mmm-%timestamp-yyyy.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'admin/ama/tokens/export/csv';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
    'page_1' => 0,
  );
  $export['token_request_export'] = $view;

  return $export;
}
