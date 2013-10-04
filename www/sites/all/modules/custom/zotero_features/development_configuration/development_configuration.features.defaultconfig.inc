<?php
/**
 * @file
 * development_configuration.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function development_configuration_defaultconfig_features() {
  return array(
    'development_configuration' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function development_configuration_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reroute_email_address';
  $strongarm->value = 'doug@promethost.com, maksim@promethost.com';
  $export['reroute_email_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reroute_email_enable';
  $strongarm->value = 1;
  $export['reroute_email_enable'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reroute_email_enable_message';
  $strongarm->value = 1;
  $export['reroute_email_enable_message'] = $strongarm;

  return $export;
}
