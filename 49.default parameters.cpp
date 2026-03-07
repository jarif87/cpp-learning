#include <iostream>
using namespace std;

template <typename T1 = int, typename T2 = float, typename T3 = char>

class MyClass
{
public:
    T1 a;
    T2 b;
    T3 c;
    MyClass(T1 x, T2 y, T3 z)
    {

        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main()
{
    MyClass<> obj1(10, 3.14, 'A'); // Using default parameters
    obj1.display();

    MyClass<double, double, char> obj2(5.5, 2.71, 'B'); // Using custom parameters
    obj2.display();

    return 0;
}