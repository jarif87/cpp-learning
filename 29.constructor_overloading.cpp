#include <iostream>
#include <string>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1, c2(3, 4), c3(5);
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}