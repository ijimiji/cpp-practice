#include <vector>
#include <iostream>

int RandInt(int min, int max) {
    static bool first = true;
    if (first) {
        srand(time(NULL));
        first = false;
    }
    return min + rand() % ((max + 1) - min);
}

template <typename A>
void printVector(std::vector<A> &xss){
    std::cout << "[" ;
    for (auto x : xss){
        std::cout << x << ((x == xss.end()[-1]) ? "" : ", ") ;
    }
    std::cout << "]" ;
}

template <typename A>
void rfillVector(std::vector<A> &xss, int n){
    for (int i = 0; i < n; ++i){
        xss.push_back(RandInt(-100, 100));
    }
}

template <typename A>
void fillVectorMinMax(std::vector<A> &xss, int n){
    for (int i = 0; i < n; ++i){
        xss.push_back(i);
    }
}

template <typename A>
void fillVectorMaxMin(std::vector<A> &xss, int n){
    for (int i = 0; i < n; ++i){
        xss.push_back(n-i);
    }
}
