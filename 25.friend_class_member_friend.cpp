#include <iostream>
#include <string>
using namespace std;

// Forward declaration of ComplexNumber class
// to be used in Calculator class
// before its definition

class Calculator;
class ComplexNumber;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealPart(ComplexNumber, ComplexNumber);
    int sumImaginaryPart(ComplexNumber, ComplexNumber);
};

class ComplexNumber
{
private:
    int a, b;
    friend int Calculator::sumRealPart(ComplexNumber, ComplexNumber);
    friend int Calculator::sumImaginaryPart(ComplexNumber, ComplexNumber);

public:
    void setNumbers(int real, int imaginary)
    {
        a = real;
        b = imaginary;
    }
    void printNumber()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int Calculator::sumRealPart(ComplexNumber c1, ComplexNumber c2)
{
    return c1.a + c2.a;
}

int Calculator::sumImaginaryPart(ComplexNumber c1, ComplexNumber c2)
{
    return c1.b + c2.b;
}

int main()
{
    Calculator calc;
    ComplexNumber c1, c2;
    int x, y, num1, num2;
    cout << string("=", 100) << endl;
    cout << "Enter First Real Number: " << endl;
    cin >> x;
    cout << "Enter First Imaginary Number: " << endl;
    cin >> y;
    c1.setNumbers(x, y);
    c1.printNumber();

    cout << "Enter Second Real Number: " << endl;
    cin >> num1;
    cout << "Enter Second Imaginary Number: " << endl;
    cin >> num2;
    c2.setNumbers(num1, num2);
    c2.printNumber();
    cout << string(100, '=') << endl;

    cout << "Sum of real parts: " << calc.sumRealPart(c1, c2) << endl;
    cout << "Sum of imaginary parts: " << calc.sumImaginaryPart(c1, c2) << endl;
    cout << string(100, '=') << endl;
    cout << "End of Program" << endl;

    // ComplexNumber c1, c2;
    // c1.setNumbers(3, 4);
    // c2.setNumbers(5, 6);

    // Calculator calc;
    // cout << "Sum of real parts: " << calc.sumRealPart(c1, c2) << endl;
    // cout << "Sum of imaginary parts: " << calc.sumImaginaryPart(c1, c2) << endl;

    return 0;
}