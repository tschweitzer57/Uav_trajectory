#include <iostream>
#include <iomanip>
#include "uav.h"
using namespace std;

Uav::Uav(const int x, const int y, const int z)
    : x_pose(x), y_pose(y), z_pose(z)
{}

void Uav::setPose(const int x, const int y, const int z)
{
    x_pose = x;
    y_pose = y;
    z_pose = z;
}

void Uav::printPose() const
{
    cout << "X value : " << x_pose << endl;
    cout << "Y value : " << y_pose << endl;
    cout << "Z value : " << z_pose << endl;
}