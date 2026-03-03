#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    void getData()
    {
        cout << "The real part is: " << real << endl;
        cout << "The imaginary part is: " << imag << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imag = b;
    }
};

int main()
{
    Complex c1;
    Complex *ptr = &c1; // pointer to object

    ptr->setData(3, 4); // using pointer to set data
    ptr->getData();     // using pointer to get data

    return 0;
}