<?php
/**
 * @file
 * zotero_feedback_form.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function zotero_feedback_form_default_rules_configuration() {
  $items = array();
  $items['rules_zotero_feedback_form_emailer'] = entity_import('rules_config', '{ "rules_zotero_feedback_form_emailer" : {
      "LABEL" : "Zotero Feedback Form Emailer",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "entityform" ],
      "ON" : [ "entityform_insert" ],
      "DO" : [
        { "mail" : {
            "to" : "maksim@promethost.com, douglas@promethost.com",
            "subject" : "Feedback Form Submission",
            "message" : "Page Referrer: [entityform:field_feedback_form_pageref]\\r\\n\\r\\n[entityform:entityform-submittd-data]",
            "language" : [ "entityform:type" ]
          }
        }
      ]
    }
  }');
  return $items;
}
