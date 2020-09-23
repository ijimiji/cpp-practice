#include <string>
#include <cmath>

double round(double x, int n) {
    int d = 0;
    if ((x * pow(10, n + 1)) - (floor(x * pow(10, n))) > 4) d = 1;
    x = (floor(x * pow(10, n)) + d) / pow(10, n);
    return x;
}

template<typename Function>
std::string test_function(double x, double y, double z, double answer, Function func)
{
    return round(func(x, y, z), 6) == answer ? "Function works correctly" : "Function works incorrectly";
}