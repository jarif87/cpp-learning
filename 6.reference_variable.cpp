#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int c = 22; // global variable
int main()
{
    int a, b, c;
    char hash = '#';
    cout << "Enter the value of a:" << endl;
    cin >> a;
    cout << "Enter the value of b:" << endl;
    cin >> b;
    c = a + b;
    cout << "The sum of a and b is:" << c << endl;
    cout << "The global variable c is:" << ::c << endl; // accessing global variable using scope resolution operator
    cout << string(100, hash) << endl;
    float e = 3.14f;
    long double d = 10.989l;
    cout << string(100, hash) << endl;
    cout << "The value of float variable e is: " << e << endl;
    cout << string(100, hash) << endl;
    cout << "The value of long double variable d is: " << d << endl;
    cout << string(100, hash) << endl;
    cout << "size of float variable e is: " << sizeof(e) << " bytes" << endl;
    cout << string(100, hash) << endl;
    cout << "size of long double variable d is: " << sizeof(d) << " bytes" << endl;

    // reference variable
    float &ref = e;
    cout << "Value of e is: " << e << endl;
    cout << string(100, hash) << endl;
    cout << "The value of reference variable ref is: " << ref << endl;

    cout << string(100, hash) << endl;
    int h = 100;

    cout << "The value of h is: " << (float)h << endl;
    cout << typeid(h).name() << endl;

    cout << string(100, hash) << endl;
    cout << "value of ref is: " << (int)ref << endl;

    return 0;
}