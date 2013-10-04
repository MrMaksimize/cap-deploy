<?php
/**
 * @file
 * zotero_biblio_tagcloud.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zotero_biblio_tagcloud_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
