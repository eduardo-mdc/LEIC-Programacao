#include "ex3.h"

template <typename T>
T max_value(const std::vector<T>& v) {
    T max = v.at(0);
    for(T element : v){
        if(element > max){
            max = element;
        }
    }
    return max;
}

template <typename T>
void norm_values(std::vector<T>& v, T min, T max){
    for(int i = 0; i < v.size(); i++){
        if(v.at(i) < min) v.at(i) = min;
        else if(v.at(i) > max) v.at(i) = max;
    }
}


int main(){

    std::vector<int> iv { 2, -1, 2, 5, 1, 4};
    int imax = max_value(iv);
    norm_values(iv, 0, 3);

    /*
    cout << imax << endl;
    cout << "----------------" << endl;
    for(int element : iv){
        cout << element << endl;
    }
    */
    std::vector<double>dv { -1.2, 0.5, 1.3, 3.2, -0.7, 1.1 };
    double dmax = max_value(dv);
    norm_values(dv, -1.0, 1.0);



}
