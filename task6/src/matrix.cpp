//
// Created by dudud on 13/12/2021.
//

#include "matrix.h"
using namespace leic;
dmatrix::dmatrix(int lines, int cols) {
    assert(lines > 0 && cols > 0);
    values = new double*[lines];
    double *data = new double[lines * cols];
    for (int i = 0; i < lines; i++) {
        values[i] = data + i * cols;
        for (int j = 0; j < cols; j++) {
            values[i][j] = 0.0;
        }
    }
    this->lines = lines;
    this->cols = cols;
}

dmatrix::~dmatrix() {
    for(int i = 0; i < cols; i++){
        delete values[i];
    }
    delete values;
}

int dmatrix::getLines() const {
    return lines;
}

int dmatrix::getCols() const {
    return cols;
}

double dmatrix::at(int l, int c) const {
    return values[l][c];
}

double &dmatrix::at(int l, int c) {
    return values[l][c];
}

void dmatrix::fill(double v) {
    for(int i = 0; i < lines; i++){
        for(int j = 0; i < cols; j++){
            values[i][j] = v;
        }
    }
}

void dmatrix::fill_diagonal(double v) {
    for(int i = 0; i < lines; i++){
        values[i][i] = v;
    }
}