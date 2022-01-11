#include <cmath>
#include "solid.cpp"


class sphere : public solid{
protected:
double radius;
public:
    sphere(int radius){
        this->radius = radius;
    }
    double volume() const override{
        return (4/3)*(M_PI*(radius*radius*radius));
    }
    double area() const override{
        return 4*(M_PI*(radius*radius));
    }
};