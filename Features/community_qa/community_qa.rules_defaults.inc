<?php
/**
 * @file
 * community_qa.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function community_qa_default_rules_configuration() {
  $items = array();
  $items['rules_adding_1_to_question_s_answer_count_cloned_'] = entity_import('rules_config', '{ "rules_adding_1_to_question_s_answer_count_cloned_" : {
      "LABEL" : "Q\\u0026A: Add Answer Count",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Question" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_insert--answer" : { "bundle" : "answer" } },
      "IF" : [
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "entity_has_field" : {
            "entity" : [ "site:og-context--node" ],
            "field" : "field_answers_count"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "site:og-context--node:field-answers-count" ],
              "op" : "+",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "site:og-context--node:field-answers-count" ],
            "value" : [ "result" ]
          }
        }
      ]
    }
  }');
  $items['rules_remove_answer_count'] = entity_import('rules_config', '{ "rules_remove_answer_count" : {
      "LABEL" : "Q\\u0026A: Subtract Answer Count",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Question" ],
      "REQUIRES" : [ "og", "rules" ],
      "ON" : { "node_delete--answer" : { "bundle" : "answer" } },
      "IF" : [
        { "og_entity_is_group_content" : { "entity" : [ "node" ] } },
        { "entity_has_field" : {
            "entity" : [ "site:og-context--node" ],
            "field" : "field_answers_count"
          }
        }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "site:og-context--node:field-answers-count" ],
              "op" : "-",
              "input_2" : "1"
            },
            "PROVIDE" : { "result" : { "result" : "Calculation result" } }
          }
        },
        { "data_set" : {
            "data" : [ "site:og-context--node:field-answers-count" ],
            "value" : [ "result" ]
          }
        }
      ]
    }
  }');
  return $items;
}
