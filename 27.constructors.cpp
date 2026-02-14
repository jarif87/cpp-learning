#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(void); // Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Constructor definition outside the class
Complex::Complex(void)
{
    a = 10;
    b = 20;
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();

    return 0;
}