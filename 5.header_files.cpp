#include <iostream> //system header file
using namespace std;

int main()
{
    cout << "Hello, World!" << endl;
    cout << "Operations on C++" << endl;

    // arithmetic operations
    int a = 10, b = 5;
    cout << "Addition: " << a + b << endl;

    // relational operations
    cout << "Is a greater than b? " << (a > b) << endl;

    // logical operations
    bool x = true, y = false;
    cout << "Logical AND: " << (x && y) << endl;

    // bitwise operations
    cout << "Bitwise OR: " << (a | b) << endl;

    // assignment operations
    int c = a;
    cout << "Assigned value of c: " << c << endl;

    // miscellaneous operations
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;

    // conditional operations
    int max = (a > b) ? a : b;
    cout << "Maximum of a and b: " << max << endl;

    // comma operations
    int d;
    d = (a += 2, b += 3, a + b);
    cout << "Result of comma operation: " << d << endl;

    // pointer operations
    int *p = &a;
    cout << "Value pointed by p: " << *p << endl;

    // increment and decrement operations
    cout << "Increment a: " << ++a << endl;
    cout << "Decrement b: " << --b << endl;

    // comparison operations
    cout << "Is a equal to b? " << (a == b) << endl;
    cout << "Is a not equal to b? " << (a != b) << endl;
    cout << "Is a less than or equal to b? " << (a <= b) << endl;
    cout << "Is a greater than or equal to b? " << (a >= b) << endl;
    cout << "Is a less than b? " << (a < b) << endl;
    cout << "Is a greater than b? " << (a > b) << endl;

    // logical operations
    cout << "Logical OR: " << (x || y) << endl;
    cout << "Logical NOT of x: " << (!x) << endl;
    cout << "Logical NOT of y: " << (!y) << endl;
    cout << "Logical XOR: " << (x != y) << endl;
    cout << "logical Operatiors: " << ((a == b) && (a > b)) << endl;
    cout << "logical Operatiors: " << ((a == b) || (a > b)) << endl;

    return 0;
}