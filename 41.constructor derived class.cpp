#include <iostream>
using namespace std;

class Base1
{
private:
    int a;

public:
    Base1(int x)
    {
        a = x;
        cout << "Base1 constructor called with value: " << a << endl;
    }

    void printDataBase1()
    {
        cout << "Value in Base1: " << a << endl;
    }
};

class Base2
{
private:
    int b;

public:
    Base2(int y)
    {
        b = y;
        cout << "Base2 constructor called with value: " << b << endl;
    }

    void printDataBase2()
    {
        cout << "Value in Base2: " << b << endl;
    }
};

class Derived : public Base1, public Base2
{
    int deriveddata1, deriveddata2;

public:
    Derived(int x, int y, int z, int w) : Base1(x), Base2(y)
    {
        deriveddata1 = z;
        deriveddata2 = w;
        cout << "Derived constructor called with values: " << deriveddata1 << " and " << deriveddata2 << endl;
    }

    void printDataDerived()
    {
        cout << "Value in Derived: " << deriveddata1 << " and " << deriveddata2 << endl;
    }
};

int main()
{
    Derived d(10, 20, 30, 40);
    d.printDataBase1();
    d.printDataBase2();
    d.printDataDerived();

    return 0;
}