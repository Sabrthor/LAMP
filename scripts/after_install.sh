#########################################################################
#                                                                       #
#                       AFTER INSTALL SCRIPTS CD                        #
#                                                                       #
#########################################################################
#!/bin/bash

# Change Permissions and Ownership in kirana folder
chmod -R 755 /var/www/html/kirana11
chown -R apache:apache /var/www/html/kirana11

# Change all the sites configuration permissions
find /var/www/html/kirana11 -type f -name "settings.php" -exec chmod 400 {} \;

# Mount EFS
mkdir /var/www/html/kirana11/sites/default/files
mount -t nfs4 -o nfsvers=4.1,rsize=1048576,wsize=1048576,hard,timeo=600,retrans=2 fs-c5e5210c.efs.eu-west-1.amazonaws.com:/ /var/www/html/kirana11/sites/default/files

# Restart httpd service
service php-fpm start
service httpd graceful
