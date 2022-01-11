//
// Created by dudud on 11/01/2022.
//

#include "MovingAverage.h"

MovingAverage::MovingAverage(int window_size) {
    this->window_size = window_size;
}

void MovingAverage::update(int value) {
    if(content.size() >= window_size){
        content.pop_front();
    }
    content.push_back(value);
}

int MovingAverage::current() const {
    int sum;
    for(auto itr = content.begin(); itr != content.end(); itr++){
        sum += *itr;
    }
    return sum/content.size();
}

void MovingAverage::fix_values(int min, int max) {
    for(auto itr = content.begin(); itr != content.end(); itr++) {
        if(*itr < min) *itr = min;
        else if(*itr > max) *itr = max;
    }
}

