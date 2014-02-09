core = 7.x
api = 2



; Modules

projects[admin_menu][type] = module
projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc4

projects[adminimal_admin_menu][type] = module
projects[adminimal_admin_menu][subdir] = contrib
projects[adminimal_admin_menu][version] = 1.5

projects[coffee][type] = module
projects[coffee][subdir] = contrib
projects[coffee][version] = 2.0

projects[context][type] = module
projects[context][subdir] = contrib
projects[context][version] = 3.2

projects[ctools][type] = module
projects[ctools][subdir] = contrib
projects[ctools][version] = 1.3

projects[defaultconfig][type] = module
projects[defaultconfig][subdir] = contrib
projects[defaultconfig][version] = 1.0-alpha9
; Fix for empty components - https://drupal.org/node/2100225#comment-8463031
projects[defaultconfig][patch][] = https://drupal.org/files/issues/empty_components-2100225-1.patch
; Fix for undefined index - https://drupal.org/node/2191917#comment-8463071
projects[defaultconfig][patch][] = https://drupal.org/files/issues/hook_isset-2191917-1.patch

projects[devel][type] = module
projects[devel][subdir] = contrib
projects[devel][version] = 1.4

projects[diff][type] = module
projects[diff][subdir] = contrib
projects[diff][version] = 3.2

projects[entity][type] = module
projects[entity][subdir] = contrib
projects[entity][version] = 1.3

projects[entityreference][type] = module
projects[entityreference][subdir] = contrib
projects[entityreference][version] = 1.1

projects[features][type] = module
projects[features][subdir] = contrib
projects[features][version] = 2.0
; Cleaner .info file format - https://drupal.org/node/2155793#comment-8270327
projects[features][patch][] = https://drupal.org/files/issues/cleaner_info-2155793-1.patch

projects[module_filter][type] = module
projects[module_filter][subdir] = contrib
projects[module_filter][version] = 2.0-alpha2

projects[views][type] = module
projects[views][subdir] = contrib
projects[views][version] = 3.7



; Libraries

libraries[profiler][download][type] = get
libraries[profiler][download][url] = http://ftp.drupal.org/files/projects/profiler-7.x-2.0-beta2.tar.gz
