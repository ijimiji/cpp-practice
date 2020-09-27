#include <iostream>
#include <vector>
#include <cmath>

std::vector<unsigned int> split(unsigned int n){
    std::vector<unsigned int> ds;
    while (n>0){
        ds.push_back(n%10);
        n /= 10;
    }
    return ds;
}

unsigned int count(unsigned int i) {
 unsigned int ret=1;
 while (i/=10) ret++;
 return ret;
}

int main(){
    unsigned int max, min, n, s =0;
    std::vector<unsigned int> digits;

    std::cin >> min;
    std::cin >> max;

    if (max < min) std::swap(min, max);

    for (unsigned int i = min; i <= max; i++){
        
        digits = split(i);
        
        n = count(i);

        for (int digit : digits) s += pow(digit, n);

        if (i == s) std::cout << i << std::endl;

        digits.empty();
        s = 0;
    }
    return 0;
}
