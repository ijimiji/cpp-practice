#include <iostream>
#include <vector>
#include <cmath>
#include <string> 

unsigned int maxElement(std::vector<unsigned int> xss){
    unsigned max = xss[0];
    for (unsigned int x : xss){
        if (x > max) max = x;
    } 
    return max;
}

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
    unsigned int n;
    std::cin >> n;
    std::vector<unsigned int> ds = split(n);
    std::string max = std::to_string(maxElement(ds));
    std::cout << max + std::to_string(n) + max << std::endl;
    return 0;
}
