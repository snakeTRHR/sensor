#include<ros/ros.h>
#include<sensor_msgs/Joy.h>
#include"dozap/msg/button.h"

dozap::button data;

void joy_callback(const sensor_msgs::Joy &joy_msgs){
    data.move = joy_msg.axes[3];
    data.rotation_right = joy_msg.buttons[9];
    data.rotation_left = joy_msg.buttons[8];
}

int main(int argc, char **argv){
    ros::init(argc, argv, "controller");
    ros::NodeHandle n;
    ros::Publisher controller_pub = n.advertise<dozap::button>("controller_info", 1000);
    ros::Subscriber joy_sub = n.advertise("joy", 10, joy_callback);
    ros::Rate loop_rate(10);

    while(ros::ok()){
        controller_pub.publish(data);
        ros::SpinOnce();
        loop_rate.sleep();
    }
    return 0;
}
