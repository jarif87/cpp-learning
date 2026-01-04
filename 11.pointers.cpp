#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    cout << string(100, '*') << endl;
    cout << "Pointers in C++" << endl;

    int var = 42;
    int *ptr = &var; // pointer to var

    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;

    cout << "Value of ptr (Address of var): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    // Modifying value using pointer
    *ptr = 100;
    cout << "New value of var after modifying through ptr: " << var << endl;

    cout << string(100, '*') << endl;

    int **c = &ptr; // pointer to pointer
    cout << "Value of c (Address of ptr): " << c << endl;
    cout << "Value pointed to by c (Value of ptr): " << *c << endl;
    cout << "Value pointed to by the pointer pointed to by c (Value of var): " << **c << endl;

    return 0;
}