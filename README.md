Features 101 - A beginners guide to configuration management
================================================================================

This repository contains the demonstration site used for Stuart's Drupal South
2014 talk.

[Drush (DRUpal SHell)](https://github.com/drush-ops/drush) is required to build
a usable codebase from this repository with the following command:

`drush make https://raw.github.com/Realityloop/Features101/7.x-1.x/stub.make features101`

More information on this can be found at: http://rl.cm/features101



Quickstart
--------------------------------------------------------------------------------

The following command can be used to install the site with the Featues 101
install profile, setup the default configuration (as per the video demo),
prepopulate the site with content and log you in as UID 1:

`drush si features101 -y; drush en features101_defaults -y; drush genc 1 --types=gallery; drush genc 50 --types=image; drush uli`

Note: The command should be run from within an existingly configured site
directory. i.e., sites/
