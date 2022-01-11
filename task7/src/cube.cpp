#include "cuboid.cpp"

class cube final : public cuboid{
private:
    int length;
public:
    cube(int x) : cuboid(x,x,x){}
    double volume() const override{
        return length*length*length;
    }
    double area() const override{
        return 6 * (length*length);
    }
};