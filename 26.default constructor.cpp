#include <iostream>
#include <string>
using namespace std;

class phantom
{
private:
    int a, b;

public:
    phantom(int, int);
    void printNumber()
    {
        cout << "a: " << a << " + " << b << "i" << endl;
    }
};

phantom::phantom(int x, int y)
{
    a = x;
    b = y;
}

int main()
{ // implicitly calling the constructor
    cout << "Implicitly calling the constructor" << endl;
    phantom p(10, 20);
    p.printNumber();

    cout << string(100, '#') << endl;
    // explicitly calling the constructor
    cout << "Explicitly calling the constructor" << endl;
    phantom p1 = phantom(30, 40);
    p1.printNumber();

    return 0;
}