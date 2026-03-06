#include <iostream>
using namespace std;

class BaseClass
{
protected:
    int var_base = 10;

public:
    int var_base_public = 20;
    virtual void display()
    {
        cout << "The value of var_base in BaseClass is: " << var_base_public << endl;
    }
};

class DerivedClass : public BaseClass
{
private:
    int var_derived = 30;

public:
    int var_derived_public = 40;
    void display()
    {
        cout << "The value of var_base in DerivedClass is: " << var_base_public << endl;
        cout << "The value of var_derived in DerivedClass is: " << var_derived_public << endl;
    }
};

int main()
{
    BaseClass *base_ptr;
    BaseClass base_obj;
    DerivedClass derived_obj;

    base_ptr = &derived_obj;
    base_ptr->display();

    return 0;
}