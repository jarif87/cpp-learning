#include <iostream>
#include <string>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

string add(const string &a, const string &b)
{
    return a + b;
}

int volume(double radius, double height)
{
    const double pi = 3.14159;
    return pi * radius * radius * height;
}

int main()
{
    int a, b, result;
    cout << "Integer Addition" << endl;
    cout << "Enter 1st integer: " << endl;
    cin >> a;
    cout << "Enter 2nd integer: " << endl;
    cin >> b;
    result = add(a, b);
    cout << "Sum of integers: " << result << endl;

    cout << string(100, '#') << endl;
    cout << string(100, '#') << endl;
    cout << "String Addition" << endl;
    string str1, str2, strResult;
    cout << "Enter 1st string: " << endl;
    cin >> str1;
    cout << "Enter 2nd string: " << endl;
    cin >> str2;
    strResult = add(str1, str2);
    cout << "Concatenated string: " << strResult << endl;
    cout << string(100, '#') << endl;
    cout << string(100, '#') << endl;

    cout << "Volume of Cylinder Calculation" << endl;
    double radius, height;
    cout << "Enter radius: " << endl;
    cin >> radius;
    cout << "Enter height: " << endl;
    cin >> height;
    double vol = volume(radius, height);
    cout << "Volume of Cylinder: " << vol << endl;
    cout << "End of Program" << endl;

    return 0;
}