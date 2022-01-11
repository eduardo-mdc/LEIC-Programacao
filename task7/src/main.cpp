#include <iostream>
#include "erasmus_student.cpp"

int main() {
    person p(123, "Matias Oliveira");
    student s(124, "Maria Oliveira", "LEIC");
    erasmus_student es(125, "John Zorn", "LEIC", "United States");
    p.print(std::cout);
    s.print(std::cout);
    es.print(std::cout);
}
