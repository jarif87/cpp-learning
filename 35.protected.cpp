#include <iostream>
#include <string>
using namespace std;

class Base
{
protected:
    string name;
    string surname;

private:
    string password;
};

class Derived : protected Base

{
};

int main()
{
    Base b;
    Derived d;
    // d.name = "John";                            // Error: 'name' is protected within this context
    // d.surname = "Doe";                          // Error: 'surname' is protected within this context
    // cout << d.name << " " << d.surname << endl; // Error: 'name' and 'surname' are protected within this context

    return 0;
}