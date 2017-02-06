#########################################################################
#                                                                       #
#                       BEFORE INSTALL SCRIPTS CD                       #
#                                                                       #
#########################################################################
#!/bin/bash

# Umount EFS
umount /var/www/html/kirana11/sites/default/files

# Remove the entire kirana application
rm -rf /var/www/html/kirana11

# Remove the httpd configuration
rm -rf /etc/httpd/conf.d/kirana11.conf
