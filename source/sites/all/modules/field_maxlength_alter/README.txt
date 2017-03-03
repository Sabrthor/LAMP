If you have found this module you have probably created a field with a max_length that is no longer valid. You are either unable to store a value since it exceeds max_length, or perhaps you want to shorten the max_length to reduce database size? The field API in Drupal 7 does not allow you to change this property when data is already stored for a field. When trying to edit the max_length property in the admin interface you will encounter the following message:

    There is data for this field in the database. The field settings can no longer be changed.

Or perhaps you encountered the following issue while adding or updating field values programatically:

    PDOException: SQLSTATE[22001]: String data, right truncated: 1406 Data too long for column 'X' at row X

There are multiple solutions here:

- Drop all your data and modify the field max_lenght. Just kidding, this is not an option
- Modifying the field tables manually in phpMyAdmin
- Creating an update hook that alters the field tables
- Installing this module and simply edit the max_length in the admin interface

Tested on D7 and MySQL
This module has been tested on Drupal 7 in combination with MySQL. It has not been tested on other databases such as MariaDB and PostgreSQL
