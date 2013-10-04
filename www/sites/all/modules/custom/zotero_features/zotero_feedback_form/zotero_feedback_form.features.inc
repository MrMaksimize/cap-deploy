<?php
/**
 * @file
 * zotero_feedback_form.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function zotero_feedback_form_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function zotero_feedback_form_default_entityform_type() {
  $items = array();
  $items['feedback_form'] = entity_import('entityform_type', '{
    "type" : "feedback_form",
    "label" : "Feedback Form",
    "data" : {
      "draftable" : 0,
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submission_rules" : [],
      "validation_rules" : [],
      "submit_button_text" : "",
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "panopoly_wysiwyg_text" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "3" : 0, "4" : 0 },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "panopoly_wysiwyg_text" }
    },
    "weight" : "0",
    "paths" : []
  }');
  return $items;
}
