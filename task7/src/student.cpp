#include "Person.cpp"

class student : public person{
    protected:
        std::string studentCourse;
    public:
        student(int id,std::string name,std::string course) : person(id,name) {
            this->studentCourse = course;
        };

        std::string course() const {
            return studentCourse;
        }

        virtual void print(std::ostream& out) const override{
            person::print(out);
            out << "Course: " << course() << std::endl;
        }
};

