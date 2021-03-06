<?php
/**
 * @file
 * gsb_feature_alumni_reunion_session_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gsb_feature_alumni_reunion_session_ct_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gsb_feature_alumni_reunion_session_ct_node_info() {
  $items = array(
    'alumni_reunion_session' => array(
      'name' => t('Alumni Reunion Session'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
