//
// Created by dudud on 13/12/2021.
//

#include "matrix.h"
#include "genericmatrix.h"

std::ostream& operator<<(std::ostream& out, const leic::dmatrix& m) {
    for(int i = 0; i < m.getLines(); i++){
        out << "[";
        for(int j = 0; j < m.getCols(); j++){
            out << m.at(i,j);
            if(j!=m.getCols()-1){
                out << ",";
            }
        }
        out << "]" << std::endl;
    }
    return out;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const generic::genericmatrix<T>& m) {
    for(int i = 0; i < m.getLines(); i++){
        out << "[";
        for(int j = 0; j < m.getCols(); j++){
            out << m.at(i,j);
            if(j!=m.getCols()-1){
                out << ",";
            }
        }
        out << "]" << std::endl;
    }
    return out;
}

//missing 5.3 = operator

int main(){
    int n;

    generic::genericmatrix<char> charM(11,11,'b');
    charM.fill_diagonal('.');
    std::cout << charM;
    std::cout << "---------------" << std::endl;

    leic::dmatrix m(7,10);
    m.fill_diagonal(10);
    m.transpose();
    std::cout << m;

    std::cout << "Enter N : ";
    std::cin >> n;
    leic::dmatrix mI = leic::dmatrix::identity(n);
    std::cout << "---------------" << std::endl;
    std::cout << mI;


    return 0;
}