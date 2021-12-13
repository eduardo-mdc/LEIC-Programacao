//
// Created by dudud on 13/12/2021.
//

#include "matrix.h"
using namespace leic;

dmatrix::dmatrix(int lines, int cols) {
    assert(lines > 0 && cols > 0);
    //values = new double*[lines];
    //double *data = new double[lines * cols];

    //Allocating memory with malloc.
    values = (double **)malloc(lines * sizeof(double*));
    for(int i = 0; i < lines; i++) values[i] = (double*)malloc(cols*sizeof (double));

    for (int i = 0; i < lines; i++) {
        //values[i] = data + i * cols; // part of new allocation
        for (int j = 0; j < cols; j++) {
            values[i][j] = 0.0;
        }
    }
    this->lines = lines;
    this->cols = cols;
}

dmatrix::dmatrix(const dmatrix &m) {
    //Allocating memory with malloc.
    lines = m.getLines();
    cols = m.getCols();
    values = (double **)malloc(lines * sizeof(double*));
    for(int i = 0; i < lines; i++) values[i] = (double*)malloc(cols*sizeof (double));

    for (int i = 0; i < lines; i++) {
        //values[i] = data + i * cols; // part of new allocation
        for (int j = 0; j < cols; j++) {
            values[i][j] = m.at(i,j);
        }
    }
}

dmatrix::~dmatrix() {
    for(int i = 0; i < cols; i++){
        //delete values[i];
        free(values[i]);
    }
    free(values);
   // delete values;
}

//dmatrix::dmatrix& operator=(const dmatrix& m);


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

void dmatrix::transpose() {

    double tempV;

    double **transpose = (double **)malloc(cols * sizeof(double*));
    for(int i = 0; i < cols; i++) transpose[i] = (double*)malloc(lines*sizeof (double));


    //--fazer matrix transposta;
    for (int i = 0; i < lines; i++){
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = values[i][j];

        }
    }

    //--free a matrix de value
    for(int i = 0; i < lines; i++){
        //delete values[i];
        free(values[i]);
    }
    free(values);
    // delete values;


    //re-alocar a matrix valores;
    values = (double **)malloc(cols * sizeof(double*));
    for(int i = 0; i < cols; i++) values[i] = (double*)malloc(lines*sizeof (double));


    //colocar os valores de transpose em values
    for (int i = 0; i < cols; i++){
        for (int j = 0; j < lines; j++) {
            values[i][j] = transpose[i][j];
        }
    }


    //free a transpose
    for(int i = 0; i < cols; i++){
        //delete values[i];
        free(transpose[i]);
    }
    free(transpose);
    // delete values;

    tempV = cols;
    cols = lines;
    lines = tempV;

}

dmatrix dmatrix::identity(int n) {
    dmatrix mat(n,n);
    mat.fill_diagonal(1);
    return mat;
}

