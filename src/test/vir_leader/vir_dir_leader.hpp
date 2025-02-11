/*
 * @------------------------------------------1: 1------------------------------------------@
 * @Author: lee-shun
 * @Email: 2015097272@qq.com
 * @Date: 2020-02-12 23:23:34
 * @Organization: BIT-CGNC, fixed_wing_group
 * @Description:  
 *  本程序是虚拟领机，领机从西向东按照一定的速度飞行
 * @------------------------------------------2: 2------------------------------------------@
 * @LastEditors  : lee-shun
 * @LastEditors_Email: 2015097272@qq.com
 * @LastEditTime : 2020-02-13 10:24:59
 * @LastEditors_Organization: BIT-CGNC, fixed_wing_group
 * @LastEditors_Description:  
 * @------------------------------------------3: 3------------------------------------------@
 */

#ifndef VIR_DIR_LEADER_HPP
#define VIR_DIR_LEADER_HPP

#include <ros/ros.h>
#include <iostream>
#include <fixed_wing_formation_control/Leaderstates.h>
#include "../../fixed_wing_lib/mathlib.hpp"
#include "../../fixed_wing_lib/syslib.hpp"

#define LEADER_HOME_LAT 47.3977089
#define LEADER_HOME_LONG 8.5486917
#define LEADER_HOME_ALT 580.00

using namespace std;

class VIR_DIR_LEADER
{
public:
    void run(int argc, char **argv);

private:
    float distance_e;

    fixed_wing_formation_control::Leaderstates leaderstates; /*即将要发布的领机的状态*/
    ros::NodeHandle nh;
    ros::Publisher vir_leader_pub;

    long begin_time;
    float current_time;
    float last_time;

    void ros_sub_pub();
    void show_vir_leader_status();
};

#endif
