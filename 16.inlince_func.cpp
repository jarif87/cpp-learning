#include <iostream>
#include <string>
using namespace std;

// int product(int x, int y)
// {
//     return x * y;
// }
/*
// Inline function definition
inline int product(int x, int y)
{
    return x * y;
}
*/

// int helloproduct(int x, int y)
// {
//     static int count = 0;
//     count = count + 2;
//     return x + y * count;
// }

// constant arguments
int helloproduct(const int x, const int y)
{

    return x * y;
}

int main()
{
    // int a, b;
    // cout << "Enter two integers: " << endl;
    // cin >> a >> b;
    // int sum = a + b;
    // cout << "The sum of " << a << " and " << b << " is " << sum << endl;

    /* // Uncomment to test the product function

    cout << "Enter 1st integer: " << endl;
    cin >> a;
    cout << "Enter 2nd integer: " << endl;
    cin >> b;
    int prod = product(a, b);
    cout << "The product of " << a << " and " << b << " is " << prod << endl;
    */

    /*
    // Testing inline function
    cout << string(100, '#') << endl;
    cout << "Testing Inline Function" << endl;
    cout << "Enter 1st integer: " << endl;
    cin >> a;
    cout << "Enter 2nd integer: " << endl;
    cin >> b;
    int prod = product(a, b);
    cout << "The product of " << a << " and " << b << " is " << prod << endl;


    */

    /*
    cout << string(100, '#') << endl;
    cout << "Testing Static Variable in Function" << endl;
    int a, b;
    cout << "Enter 1st integer: " << endl;
    cin >> a;
    cout << "Enter 2nd integer: " << endl;
    cin >> b;
    int res1 = helloproduct(a, b);
    cout << "Result 1: " << res1 << endl;
    */

    cout << string(100, '#') << endl;

    cout << "Testing Constant Arguments in Function" << endl;
    int a, b;
    cout << "Enter 1st integer: " << endl;
    cin >> a;
    cout << "Enter 2nd integer: " << endl;
    cin >> b;
    int res1 = helloproduct(a, b);
    cout << "Result 1: " << res1 << endl;

    return 0;
}