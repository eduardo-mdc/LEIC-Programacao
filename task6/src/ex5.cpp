//
// Created by dudud on 13/12/2021.
//

#include "matrix.h"

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

int main(){
    leic::dmatrix m(7,10);
    m.fill_diagonal(10);
    m.transpose();
    std::cout << m;
    return 0;
}