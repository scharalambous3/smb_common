#include "ros/ros.h"
#include <string>
#include <iostream>
#include "std_msgs/Float64.h"
#include <obstacle_publisher/Obstacle.h>

// Publishers and subscribers
ros::Publisher obstacle_pub_;

// Global msg 
obstacle_publisher::Obstacle obstacle_msg_;

// Obstacle params
double radius_, height_, x_, y_;

// Main function
int main(int argc, char **argv)
{
	ros::init(argc, argv, "obstacle_publisher");
	ros::NodeHandle nh("~");

	// Initialize driver parameters
	nh.getParam("radius", radius_);
    nh.getParam("height", height_);
	nh.getParam("x", x_);
    nh.getParam("y", y_);
	
	ros::Rate loop(100);

	// Publisher for obstacles
	obstacle_pub_ = nh.advertise<obstacle_publisher::Obstacle>("/obstacle_params", 10);
	
	while(ros::ok())
	{	
        obstacle_msg_.radius = radius_;
        obstacle_msg_.height = height_;
        obstacle_msg_.x = x_;
        obstacle_msg_.y = y_;
		obstacle_pub_.publish(obstacle_msg_);
		ros::spinOnce();	
		loop.sleep();       
	}
	return 0;
}