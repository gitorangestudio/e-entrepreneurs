<?php
/**
 * @file
 * community_gamification_rules.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function community_gamification_rules_default_rules_configuration() {
  $items = array();
  $items['rules_advertiser_create_new_event'] = entity_import('rules_config', '{ "rules_advertiser_create_new_event" : {
      "LABEL" : "ADVERTISER - Create New Event",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "event", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "node_insert--event" : { "bundle" : "event" } },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "35" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "new_event_add",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_ambitious_add_5_course_to_whishlist'] = entity_import('rules_config', '{ "rules_ambitious_add_5_course_to_whishlist" : {
      "LABEL" : "AMBITIOUS - Add 5 course to whishlist",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "course", "task", "whishlist" ],
      "REQUIRES" : [ "goals", "php", "flag" ],
      "ON" : { "flag_flagged_wishlist" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "38" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "add_five_course_whishlist",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_answer_a_question_answer_1_question'] = entity_import('rules_config', '{ "rules_answer_a_question_answer_1_question" : {
      "LABEL" : "ANSWER A QUESTION - answer 1 question",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "answer", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "node_insert--answer" : { "bundle" : "answer" } },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "19" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "answer_one_question",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_ask_a_question_ask_question'] = entity_import('rules_config', '{ "rules_ask_a_question_ask_question" : {
      "LABEL" : "ASK A QUESTION - ask question",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "php", "goals", "rules" ],
      "ON" : { "node_insert--question" : { "bundle" : "question" } },
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "ask_question",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_awesome_trainer_compelet_3_courses'] = entity_import('rules_config', '{ "rules_awesome_trainer_compelet_3_courses" : {
      "LABEL" : "AWESOME TRAINER - Compelet 3 courses",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "course", "task" ],
      "REQUIRES" : [ "goals", "php", "flag" ],
      "ON" : { "flag_flagged_course_complete" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "30" } },
        { "goals_task_condition" : { "task_id" : "29" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "three_cources_complete",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_awesome_user_submit_3_business_ideas'] = entity_import('rules_config', '{ "rules_awesome_user_submit_3_business_ideas" : {
      "LABEL" : "AWESOME USER - submit 3 business ideas",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "business", "submit", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "node_insert--project" : { "bundle" : "project" } },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "22" } },
        { "goals_task_condition" : { "task_id" : "21" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "three_business_idea_submit",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_be_an_entrepreneur_submit_business_idea'] = entity_import('rules_config', '{ "rules_be_an_entrepreneur_submit_business_idea" : {
      "LABEL" : "BE AN ENTREPRENEUR - submit business idea",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "business", "submit", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "node_insert--project" : { "bundle" : "project" } },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "20" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "one_busisniss_idea_submit",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_become_a_trainer_take_your_first_course'] = entity_import('rules_config', '{ "rules_become_a_trainer_take_your_first_course" : {
      "LABEL" : "BECOME A TRAINER - take your first course",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "course", "task" ],
      "REQUIRES" : [ "goals", "php", "flag" ],
      "ON" : { "flag_flagged_take_this_course" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "24" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "first_course",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_bird_s_eye_view_complete_one_survey'] = entity_import('rules_config', '{ "rules_bird_s_eye_view_complete_one_survey" : {
      "LABEL" : "BIRD\\u0027S EYE VIEW - complete one survey",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "survey", "task" ],
      "REQUIRES" : [ "goals", "php", "webform_rules" ],
      "ON" : { "webform_rules_submit" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "31" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "one_survey_complete",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_chummy_view_five_user_profile'] = entity_import('rules_config', '{ "rules_chummy_view_five_user_profile" : {
      "LABEL" : "CHUMMY - view five users profile",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "profile", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "user_view" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "32" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "view_five_user_profile",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_complete_a_course_complete_one_course'] = entity_import('rules_config', '{ "rules_complete_a_course_complete_one_course" : {
      "LABEL" : "COMPLETE A COURSE - complete one course",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "course", "task" ],
      "REQUIRES" : [ "goals", "php", "flag" ],
      "ON" : { "flag_flagged_course_complete" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "28" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "one_course_completion",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_diligent_trainer_pass_three_quizs'] = entity_import('rules_config', '{ "rules_diligent_trainer_pass_three_quizs" : {
      "LABEL" : "DILIGENT TRAINER - pass three quizs",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "quiz", "task" ],
      "REQUIRES" : [ "goals", "php", "rules", "quiz" ],
      "ON" : { "quizrules_quiz_taken" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "27" } },
        { "goals_task_condition" : { "task_id" : "26" } },
        { "php_eval" : { "code" : "\\/\\/quiz id\\r\\n$nid = $quiz-\\u003Evid;\\r\\n\\r\\n\\/\\/user id \\r\\nglobal $user;\\r\\n$uid = $user-\\u003Euid;\\r\\n\\r\\n\\/\\/version id\\r\\n$vid = \\u0027\\u0027;\\r\\n\\r\\nif ( quiz_is_passed($uid, $nid, $vid) ) {\\r\\n    return true;\\r\\n}else{\\r\\n   return false;\\r\\n}" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "three_quizes_pass",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_discussion_send_email_after_a_new_comment_is_added'] = entity_import('rules_config', '{ "rules_discussion_send_email_after_a_new_comment_is_added" : {
      "LABEL" : "Discussion: Send email after a new comment is added",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "discussion" ],
      "REQUIRES" : [ "og", "rules", "comment" ],
      "ON" : { "comment_insert--comment_node_discussion" : { "bundle" : "comment_node_discussion" } },
      "IF" : [ { "og_entity_is_group_content" : { "entity" : [ "comment:node" ] } } ],
      "DO" : [
        { "og_get_members" : {
            "USING" : { "group_content" : [ "comment:node" ] },
            "PROVIDE" : { "group_members" : { "group_members" : "members" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "group-members" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "mail" : {
                  "to" : "[list-item:mail]",
                  "subject" : "A new comment has been added to [comment:node:title]",
                  "message" : "Dear [list-item:name],\\r\\nA new comment has been added to \\u0022 [comment:node:title]\\u0022.\\r\\nYou can view the new comment by clicking this link or copying and pasting it to your browser:\\r\\n[comment:url]\\r\\n\\r\\n--  [site:name] team",
                  "from" : "[site:mail]",
                  "language" : "en"
                }
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_frequent_visitor_login_5_times'] = entity_import('rules_config', '{ "rules_frequent_visitor_login_5_times" : {
      "LABEL" : "FREQUENT VISITOR - Login 5 Times",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "goals", "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "15" } },
        { "goals_task_condition" : { "task_id" : "14" } }
      ],
      "DO" : [
        { "goals_task_record" : { "task_name" : "login_fvisitor", "user_to_save_for" : "[account:uid]" } }
      ]
    }
  }');
  $items['rules_hard_worker_trainer_pass_2_quizes'] = entity_import('rules_config', '{ "rules_hard_worker_trainer_pass_2_quizes" : {
      "LABEL" : "HARD-WORKER TRAINER - pass 2 quizes",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "quiz", "task" ],
      "REQUIRES" : [ "goals", "php", "rules", "quiz" ],
      "ON" : { "quizrules_quiz_taken" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "26" } },
        { "goals_task_condition" : { "task_id" : "25" } },
        { "php_eval" : { "code" : "\\/\\/quiz id\\r\\n$nid = $quiz-\\u003Evid;\\r\\n\\r\\n\\/\\/user id \\r\\nglobal $user;\\r\\n$uid = $user-\\u003Euid;\\r\\n\\r\\n\\/\\/version id\\r\\n$vid = \\u0027\\u0027;\\r\\n\\r\\nif ( quiz_is_passed($uid, $nid, $vid) ) {\\r\\n    return true;\\r\\n}else{\\r\\n   return false;\\r\\n}" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "two_quiz_pass",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_join_the_conversation_comment_discussion'] = entity_import('rules_config', '{ "rules_join_the_conversation_comment_discussion" : {
      "LABEL" : "JOIN THE CONVERSATION - comment discussion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "comment", "task" ],
      "REQUIRES" : [ "goals", "php", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "18" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "comment_discussion",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_login_to_the_site'] = entity_import('rules_config', '{ "rules_login_to_the_site" : {
      "LABEL" : "Login to the site",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "login", "repeated" ],
      "REQUIRES" : [ "userpoints_rules", "rules" ],
      "ON" : { "user_login" : [] },
      "DO" : [
        { "userpoints_action_grant_points" : {
            "user" : [ "account" ],
            "points" : "10",
            "tid" : "0",
            "entity" : [ "" ],
            "operation" : "Insert",
            "display" : "1",
            "moderate" : "approved"
          }
        }
      ]
    }
  }');
  $items['rules_make_a_disscussion_add_a_discussion_under_your_own_busines'] = entity_import('rules_config', '{ "rules_make_a_disscussion_add_a_discussion_under_your_own_busines" : {
      "LABEL" : "MAKE A DISSCUSSION - add a discussion under your own business idea",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "discussion", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "node_insert--discussion" : { "bundle" : "discussion" } },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "36" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "discussion_add",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_mentorship_request_send_mentorship_request'] = entity_import('rules_config', '{ "rules_mentorship_request_send_mentorship_request" : {
      "LABEL" : "MENTORSHIP REQUEST - send mentorship request",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "mentorship", "task" ],
      "REQUIRES" : [ "goals", "php", "eck" ],
      "ON" : { "cme_request_insert" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "23" } } ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "mentorship_request",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_new_face_upload_user_picture'] = entity_import('rules_config', '{ "rules_new_face_upload_user_picture" : {
      "LABEL" : "NEW FACE - Upload User Picture",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "task", "upload" ],
      "REQUIRES" : [ "php", "rules", "goals" ],
      "ON" : { "user_update" : [] },
      "IF" : [
        { "php_eval" : { "code" : "if($account-\\u003Epicture == NULL){\\r\\n    return false;\\r\\n  } else {\\r\\n    return true;\\r\\n  }" } }
      ],
      "DO" : [
        { "goals_task_record" : { "task_name" : "user_picture", "user_to_save_for" : "[account:uid]" } }
      ]
    }
  }');
  $items['rules_pass_a_quiz_pass_a_quiz'] = entity_import('rules_config', '{ "rules_pass_a_quiz_pass_a_quiz" : {
      "LABEL" : "PASS A QUIZ - pass a quiz",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "quiz", "task" ],
      "REQUIRES" : [ "php", "rules", "goals", "quiz" ],
      "ON" : { "quizrules_quiz_taken" : [] },
      "IF" : [
        { "php_eval" : { "code" : "\\/\\/quiz id\\r\\n$nid = $quiz-\\u003Evid;\\r\\n\\r\\n\\/\\/user id \\r\\nglobal $user;\\r\\n$uid = $user-\\u003Euid;\\r\\n\\r\\n\\/\\/version id\\r\\n$vid = \\u0027\\u0027;\\r\\n\\r\\nif ( quiz_is_passed($uid, $nid, $vid) ) {\\r\\n    return true;\\r\\n}else{\\r\\n   return false;\\r\\n}" } },
        { "NOT goals_task_condition" : { "task_id" : "25" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "quiz_pass",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_power_trainer_compelet_2_courses'] = entity_import('rules_config', '{ "rules_power_trainer_compelet_2_courses" : {
      "LABEL" : "POWER TRAINER - Compelet 2 courses",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "course", "task" ],
      "REQUIRES" : [ "goals", "php", "flag" ],
      "ON" : { "flag_flagged_course_complete" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "29" } },
        { "goals_task_condition" : { "task_id" : "28" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "two_cources_complete",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_power_user_submit_2_business_ideas'] = entity_import('rules_config', '{ "rules_power_user_submit_2_business_ideas" : {
      "LABEL" : "POWER USER - submit 2 business ideas",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "business", "submit", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "node_insert--project" : { "bundle" : "project" } },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "21" } },
        { "goals_task_condition" : { "task_id" : "20" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "two_business_idea_submit",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_power_visitor_login_10_times'] = entity_import('rules_config', '{ "rules_power_visitor_login_10_times" : {
      "LABEL" : "POWER VISITOR - login 10 times",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "login", "task" ],
      "REQUIRES" : [ "goals", "php", "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "37" } },
        { "goals_task_condition" : { "task_id" : "15" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "login_pvisitor",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  $items['rules_register_if_old_user'] = entity_import('rules_config', '{ "rules_register_if_old_user" : {
      "LABEL" : "Register if Old user",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "goals", "rules" ],
      "ON" : { "user_login" : [] },
      "IF" : [ { "NOT goals_task_condition" : { "task_id" : "13" } } ],
      "DO" : [
        { "goals_task_record" : { "task_name" : "register", "user_to_save_for" : "[account:uid]" } }
      ]
    }
  }');
  $items['rules_running_conversation_comment_5_times_on_a_discussion'] = entity_import('rules_config', '{ "rules_running_conversation_comment_5_times_on_a_discussion" : {
      "LABEL" : "RUNNING CONVERSATION - comment 5 times on a discussion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "comment", "discussion", "task" ],
      "REQUIRES" : [ "goals", "php", "comment" ],
      "ON" : { "comment_insert--comment_node_discussion" : { "bundle" : "comment_node_discussion" } },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "39" } },
        { "goals_task_condition" : { "task_id" : "18" } }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "comment_5_ddiscussion",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
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
  $items['rules_task_level_citizen_apprentice'] = entity_import('rules_config', '{ "rules_task_level_citizen_apprentice" : {
      "LABEL" : "Task: Level Citizen Apprentice",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "6" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "1001"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "citizen_apprentice",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_citizen_artisan'] = entity_import('rules_config', '{ "rules_task_level_citizen_artisan" : {
      "LABEL" : "Task: Level Citizen Artisan",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "7" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "2001"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "citizen_artisan",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_citizen_intern'] = entity_import('rules_config', '{ "rules_task_level_citizen_intern" : {
      "LABEL" : "Task: Level Citizen Intern",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "5" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "501"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "citizen_intern",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_citizen_master'] = entity_import('rules_config', '{ "rules_task_level_citizen_master" : {
      "LABEL" : "Task: Level Citizen Master",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "8" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "3501"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "citizen_master",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_explorer_apprentice'] = entity_import('rules_config', '{ "rules_task_level_explorer_apprentice" : {
      "LABEL" : "Task: Level Explorer Apprentice",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "2" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "101"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "explorer_apprentice",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_explorer_artisan'] = entity_import('rules_config', '{ "rules_task_level_explorer_artisan" : {
      "LABEL" : "Task: Level Explorer Artisan",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "3" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "201"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "explorer_artisan",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_explorer_intern'] = entity_import('rules_config', '{ "rules_task_level_explorer_intern" : {
      "LABEL" : "Task: Level Explorer Intern",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "explorer", "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "1" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "0"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "explorer_intern",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_explorer_master'] = entity_import('rules_config', '{ "rules_task_level_explorer_master" : {
      "LABEL" : "Task: Level Explorer Master",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "4" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "351"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "explorer_master",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_leader_apprentice'] = entity_import('rules_config', '{ "rules_task_level_leader_apprentice" : {
      "LABEL" : "Task: Level Leader Apprentice",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "10" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "7001"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "leader_apprentice",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_leader_artisan'] = entity_import('rules_config', '{ "rules_task_level_leader_artisan" : {
      "LABEL" : "Task: Level Leader Artisan",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "11" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "12001"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "leader_artisan",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_leader_intern'] = entity_import('rules_config', '{ "rules_task_level_leader_intern" : {
      "LABEL" : "Task: Level Leader Intern",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "9" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "5001"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "leader_intern",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_task_level_leader_master'] = entity_import('rules_config', '{ "rules_task_level_leader_master" : {
      "LABEL" : "Task: Level Leader Master",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "level" ],
      "REQUIRES" : [ "goals", "rules", "userpoints_rules" ],
      "ON" : { "userpoints_event_points_awarded_after" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "12" } },
        { "data_is" : {
            "data" : [ "userpoints-transaction:user:points" ],
            "op" : "\\u003E",
            "value" : "25001"
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "leader_master",
            "user_to_save_for" : "[userpoints-transaction:user:uid]"
          }
        }
      ]
    }
  }');
  $items['rules_unbroken_conversation_comment_10_times_on_a_discussion'] = entity_import('rules_config', '{ "rules_unbroken_conversation_comment_10_times_on_a_discussion" : {
      "LABEL" : "UNBROKEN CONVERSATION - comment 10 times on a discussion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "comment", "task" ],
      "REQUIRES" : [ "goals", "rules", "php", "comment" ],
      "ON" : { "comment_insert" : [] },
      "IF" : [
        { "NOT goals_task_condition" : { "task_id" : "40" } },
        { "goals_task_condition" : { "task_id" : "39" } },
        { "node_is_of_type" : {
            "node" : [ "comment:node" ],
            "type" : { "value" : { "discussion" : "discussion" } }
          }
        }
      ],
      "DO" : [
        { "goals_task_record" : {
            "task_name" : "comment_10_discussion",
            "user_to_save_for" : "\\u003C?php \\r\\nglobal $user ;\\r\\n$user_id = $user-\\u003Euid;\\r\\nreturn $user_id;\\r\\n?\\u003E"
          }
        }
      ]
    }
  }');
  return $items;
}
