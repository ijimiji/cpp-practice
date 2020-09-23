#include <iostream>
#include <vector>
#include <cmath>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;

template <typename T, typename M>
double FindDistanceBetweenPoints(T A, M B) {
    return sqrt(pow(A[0] - B[0], 2) + pow(A[1] - B[1], 2));
}

template <typename T, typename A>
int CheckIfFirstQuarter(T x, A y) {
    return (x > 0 && y > 0) ? 1 : 0;
}

template <typename T, typename A>
int CheckIfThirdQuarter(T x, A y) {
    return (x < 0 && y < 0) ? 1 : 0;
}

int main() {
    cout << "Enter number of task you want to check ";
    int choice;
    if (!(std::cin >> choice)) {
        cout << "Error. Not vaild input for task number." << endl;
    }
    switch (choice)
    {
        // Variant 12
        // Check if point is in I or III quarter
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

        if (!(x == 0.0 && y == 0.0)) {
            if (CheckIfFirstQuarter(x, y) || CheckIfThirdQuarter(x, y)) {
                cout << "x and y are in first or third quater." << endl;
            }
            else {
                cout << "x and y are not in first nor third quater." << endl;
            }
            break;
        } else {
                cout << "x and y are the center of coordinate plane." << endl;
        }
        break;
    }

    
    // Check if points lie on the same line
    // If not calculate P ans S of given triangle
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

        // Use old syntax to improve legacy support
        std::vector<double> M;  // = { x1, y1 };
        M.push_back(x1);
        M.push_back(y1);
        std::vector<double> L; // = { x2, y2 };
        L.push_back(x2);
        L.push_back(y2);
        std::vector<double> H; // = { x3, y3 };
        H.push_back(x3);
        H.push_back(y3);

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
          // Give russian transliteration of a number
    case 3: {
        int number;
        cout << "Enter your number ";
        if (!(std::cin >> number)) {
            cout << "Error. Not valid input for int number." << endl;
            break;
        }
        if (number > 999 && number < 100) {
            cout << "Number should be in [100, 999]." << endl;
            break;
        }

        // From the beginning to the end 
        // For example 123
        int third_digit = number % 10;       // 1
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

        // Use this array if 2 and 3 part is in [11, 19]
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

        cout << first_pos[first_digit - 1];
        cout << " ";
        if (second_digit == 1) {
            cout << sub_second_pos[third_digit - 1];
            cout << " ";
        }
        else {
            cout << second_pos[second_digit - 2];
            cout << " ";
        }

        if (third_digit != 0 && second_digit != 1) {
            cout << third_pos[third_digit - 1];
        }
        cout << endl;
        break;
    }
          // Eastern calendar
    case 4: {
        string animals[] = {
            "monkey",
            "chicken",
            "dog",
            "pig",
            "rat",
            "bull",
            "tiger",
            "rabbit",
            "dragon",
            "snake",
            "horse",
            "sheep"
        };
        string colors[] = {
            "white",
            "white",
            "blue",
            "blue",
            "green",
            "green",
            "red",
            "red",
            "yellow",
            "yellow"
        };
        int year;
        cout << "Enter a year ";
        if (!(std::cin >> year)) {
            cout << "Error. Not valid input for int year." << endl;
            break;
        }
        string animal = animals[year % 12];
        string color = colors[year % 10];
        cout << year << " is a year of a ";
        cout << color << " " << animal << "." << endl;
        break;
    }
          // Tomorrow date
    case 5: {
        int day, month, year;

        cout << "Enter your date (d m y): ";
        if (!(std::cin >> day)) {
            cout << "Error. Not valid input for int day." << endl;
            break;
        }
        if (!(std::cin >> month)) {
            cout << "Error. Not valid input for int month." << endl;
            break;
        }
        if (!(std::cin >> year)) {
            cout << "Error. Not valid input for int year." << endl;
            break;
        }

        day++;

        int days_per_month = 31;
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            days_per_month = 30;
        }
        else if (month == 2) {
            days_per_month = 28;
            if (year % 4 == 0) {
                days_per_month = 29;
                if (year % 100 == 0) {
                    days_per_month = 28;
                    if (year % 400 == 0) {
                        days_per_month = 29;
                    }
                }
            }
        }
        if (day > days_per_month) {
            day = 1;
            month++;
            if (month > 12) {
                month = 1;
                year++;
            }
        }
        cout << "Завтра " << day << ".";
        cout << month << "." << year << endl;
        break;
    }
    default: {
        cout << "No such task is present." << endl;
        break;
    }
}

return 0;
}
