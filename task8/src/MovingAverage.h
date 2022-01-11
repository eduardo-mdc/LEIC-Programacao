
#ifndef TASK8_MOVINGAVERAGE_H
#define TASK8_MOVINGAVERAGE_H


#include <string>
#include <deque>

class MovingAverage {
private:
    std::deque<int> content;
    int window_size;
public:
    MovingAverage(int window_size);
    void update(int value);
    int current() const;
    void fix_values(int min,int max)
};


#endif //TASK8_MOVINGAVERAGE_H
