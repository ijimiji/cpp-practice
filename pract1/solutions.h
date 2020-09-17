#include <cmath>

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
