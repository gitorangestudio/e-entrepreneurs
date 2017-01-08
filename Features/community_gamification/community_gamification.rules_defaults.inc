<?php
/**
 * @file
 * community_gamification.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function community_gamification_default_rules_configuration() {
  $items = array();
  $items['rules_og_grant_user_role_expert'] = entity_import('rules_config', '{ "rules_og_grant_user_role_expert" : {
      "LABEL" : "OG: Grant user role expert",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "OG" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_role_grant" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "project" : "project" } }
          }
        }
      ],
      "DO" : [
        { "entity_save" : { "data" : [ "og-membership" ], "immediate" : "1" } },
        { "user_add_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  $items['rules_og_revoke_user_role_expert'] = entity_import('rules_config', '{ "rules_og_revoke_user_role_expert" : {
      "LABEL" : "OG: Revoke user role expert",
      "PLUGIN" : "reaction rule",
      "ACTIVE" : false,
      "OWNER" : "rules",
      "TAGS" : [ "OG" ],
      "REQUIRES" : [ "rules", "og" ],
      "ON" : { "og_role_revoke" : [] },
      "IF" : [
        { "entity_is_of_type" : { "entity" : [ "og-membership:group" ], "type" : "node" } },
        { "node_is_of_type" : {
            "node" : [ "og-membership:group" ],
            "type" : { "value" : { "project" : "project" } }
          }
        }
      ],
      "DO" : [
        { "entity_save" : { "data" : [ "og-membership" ], "immediate" : "1" } },
        { "user_remove_role" : { "account" : [ "account" ], "roles" : { "value" : { "7" : "7" } } } }
      ]
    }
  }');
  $items['rules_redirect_survey_user'] = entity_import('rules_config', '{ "rules_redirect_survey_user" : {
      "LABEL" : "Redirect Survey User",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Survey" ],
      "REQUIRES" : [ "og", "rules", "views_bulk_operations" ],
      "ON" : { "node_view--project" : { "bundle" : "project" } },
      "IF" : [
        { "og_entity_is_group" : { "entity" : [ "node" ] } },
        { "user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "2" : "2", "8" : "8" } }
          }
        }
      ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : {
              "view" : "last_requested_survey|default",
              "args" : [ "node:author:uid" ]
            },
            "PROVIDE" : { "entity_list" : { "objects" : "Objects" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "objects" ] },
            "ITEM" : { "current" : "Current object" },
            "DO" : [ { "redirect" : { "url" : [ "current:edit-url" ] } } ]
          }
        }
      ]
    }
  }');
  $items['rules_redirect_user_to_complete_entrepreneur_profile'] = entity_import('rules_config', '{ "rules_redirect_user_to_complete_entrepreneur_profile" : {
      "LABEL" : "Redirect User to Complete Entrepreneur Profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "entrepreneur", "registration" ],
      "REQUIRES" : [ "pathrules", "rules" ],
      "ON" : { "init" : [] },
      "IF" : [
        { "OR" : [
            { "pathrules_checkpath" : { "path" : "submit", "operation" : "equals" } },
            { "pathrules_checkpath" : { "path" : "node\\/add\\/project", "operation" : "equals" } }
          ]
        },
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "3" : "3", "4" : "4", "5" : "5", "7" : "7", "11" : "11", "12" : "12" } },
            "operation" : "OR"
          }
        }
      ],
      "DO" : [
        { "user_add_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "5" : "5" } }
          }
        },
        { "redirect" : {
            "url" : "user\\/me\\/edit\\/entrepreneur?destination=submit",
            "destination" : "1"
          }
        },
        { "drupal_message" : {
            "message" : "Please complete your profile to be able to submit a business idea.",
            "type" : "warning"
          }
        }
      ]
    }
  }');
  $items['rules_show_goal_message'] = entity_import('rules_config', '{ "rules_show_goal_message" : {
      "LABEL" : "Show Goal Message",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "goal", "message" ],
      "REQUIRES" : [ "rules", "php", "goals" ],
      "ON" : { "goal_awarded" : [] },
      "IF" : [
        { "OR" : [
            { "NOT data_is" : { "data" : [ "goal:goal-id" ], "value" : "2" } },
            { "NOT data_is" : { "data" : [ "goal:goal-id" ], "value" : "14" } }
          ]
        }
      ],
      "DO" : [
        { "php_eval" : { "code" : "$goal_title = $goal-\\u003Etitle;\\r\\n$message = \\u0027Well Done , You have completed the \\u0027.$goal_title.\\u0027 goal\\u0027;\\r\\ndrupal_set_message($message);" } }
      ]
    }
  }');
  return $items;
}
