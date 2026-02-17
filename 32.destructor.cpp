#include <iostream>
#include <string>
using namespace std;

class Number
{
private:
    static int objectcount;

public:
    Number()
    {
        objectcount++;
        cout << "Constructor called. Count: " << objectcount << endl;
    }
    ~Number()
    {
        objectcount--;
        cout << "Destructor called. Count: " << objectcount << endl;
    }
};

int Number::objectcount = 0;

int main()
{
    Number n1;
    {
        Number n2;
        Number n3;
    }

    return 0;
}