<?php
/**
 * @file
 * community_og_bridge.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function community_og_bridge_default_rules_configuration() {
  $items = array();
  $items['rules_add_user_to_class'] = entity_import('rules_config', '{ "rules_add_user_to_class" : {
      "LABEL" : "Add User To Class",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "TAGS" : [ "Class" ],
      "REQUIRES" : [ "og" ],
      "USES VARIABLES" : {
        "entrepreneur" : { "label" : "Entrepreneur", "type" : "user" },
        "class" : { "label" : "Class", "type" : "node" }
      },
      "ACTION SET" : [
        { "og_subcribe_user" : { "user" : [ "entrepreneur" ], "group" : [ "class" ] } }
      ]
    }
  }');
  $items['rules_link_condition_accept_new_project'] = entity_import('rules_config', '{ "rules_link_condition_accept_new_project" : {
      "LABEL" : "Rules link: Accept New Project condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
        { "data_is" : {
            "data" : [ "node:field-application-status" ],
            "op" : "IN",
            "value" : { "value" : { "33" : "33", "16" : "16" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_decline_new_project'] = entity_import('rules_config', '{ "rules_link_condition_decline_new_project" : {
      "LABEL" : "Rules link: Decline New Project condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
        { "data_is" : {
            "data" : [ "node:field-application-status" ],
            "op" : "IN",
            "value" : { "value" : { "33" : "33", "16" : "16" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_need_more_info'] = entity_import('rules_config', '{ "rules_link_condition_need_more_info" : {
      "LABEL" : "Rules link: Need More Info condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
        { "data_is" : {
            "data" : [ "node:field-application-status" ],
            "op" : "IN",
            "value" : { "value" : { "33" : "33", "14" : "14", "15" : "15" } }
          }
        }
      ]
    }
  }');
  $items['rules_link_condition_submit_a_project'] = entity_import('rules_config', '{ "rules_link_condition_submit_a_project" : {
      "LABEL" : "Rules link: Submit a project condition",
      "PLUGIN" : "and",
      "OWNER" : "rules",
      "TAGS" : [ "project" ],
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "AND" : [
        { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
        { "data_is" : { "data" : [ "node:field-submitted" ], "value" : "0" } }
      ]
    }
  }');
  $items['rules_link_set_accept_new_project'] = entity_import('rules_config', '{ "rules_link_set_accept_new_project" : {
      "LABEL" : "Rules link: Accept New Project rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "php", "og" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "PROVIDE" : {
              "variable_added" : { "class_id" : "Class ID" },
              "entity_fetched" : { "fetched_class" : "Fetched Class" }
            },
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
              { "data_is" : { "data" : [ "node:field-submitted" ], "value" : "1" } }
            ],
            "DO" : [
              { "variable_add" : {
                  "USING" : {
                    "type" : "integer",
                    "value" : {
                      "select" : "node:nid",
                      "php" : { "code" : "$class_id = htmlspecialchars($_GET[\\u0022class-id\\u0022]);\\r\\nreturn $class_id;" }
                    }
                  },
                  "PROVIDE" : { "variable_added" : { "class_id" : "Class ID" } }
                }
              },
              { "entity_fetch" : {
                  "USING" : { "type" : "node", "id" : [ "class-id" ] },
                  "PROVIDE" : { "entity_fetched" : { "fetched_class" : "Fetched Class" } }
                }
              },
              { "user_add_role" : { "account" : [ "node:author" ], "roles" : { "value" : { "5" : "5" } } } },
              { "og_grant_og_role" : {
                  "account" : [ "node:author" ],
                  "group" : [ "node" ],
                  "roles" : { "value" : { "Administrator Member" : "Administrator Member" } }
                }
              },
              { "entity_save" : { "data" : [ "node:author" ], "immediate" : "1" } },
              { "data_set" : { "data" : [ "node:field-application-status" ], "value" : "14" } },
              { "data_set" : { "data" : [ "node:field-project-stage" ], "value" : "1" } },
              { "entity_save" : { "data" : [ "node" ] } },
              { "drupal_message" : { "message" : "[node:author] has been added to class \\u0022[fetched-class:title]\\u0022." } },
              { "component_rules_add_user_to_class" : { "entrepreneur" : [ "node:author" ], "class" : [ "fetched-class" ] } },
              { "redirect" : { "url" : "submitted-business-ideas" } },
              { "mail" : {
                  "to" : "[node:author:mail]",
                  "subject" : "Submission status for \\u0022[node:title]\\u0022 at [site:name] (accepted)\\r\\n",
                  "message" : "Dear [node:author:name],\\r\\nCongratulations..\\r\\nYour EDIP application with Business Idea \\u0022[node:title]\\u0022 at [site:name] has been accepted.\\r\\nYou may now visit your new Business Idea by clicking this link or copying and pasting it to your browser:\\r\\n[node:url]\\r\\n\\r\\n--  [site:name] team\\r\\n\\r\\n",
                  "from" : "[site:mail]",
                  "language" : "en"
                }
              }
            ],
            "LABEL" : "Accept New Project Rule"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_decline_new_project'] = entity_import('rules_config', '{ "rules_link_set_decline_new_project" : {
      "LABEL" : "Rules link: Decline New Project rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
              { "data_is" : { "data" : [ "node:field-submitted" ], "value" : "1" } }
            ],
            "DO" : [
              { "node_unpublish" : { "node" : [ "node" ] } },
              { "data_set" : { "data" : [ "node:field-application-status" ], "value" : "15" } },
              { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } },
              { "mail" : {
                  "to" : [ "node:author:mail" ],
                  "subject" : "Submission status for \\u0022[node:title]\\u0022 at [site:name] (declined)",
                  "message" : "Dear [node:author:name],\\r\\nUnfortunately your EDIP application with Business Idea \\u0022[node:title]\\u0022 at [site:name] has been declined at this time. We encourage you to visit the Ideation Camp materials at e-entrepreneurs.com\\/content\\/ideation-camp to better prepare yourself for the Enterprise Development and Investment Promotion (EDIP) program. Once you have better prepared yourself we welcome you to reapply to the EDIP program.\\r\\n\\r\\n--  [site:name] team\\r\\n",
                  "from" : "[site:mail]",
                  "language" : "en"
                }
              }
            ],
            "LABEL" : "Decline New Project"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_need_more_info'] = entity_import('rules_config', '{ "rules_link_set_need_more_info" : {
      "LABEL" : "Rules link: Need More Info rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "og" ],
      "USES VARIABLES" : { "node" : { "label" : "node", "type" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "project" : "project" } } } },
              { "data_is" : { "data" : [ "node:field-submitted" ], "value" : "1" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:group-access" ], "value" : "1" } },
              { "data_set" : { "data" : [ "node:field-application-status" ], "value" : "16" } },
              { "og_grant_og_role" : {
                  "account" : [ "node:author" ],
                  "group" : [ "node" ],
                  "roles" : { "value" : { "administrator member" : "administrator member" } }
                }
              },
              { "entity_save" : { "data" : [ "node" ], "immediate" : "1" } },
              { "mail" : {
                  "to" : [ "node:author:mail" ],
                  "subject" : "Submission status for \\u0022[node:title]\\u0022 at [site:name] (need more info)",
                  "message" : "Dear [node:author:name],\\r\\nWe need more information about your EDIP application with Business Idea \\u0022[node:title]\\u0022 at [site:name].\\r\\nPlease take some time and complete your Business Idea information.\\r\\nYou may visit your submitted Business Idea by clicking this link or copying and pasting it to your browser:\\r\\n[node:url]\\r\\n\\r\\n--  [site:name] team\\r\\n",
                  "from" : "[site:mail]",
                  "language" : "en"
                }
              }
            ],
            "LABEL" : "Need More Info"
          }
        }
      ]
    }
  }');
  $items['rules_link_set_submit_a_project'] = entity_import('rules_config', '{ "rules_link_set_submit_a_project" : {
      "LABEL" : "Rules link: Submit a project rules set",
      "PLUGIN" : "rule set",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : { "node" : { "type" : "node", "label" : "node" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_submitted" } },
              { "entity_has_field" : { "entity" : [ "node" ], "field" : "field_application_status" } }
            ],
            "DO" : [
              { "data_set" : { "data" : [ "node:field-submitted" ], "value" : "1" } },
              { "data_set" : { "data" : [ "node:field-application-status" ], "value" : "33" } },
              { "drupal_message" : { "message" : "Your business idea has been submitted and now is under review." } },
              { "mail" : {
                  "to" : [ "node:author:mail" ],
                  "subject" : "Submission status for \\u0022[node:title]\\u0022 at [site:name] (submitted)\\r\\n",
                  "message" : "Dear [node:author:name],\\r\\nYour EDIP application with Business Idea \\u0022[node:title]\\u0022 at [site:name] has been submitted successfully and is currently under review by our staff. Stay tuned for further instructions.\\r\\nMeanwhile you may visit your new Business Idea by clicking this link or copying and pasting it to your browser:\\r\\n[node:url]\\r\\n\\r\\n--  [site:name] team",
                  "from" : "[site:mail]",
                  "language" : "en"
                }
              },
              { "redirect" : { "url" : "\\/basic\\/454\\/next-steps-after-submitting-your-business-plan" } }
            ],
            "LABEL" : "Project: Submit a project"
          }
        }
      ]
    }
  }');
  $items['rules_send_mail_to_members_after_adding_new_group_conten'] = entity_import('rules_config', '{ "rules_send_mail_to_members_after_adding_new_group_conten" : {
      "LABEL" : "Project-Class: Send mail to members after adding new group content",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Class", "project" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : {
        "node_insert--discussion" : { "bundle" : "discussion" },
        "node_insert--event" : { "bundle" : "event" },
        "node_insert--survey" : { "bundle" : "survey" }
      },
      "IF" : [ { "og_entity_is_group_content" : { "entity" : [ "node" ] } } ],
      "DO" : [
        { "og_get_members" : {
            "USING" : { "group_content" : [ "node" ] },
            "PROVIDE" : { "group_members" : { "group_members" : "members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : [ "list-item:mail" ],
                  "subject" : "A new [node:content-type:name] has been added to \\u0022[node:og-group-ref]\\u0022 Business Idea",
                  "message" : "Dear [list-item:name],\\r\\n\\r\\nA new [node:content-type:name] has been added to \\u0022[node:og-group-ref]\\u0022 Business Idea.\\r\\n\\r\\nYou may now visit the new [node:content-type:name] by clicking this link or copying and pasting it to your browser:\\r\\n[node:url]\\r\\n\\r\\n--  [site:name] team",
                  "from" : [ "site:mail" ],
                  "language" : "en"
                }
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
