<?php
/**
 * @file
 * zotero_feedback_form.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function zotero_feedback_form_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_entityform__feedback_form';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'redirect' => array(
          'weight' => '3',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_entityform__feedback_form'] = $strongarm;

  return $export;
}
