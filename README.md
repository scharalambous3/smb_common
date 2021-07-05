# README #

[![Build Status](https://ci.leggedrobotics.com/buildStatus/icon?job=bitbucket_leggedrobotics/smb_common/master)](https://ci.leggedrobotics.com/job/bitbucket_leggedrobotics/job/smb_common/job/master/)

Common packages for the Super Mega Bot robot.  

TROUBLESHOOTING  

Exceptions thrown: `export IGN_IP=127.0.0.1`  
Try:  `export IGN_IP=127.0.0.1`  

TO BE ADDED TO THE ~/.bashrc FILE (OR EXECUTED EVERYTIME IN EACH TERMINAL):

alias connect-smb261='export ROS_MASTER_URI=http://10.0.1.5:11311 ; export ROS_IP=ip route get 10.0.1.5 | awk '"'"'{print $5; exit}'"'"' ; echo "ROS_MASTER_URI and ROS_IP set to " ; printenv ROS_MASTER_URI ; printenv ROS_IP´
