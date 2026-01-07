#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int fibonacci(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    // cout << "Hello, World!" << endl;

    // cout << "Enter a number to compute its factorial: " << endl;
    // int number;
    // cin >> number;
    // int result = factorial(number);
    // cout << "Factorial of " << number << " is " << result << endl;

    cout << "Enter a number to compute its Fibonacci value: " << endl;
    int number;
    cin >> number;
    int result = fibonacci(number);
    cout << "Fibonacci of " << number << " is " << result << endl;

    return 0;
}