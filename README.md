# e-entrepreneurs
E-entrepreneurs Community Platform


## 1- Install Drupal 7 as usual
https://www.drupal.org/docs/7/install


## 2- Install the attached theme:
- Install and enable https://www.drupal.org/project/jquery_update
- Visit /admin/config/development/jquery_update
- Set “Default JQuery Version” option to >= 1.10
- Install and enable https://www.drupal.org/project/bootstrap 
- Install and enable the community theme

## 3- Install and enable the attached modules and their dependencies
https://www.drupal.org/docs/7/extending-drupal/modules-find-import-enable-configure

## Features folder contains the following modules (Features):

#### Community Common "community_common":
- All image styles
- All breakpoints 	
- All Picture mapping
- All shared fields between content types


#### Community User "community_user":
- All roles, profiles, fields and configurations related to the user


#### Front Page Slider "community_front_banner" (requires community_common):
- Banner Content Type
- Banner View


#### Event "community_event" (requires community_common):
- Event Content type
- Event Main Page
- Event Block in the home page
- Menu items


#### Discussion "community_discussion" (requires community_common):
- Discussion content type
- Discussion Main page
- Discussion block in the home page
- Menu item


#### Announcements "community_announcments" (requires community_common):
- Announcements content type
- Announcements Main page
- Announcements block in the home page
- Menu item


#### Resources "community_resources" (requires community_common):
- Resources content type
- Resources Main page
- Resources block in the home page
- Menu item


#### Success Story "community_success_story" (requires community_common):
- Success Story content type
- Success Story Main page
- Success Story block in the home page
- Menu item


#### Class Agenda "community_announcmentsgenda" (requires community_class):
- Agenda content type
- Announcements block in class page


#### Business Idea "community_business_idea" (requires community_common):
- Business Idea content type without(access fields and thire terms)
- Business Idea DS configuration


#### Class "community Class" (requires community_business_idea_extra):
- Class content type
- All views, page panel rules
- Business Idea fields


#### Q&A "community_qa" (requires community_common):
- Question & answer content types
- Main page for Q&A
- Other blocks and views
- OG permissions


#### OG Bridge "community_og_bridge" (requires community_business_idea, community_class):
- All views, blocks etc to make the bridges between all other content with the project (Group Content)


#### OG Permissions "community_og_permissions":
- Import all the permissions for OG


#### Gamification "community_gameification":
- All views, blocks etc to create a gamification system on the website


#### Gamification Rules "community_gameification_rules":
- Gamification rules


#### LMS "community_lms" (requires community_common): /* To be created */
- Lecture and course content types
- Main pages for LMS
- LMS blocks
- Permissions
- Rules


## Step by Step:

- Extract attached modules to /sites/all/modules/custom
- Download dependencies one by one or by using this Drush command:
```sh
drush dl -y addressfield autocomplete_deluxe better_exposed_filters conditional_fields countries date ds editablefields field_collection field_group field_permissions ctools link og og_role_delegate og_role_override ogfile panels panels_bootstrap_layouts picture profile2 registration rules rules_link telephone term_reference_tree views views_load_more entity entityreference file_entity views_bulk_operations markup token breakpoints jquery_update nodequeue taxonomy_display pathauto profile2_regpath transliteration strongarm smart_trim field_validation features_extra media field  webform_rules quiz flag eck context flexslider flexslider_fields
```
- It required to apply this patch to make profile2_regpath compatible with features module
- Enable dependencies one by one or by using this Drush command:
- Enable the features modules.
