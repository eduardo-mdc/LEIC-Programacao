//
// Created by dudud on 13/12/2021.
//

#ifndef TASK6_MATRIX_H
#define TASK6_MATRIX_H

#include <iostream>
#include <cassert>
namespace leic {
    class dmatrix {
    private:
        double **values;
        int lines,cols;
    public:
        dmatrix(int lines, int cols);
        ~dmatrix();
        int getLines() const;
        int getCols() const;
        double at(int l, int c) const;
        double& at(int l, int c);
        void fill(double v);
        void fill_diagonal(double v);
        void transpose();
        static dmatrix identity(int n);
        dmatrix(const dmatrix& m);
        dmatrix& operator=(const dmatrix& m);
    };
}


#endif //TASK6_MATRIX_H
