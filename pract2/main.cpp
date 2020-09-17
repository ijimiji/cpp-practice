#include <iostream>
#include <vector>
#include <cmath>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

template <typename T, typename M>
int FindDistanceBetweenPoints(T A, M B) {
    return sqrt(pow(A[0] - B[0], 2) + pow(A[1] - B[1], 2));
}

template <typename T, typename A>
int CheckIfFirstQuater(T x, A y) {
    return (x > 0 && y > 0) ? 1 : 0;
}

template <typename T, typename A>
int CheckIfThirdQuater(T x, A y) {
    return (x < 0 && y < 0) ? 1 : 0;
}

int main() {
    cout << "Enter digit of task you want to check ";
    int choice;
    if (!(std::cin >> choice)) {
        cout << "Error. Not vaild input for task digit." << endl;
    }
    switch (choice)
    {

    case 1: {
        double x, y;
        cout << "Enter x ";
        if (!(std::cin >> x)) {
            cout << "Error. Not valid input for double x." << endl;
            break;
        }

        cout << "Enter y ";
        if (!(std::cin >> y)) {
            cout << "Error. Not valid input for double y." << endl;
            break;
        }

        if (CheckIfFirstQuater(x, y) || CheckIfThirdQuater(x, y)) {
            cout << "x and y are in first or third quater." << endl;
        }
        else {
            cout << "x and y are not in first nor third quater." << endl;
        }
        break;
    }
    case 2: {
        double x1, y1;
        double x2, y2;
        double x3, y3;

        cout << "Enter x1 for point M ";
        if (!(std::cin >> x1)) {
            cout << "Error. Not valid input for double x1." << endl;
            break;
        }
        cout << "Enter y1 for point M ";
        if (!(std::cin >> y1)) {
            cout << "Error. Not valid input for double y1." << endl;
            break;
        }
        cout << "Enter x2 for point L ";
        if (!(std::cin >> x2)) {
            cout << "Error. Not valid input for double x2." << endl;
            break;
        }
        cout << "Enter y2 for point L ";
        if (!(std::cin >> y2)) {
            cout << "Error. Not valid input for double y2." << endl;
            break;
        }
        cout << "Enter x3 for point H ";
        if (!(std::cin >> x3)) {
            cout << "Error. Not valid input for double x3." << endl;
            break;
        }
        cout << "Enter y3 for point H ";
        if (!(std::cin >> y3)) {
            cout << "Error. Not valid input for double y3." << endl;
            break;
        }

        std::vector<double> M = { x1, y1 };
        std::vector<double> L = { x2, y2 };
        std::vector<double> H = { x3, y3 };

        double d1 = FindDistanceBetweenPoints(M, L);
        double d2 = FindDistanceBetweenPoints(L, H);
        double d3 = FindDistanceBetweenPoints(M, H);

        if (d1 + d2 == d3) {
            cout << "Points are on the same line" << endl;
        }
        else {
            cout << "Points are not on the same line" << endl;
            double p = d1 + d2 + d3;
            cout << "P = " << p << endl;
            p = p / 2;
            double s = sqrt(p * (p - d1) * (p - d2) * (p - d3));
            cout << "S = " << s << endl;
        }
        break;
    }
    case 3: {
        int number;
        cout << "Enter your number ";
        if (!(std::cin >> number)) {
            cout << "Error. Not valid input for int number." << endl;
            break;
        }

        // From the beginning to the end 
        // For example 123
        int third_digit = number % 10; // 1
        int second_digit = number / 10 % 10; // 2
        int first_digit = number / 100 % 10; // 3
        cout << first_digit << second_digit << third_digit << endl;
        string first_pos[] = {
            "сто",
            "двести",
            "триста",
            "четыреста",
            "пятьсот",
            "шестьсот",
            "семьсот",
            "восемьсот",
            "девятьсот"
        };
        string sub_second_pos[] = {
            "одиннадцать",
            "двенадцать",
            "тринадцать",
            "четырнадцать",
            "пятнадцать",
            "шестнадцать",
            "семнадцать",
            "восемнадцать",
            "девятнадцать"
        };

        string second_pos[] = {
            "двадцать",
            "тридцать",
            "сорок",
            "пятьдесят",
            "шестьдесят",
            "семьдесят",
            "восемьдесят",
            "девяносто"
        };
        string third_pos[] = {
            "один",
            "два",
            "три",
            "четыре",
            "пять",
            "шесть",
            "семь",
            "восемь",
            "девять",
        };

        cout << first_pos[first_digit-1];
            cout << " ";
        if (second_digit == 1) {
            cout << sub_second_pos[third_digit-1];
            cout << " ";
        }
        else { 
            cout << second_pos[second_digit-2]; 
            cout << " ";
            }

        if (third_digit != 0 && second_digit != 1) {
            cout << third_pos[third_digit-1];
        }
        cout << endl;
        break;
    }

    default:
        cout << "No such task is present." << endl;
        break;
    }

    return 0;
}
