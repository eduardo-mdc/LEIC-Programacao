//
// Created by dudud on 13/12/2021.
//

#include <iostream>
#include "coord3d.h";

using namespace leic;

coord3d::coord3d() {
    x = 0;
    y = 0;
    z = 0;
}
coord3d::coord3d(const coord3d& c) {
    x = c.x;
    y = c.y;
    z = c.z;
}
coord3d::coord3d(int vx, int vy, int vz) {
    x = vx;
    y = vy;
    z = vz;
}

int coord3d::getX() const {
    return x;
}
int coord3d::getY() const {
    return y;
}
int coord3d::getZ() const {
    return z;
}

void coord3d::setX(int vx) {
    x = vx;
}
void coord3d::setY(int vy) {
    y = vy;
}
void coord3d::setZ(int vz) {
    z = vz;
}





#include "coord3d.h"
