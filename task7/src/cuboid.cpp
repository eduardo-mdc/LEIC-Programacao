#include "solid.cpp"

class cuboid : public solid{
protected:
    double lx,ly,lz;
public:
    cuboid(int lx, int ly, int lz){
        this->lx = lx;
        this->ly = ly;
        this->lz = lz;
    }
    double volume() const override {
        return lx*ly*lz;
    }
    double area() const override {
        return 2 * (lx * ly + lx * lz + ly * lz);
    }
    int sides() const override{
        return 6;
    }
};
