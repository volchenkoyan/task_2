<?php
/**
 * @file
 * follow_me.features.inc
 */

/**
 * Implements hook_views_api().
 */
function follow_me_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function follow_me_default_flags() {
$flags = array();
// Exported flag: "user_subscribe".
$flags['user_subscribe'] = array (
  'entity_type' => 'user',
  'title' => 'user_subscribe',
  'global' => '0',
  'types' => 
  array (
  ),
  'flag_short' => 'Follow',
  'flag_long' => '',
  'flag_message' => '',
  'unflag_short' => 'Unfollow',
  'unflag_long' => '',
  'unflag_message' => '',
  'unflag_denied_text' => '',
  'link_type' => 'toggle',
  'weight' => 0,
  'show_in_links' => 
  array (
    'full' => 'full',
    'token' => 0,
  ),
  'show_as_field' => 1,
  'show_on_form' => 0,
  'access_author' => '',
  'show_contextual_link' => 0,
  'show_on_profile' => 1,
  'access_uid' => 'others',
  'api_version' => 3,
);
return $flags;


}