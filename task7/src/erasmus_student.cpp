#include "student.cpp"

class erasmus_student : student{
private:
    std::string originCountry;
public:
    erasmus_student(int id, std::string name, std::string course, std::string country) : student(id,name,course){
        this->originCountry = country;
    }

    std::string country() const {
        return originCountry;
    }

    virtual void print(std::ostream& out) const override{
        student::print(out);
        out << "Country: " << country() << std::endl;
    }
};