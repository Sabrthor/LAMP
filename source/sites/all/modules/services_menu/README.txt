
-- SUMMARY --

The menu service module.

For a full description of the module, visit the project page:
http://drupal.org/project/services_menu

To submit bug reports and feature suggestions, or to track changes:
http://drupal.org/project/issues/1199250

-- REQUIREMENTS --

Services module version 3.x 

-- INSTALLATION --

* Install as usual, see http://drupal.org/node/70151 for further information.


-- How to Use  --

Step 1 : Add new endpoint

  Navigate to the path 'admin/structure/services/add'

  1) Enter a "Machine-readable name" (Example : data_api).
  2) Select your "Server" which will be used to handle the requests to this endpoint (Example : Rest).
  3) Enter a "Path to endpoint". This will be part of the URL for your server (Example : data-api).
  4) Click 'save' button.

Step 2 : Edit the newly created Resources, select the 'menu' under "RESOURCE" and save.

Step 3 : Go to path,

   wwww.yoursite.com/[path to endpoint]/menu/[machine name of the menu].json

Example:

   www.yoursite.com/data-api/menu/main-menu.json
