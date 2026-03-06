#include <iostream>
using namespace std;

class Base
{
protected:
    int var_base;

public:
    Base()
    {
        var_base = 0;
    }

    virtual void display()
    {
        cout << "The value of var_base is: " << var_base << endl;
    }
};

class DerivedClass : public Base
{
public:
    int var_derived;
    int var_derived2;

    DerivedClass()
    {
        var_derived = 0;
        var_derived2 = 0;
    }

    void display() override
    {
        cout << "The value of var_derived is: " << var_derived << endl;
        cout << "The value of var_derived2 is: " << var_derived2 << endl;
    }
};

int main()
{
    Base *base_pointer;
    DerivedClass derived_object;

    base_pointer = &derived_object; // Base pointer to derived object
    base_pointer->display();        // Calls DerivedClass display because of virtual

    DerivedClass *derived_pointer;
    derived_pointer = &derived_object;

    derived_pointer->var_derived = 30;
    derived_pointer->var_derived2 = 40;
    derived_pointer->display();

    return 0;
}