<?php

/**
 * @file
 * acquia_purge_d8cache.drush.inc
 */

/**
 * Implements hook_drush_command().
 */
function acquia_purge_d8cache_drush_command() {
  $items = [];
  // Clear all varnish cache command.
  $items['apd8cache-flush'] = [
    'description' => "Clear the Acquia Varnish cache for the site.",
    'aliases' => ['apd8f'],
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  ];
  return $items;
}

/**
 * Drush callback to clear full site varnish caches.
 */
function drush_acquia_purge_d8cache_clear_site() {
  $ipv4_addresses = _acquia_purge_d8cache_get_balancers();
  // Perform a full site varnish flush when Drupal site caches are cleared.
  foreach ($ipv4_addresses as $ipv4) {
    _acquia_purge_d8cache_curl_request("http://$ipv4/site", [], TRUE);
  }
}
