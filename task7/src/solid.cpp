#include <ostream>


class solid{
public:
    virtual double area() const{
        return 0;
    }
    virtual double volume() const{
        return 0;
    }
    virtual double sav() const final{
        if(area() != 0 && volume() != 0) return area()/volume();
        return 0;
    }
    virtual int sides() const{
        return 0;
    }
    virtual void print(std::ostream& out) const {
        out << "Area : " << area() << " Volume : " << volume() << " SAV : " << sav() << " faces : " << sides() << std::endl;
    }
};