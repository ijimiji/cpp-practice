#include <cmath>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

double round(double x, int n) {
    int d = 0;
    if ((x * pow(10, n + 1)) - (floor(x * pow(10, n))) > 4) d = 1;
    x = (floor(x * pow(10, n)) + d) / pow(10, n);
    return x;
}

template<typename Function>
string test_function(double x, double y, double z, double answer, Function func)
{
    return round(func(x, y, z), 6) == answer ? "Function works correctly" : "Function works incorrectly";
}

double solve_task_1(double x, double y, double  z) {
    double part1, part2, part3, part4;
    part1 = pow(y, cbrt(abs(x)));
    part2 = pow(cos(y), 3) / (exp(abs(x - y)) + x / 2);
    part3 = abs(x - y);
    part4 = 1 + pow(sin(z), 2) / sqrt(x + y);
    return part1 + part2 * part3 * part4;
}

double solve_task_2_a(double x, double y, double z) {
    double part1, part2;
    part1 = 2.0 * tan(x);
    part2 = 1.0 - 2.0 * cos(3.0 * y) + tan(z);
    return part1 / part2;
}
double solve_task_2_b(double x, double y, double z) {
    double part1, part2, part3;
    part1 = 1.0 + y;
    part2 = sin(x) / 2.0;
    part3 = cos(4.0 * z);
    return part1 * part2 - part3;
}

double solve_task_3_a(double x, double y, double z) {
    double part1, part2;
    part1 = 2.0 * tan(x / 2.0);
    part2 = 1.0 + 2.0 * cos(3.0 * y) + tan(z / 2.0);
    return part1 / part2;
}
double solve_task_3_b(double x, double y, double z) {
    double part1, part2;
    part1 = 1 + abs(y);
    part2 = sin(x) / 2.0 - pow(cos(4.0 * z), 2);
    return part1 * part2;
}

int main() {
    double x, y, z;

    cout << "Testing function from task 1.\n";
    cout << test_function(6.251, 0.827, 25.001, 0.712122, solve_task_1) << "\n";

    cout << "Enter x, y, z for task 2a ";
    cin >> x >> y >> z;
    cout << "The result of task 2a is " << solve_task_2_a(x, y, z) << "\n";

    cout << "Enter x, y, z for task 2b ";
    cin >> x >> y >> z;
    cout << "The result of task 2b is " << solve_task_2_b(x, y, z) << "\n";

    cout << "Enter x, y, z for task 3a ";
    cin >> x >> y >> z;
    cout << "The result of task 3a is " << solve_task_3_a(x, y, z) << "\n";

    cout << "Enter x, y, z for task 3b ";
    cin >> x >> y >> z;
    cout << "The result of task 3b is " << solve_task_3_b(x, y, z) << "\n";

    return 0;
}