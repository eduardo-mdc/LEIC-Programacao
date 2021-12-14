//
// Created by dudud on 13/12/2021.
//

#include "genericmatrix.h"


/*
using namespace generic;

template <typename T>
genericmatrix<T>::genericmatrix(int lines, int cols, const T& initial_value){
    assert(lines > 0 && cols > 0);
    //values = new T*[lines];
    //T *data = new T[lines * cols];

    //Allocating memory with malloc.
    values = (T **)malloc(lines * sizeof(T*));
    for(int i = 0; i < lines; i++) values[i] = (T*)malloc(cols*sizeof (T));

    for (int i = 0; i < lines; i++) {
        //values[i] = data + i * cols; // part of new allocation
        for (int j = 0; j < cols; j++) {
            values[i][j] = initial_value;
        }
    }
    this->lines = lines;
    this->cols = cols;
}

template <typename T>
genericmatrix<T>::genericmatrix(const genericmatrix<T> &m) {
    //Allocating memory with malloc.
    lines = m.getLines();
    cols = m.getCols();
    values = (T **)malloc(lines * sizeof(T*));
    for(int i = 0; i < lines; i++) values[i] = (T*)malloc(cols*sizeof (T));

    for (int i = 0; i < lines; i++) {
        //values[i] = data + i * cols; // part of new allocation
        for (int j = 0; j < cols; j++) {
            values[i][j] = m.at(i,j);
        }
    }
}

template <typename T>
genericmatrix<T>::~genericmatrix<T>() {
    for(int i = 0; i < cols; i++){
        //delete values[i];
        free(values[i]);
    }
    free(values);
    // delete values;
}

//genericmatrix<T>::genericmatrix<T>& operator=(const genericmatrix<T>& m);

template <typename T>
int genericmatrix<T>::getLines() const {
    return lines;
}

template <typename T>
int genericmatrix<T>::getCols() const {
    return cols;
}

template <typename T>
T genericmatrix<T>::at(int l, int c) const {
    return values[l][c];
}

template <typename T>
T &genericmatrix<T>::at(int l, int c) {
    return values[l][c];
}

template <typename T>
void genericmatrix<T>::fill(T v) {
    for(int i = 0; i < lines; i++){
        for(int j = 0; i < cols; j++){
            values[i][j] = v;
        }
    }
}

template <typename T>
void genericmatrix<T>::fill_diagonal(T v) {
    for(int i = 0; i < lines; i++){
        values[i][i] = v;
    }
}

template <typename T>
void genericmatrix<T>::transpose() {

    T tempV;

    T **transpose = (T **)malloc(cols * sizeof(T*));
    for(int i = 0; i < cols; i++) transpose[i] = (T*)malloc(lines*sizeof (T));


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
    values = (T **)malloc(cols * sizeof(T*));
    for(int i = 0; i < cols; i++) values[i] = (T*)malloc(lines*sizeof (T));


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
 */