#include <iostream>
using namespace std;

int sum()
{
    int a = 4;
    return a;
}
int main()
{
    int a = 10;
    int b = 20;
    float pi = 3.14;
    char c = 'n';
    bool f = true;
    cout << "value of a is: "
         << a << "\nvalue of b is: " << b;
    cout << "\nvalue of PI is: " << pi;
    cout << "\nYour character is: " << c;
    cout << "\nPlease print function: " << sum();
    cout << "\n Bool data types: " << f;
    return 0;
}