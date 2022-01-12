#include <deque>
#include <list>

template<typename T>
void remove_all(std::deque<T> &dq, const T &v) {
    for(auto itr = dq.begin(); itr < dq.begin(); itr++){
        if(*itr = v) dq.erase(itr);
    }
}

template <typename T>
void reverse(std::deque<T>& dq) {
    auto itr1 = dq.begin();
    auto itr2 = -- dq.end();
    while (itr1 < itr2) {
        T temp = *itr2;
        *itr2 = *itr1;
        *itr1 = temp;
        itr1++;
        itr2--;
    }
    dq.end() = itr2;
    dq.begin() = itr1;
}

template <typename T>
void reverse(std::list<T>& l) {
    auto itr1 = l.begin();
    auto itr2 = -- l.end();
    while (itr1 != itr2) {
        T temp = *itr2;
        *itr2 = *itr1;
        *itr1 = temp;
        itr1++;
        itr2--;
    }
    l.end() = itr2;
    l.begin() = itr1;
}


int main(){
    return 0;

}