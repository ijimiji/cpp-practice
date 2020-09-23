#include <iostream>
#include "helpers.h"
#include "solutions.h"

using std::cout;
using std::cin;

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