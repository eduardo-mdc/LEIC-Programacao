#include <iostream>
#include "sphere.cpp"
#include "cube.cpp"

int main(){
    sphere s(1.0);
    cuboid c1(1.0, 2.0, 3.0);
    cube c2(2.5);

    s.print(std::cout);
    c1.print(std::cout);
    c2.print(std::cout);
    return 0;
}