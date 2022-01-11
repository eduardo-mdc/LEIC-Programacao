#include <iostream>
#include <string>

class person {
protected:
    int pid;
    std::string pname;
public:
    person(int id, const std::string& name)
      : pid(id), pname(name) { }
    int id() const {
      return pid;
    }
    const std::string& name() const {
      return pname;
    }
    virtual void print(std::ostream& out) const {
      out << "ID: " << pid << std::endl
          << "Name: " << pname << std::endl;
    }
};