#include <iostream>
#include <string>
using namespace std;

// Function to concatenate two strings
string concatenateStrings(const string &str1, const string &str2)
{
    return str1 + str2;
}

int sum(int a, int b)
{
    return a + b;
}

// funtction prototype

int multiply(int x, int y);

int main()
{

    string first, second;
    cout << "Enter first string: " << endl;
    getline(cin, first);
    cout << "Enter second string: " << endl;
    getline(cin, second);
    string result = concatenateStrings(first, second);
    cout << "Concatenated String: " << result << endl;
    cout << string(100, '#') << endl;

    int num1, num2;
    cout << "Enter first integer: " << endl;
    cin >> num1;
    cout << "Enter second integer: " << endl;
    cin >> num2;
    int total = sum(num1, num2);
    cout << "Sum: " << total << endl;

    cout << string(100, '#') << endl;

    int x, y;
    cout << "Enter first integer for multiplication: " << endl;
    cin >> x;
    cout << "Enter second integer for multiplication: " << endl;
    cin >> y;
    int product = multiply(x, y);
    cout << "Product: " << product << endl;

    return 0;
}

int multiply(int x, int y)
{
    return x * y;
}