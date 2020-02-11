# Acquia Purge D8Cache

7.x-1.4
--------------------------------------------------------------------------------
_Release Date: 2020-02-10_

- Fixed the logic to allow varnish tags to be cleared during cron runs when executed via the CLI.

7.x-1.3
--------------------------------------------------------------------------------
_Release Date: 2019-11-19_

- Modified cache tags on views to be more apt to invalidation when content is edited.
- Use UTC_TIMESTAMP() instead of NOW().

7.x-1.2
--------------------------------------------------------------------------------
_Release Date: 2019-06-26_

- Only flush varnish from CLI when specific drush command is run

7.x-1.1
--------------------------------------------------------------------------------
_Release Date: 2019-06-19_

- Changed form alter to only disable form for the cache settings within a view.


7.x-1.0
--------------------------------------------------------------------------------
_Release Date: 2019-06-07_

- Initial Release
