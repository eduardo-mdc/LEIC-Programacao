//
// Created by dudud on 13/12/2021.
//
#include <iostream>
#include "coord3d.h";
using namespace std;

std::ostream& operator<<(std::ostream& out, const leic::coord3d& c) {
    out << "(" << c.getX() << "," << c.getY() << "," << c.getZ() << ")";
    return out;
}

int main(){
    leic::coord3d c();
    cout << c << endl;
    return 0;
}