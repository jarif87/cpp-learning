#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>
using namespace std;

int main()
{
    // Using predefined constant
    cout << "Value of PI: " << 3.14159 << endl;
    cout << string(100, '#') << endl;
    // Defining a constant using const keyword
    const int DAYS_IN_WEEK = 7;
    cout << "Days in a week: " << DAYS_IN_WEEK << endl;

    // Attempting to modify a constant (uncommenting the next line will cause a compilation error)
    // DAYS_IN_WEEK = 8;
    cout << string(100, '#') << endl;
    cout << typeid(DAYS_IN_WEEK).name() << endl;

    int a = 10, b = 20, c = 3088;
    cout << string(100, '#') << endl;
    cout << "Value of a , b , c : " << a << " , " << b << " , " << c << endl;
    cout << string(100, '#') << endl;
    cout << "Value of a,b,c after setw manipulation: " << setw(5) << a << "," << setw(5) << b << "," << setw(5) << c << endl;
    cout << string(100, '#') << endl;
    cout << "Operator precedence demonstration:" << endl;
    int m = 10, n = 20, p = 30;
    int result = m + n * p; // Multiplication has higher precedence than addition
    cout << "Result of m + n * p = " << result << endl;
    cout << string(100, '#') << endl;
    int total = (m + n) * p; // Parentheses change the order of evaluation
    cout << "Result of (m + n) * p = " << total << endl;
    cout << string(100, '#') << endl;
    int final_total = ((((m / n) + p) - n) * m);
    cout << "Result of ((((m/n)+p)-n)*m) = " << final_total << endl;
    cout << string(100, '#') << endl;
    cout << "End of the program." << endl;
    return 0;
}