#include <iostream>
#include <string>
using namespace std;

/*
//Friend function declaration
class Box
{
private:
    int a, b, sum;

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
        sum = a + b;
    }

    void printNumber()
    {
        cout << "a: " << a << ", b: " << b << endl;
        cout << string(50, '=') << endl;
        cout << "Sum of a and b: " << sum << endl;
        cout << string(50, '=') << endl;
    }
};

int main()
{
    int x, y;
    const int n = 2;
    Box boxes[n];
    cout << string(50, '=') << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter values for box " << i + 1 << "a:" << endl;
        cin >> x;
        cout << "Enter values for box " << i + 1 << "b:" << endl;
        cin >> y;
        boxes[i].setNumber(x, y);
    }
    cout << string(50, '=') << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Values for box " << i + 1 << ":" << endl;
        boxes[i].printNumber();
    }
    return 0;
}
*/

class Complex
{

private:
    int a;
    int b;
    friend Complex sumComplex(Complex c1, Complex c2); // Friend function declaration

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }

    void printNumber()
    {
        cout << "Complex Number: " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex c1, Complex c2) // Friend function definition
{
    Complex c3;
    c3.setNumber((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main()
{
    Complex c1, c2, sum;
    /*
    c1.setNumber(3, 4);
    c2.setNumber(5, 6);
    c1.printNumber();
    c2.printNumber();
    */

    int x, y;
    cout << "Enter real and imaginary parts for complex number 1: " << endl;
    cout << "Real part: ";
    cin >> x;
    cout << "Imaginary part: ";
    cin >> y;
    c1.setNumber(x, y);
    c1.printNumber();
    cout << "Enter real and imaginary parts for complex number 2: " << endl;
    cout << "Real part: ";
    cin >> x;
    cout << "Imaginary part: ";
    cin >> y;
    c2.setNumber(x, y);
    c2.printNumber();
    sum = sumComplex(c1, c2);
    cout << "Sum of the two complex numbers: ";
    sum.printNumber();

    return 0;
}