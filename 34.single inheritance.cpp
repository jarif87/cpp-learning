#include <iostream>
using namespace std;

class Base
{
private:
    int B, C;

public:
    void setA();
    int getB();
    int getC();
};

void Base::setA(void)
{
    B = 10;
    C = 20;
}

int Base::getB(void)
{
    return B;
}

int Base::getC(void)
{
    return C;
}

class Derived : public Base

{
    int D;

public:
    void process(void);
    void display(void);
};

void Derived::process(void)
{
    D = getB() + getC();
}
void Derived::display(void)
{
    cout << "B = " << getB() << endl;
    cout << "C = " << getC() << endl;
    cout << "D = " << D << endl;
}
int main()

{
    Derived d;
    d.setA();
    d.process();
    d.display();

    return 0;
}