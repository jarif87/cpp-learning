#include <iostream>
#include <cstring>
using namespace std;
// int main()
// {
//     cout << string(100, '*') << endl;
//     cout << "Pointers in C++" << endl;

//     int var = 42;
//     int *ptr = &var; // pointer to var

//     cout << "Value of var: " << var << endl;
//     cout << "Address of var: " << &var << endl;

//     cout << "Value of ptr (Address of var): " << ptr << endl;
//     cout << "Value pointed to by ptr: " << *ptr << endl;
//     // Modifying value using pointer
//     *ptr = 100;
//     cout << "New value of var after modifying through ptr: " << var << endl;

//     cout << string(100, '*') << endl;

//     int **c = &ptr; // pointer to pointer
//     cout << "Value of c (Address of ptr): " << c << endl;
//     cout << "Value pointed to by c (Value of ptr): " << *c << endl;
//     cout << "Value pointed to by the pointer pointed to by c (Value of var): " << **c << endl;

//     return 0;
// }

/*
int main()
{
    cout << string(100, '*') << endl;
    cout << "Pointers in C++" << endl;

    char str1[] = "Hello";
    char *ptr1 = str1; // pointer to the first character of str1

    cout << "String: " << str1 << endl;
    cout << "Pointer to string: " << ptr1 << endl;
    cout << "First character using pointer: " << *ptr1 << endl;

    // Modifying string using pointer
    ptr1[0] = 'h'; // change 'H' to 'h'
    cout << "Modified string: " << str1 << endl;

    cout << string(100, '*') << endl;

    char **ptr2 = &ptr1; // pointer to pointer
    cout << "Pointer to pointer (Address of ptr1): " << ptr2 << endl;
    cout << "Value pointed to by ptr2 (Value of ptr1): " << *ptr2 << endl;
    cout << "First character using pointer to pointer: " << **ptr2 << endl;

    return 0;
}
    */

class Hello
{
private:
    int a;

public:
    void setData(int x)
    {
        this->a = x;
    }
    void display()
    {
        cout << "Value of a is: " << a << endl;
    }
};

int main()
{
    Hello h;
    h.setData(10);
    h.display();

    return 0;
}