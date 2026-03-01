
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Base1
{
private:
    int x;

public:
    void greet()
    {
        cout << "Hello from Base1" << endl;
    }
};

class Base2
{
private:
    int y;

public:
    void greet()
    {
        cout << "Hello from Base2" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int z;

public:
    void greet()
    {
        Base2::greet(); // Resolves ambiguity by specifying which greet() to use
    }
};

int main()
{
    Base1 b1;
    Base2 b2;
    Derived d;
    b1.greet(); // Calls Base1's greet() function
    b2.greet(); // Calls Base2's greet() function
    d.greet();  // Calls Derived's greet() function, which resolves ambiguity by calling Base2's greet()
    return 0;
}