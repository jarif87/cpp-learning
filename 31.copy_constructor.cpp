#include <iostream>
#include <string>
using namespace std;

// class Number
// {

// private:
//     int num;

// public:
//     Number() {}
//     Number(int n)
//     {
//         num = n;
//     }
//     void display()
//     {
//         cout << "Number: " << num << endl;
//     }
// };

// int main()
// {
//     Number a, b, c;
//     a = Number(10);
//     b = a; // copy constructor is called here
//     c = a; // copy constructor is called here
//     a.display();
//     b.display();
//     c.display();

//     return 0;
// }

class Simple
{
private:
    int data1, data2, data3;

public:
    Simple(int a, int b = 20, int c = 30)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << "Data1: " << data1 << endl;
        cout << "Data2: " << data2 << endl;
        cout << "Data3: " << data3 << endl;
    }
};

int main()
{
    Simple s1(10);
    Simple s2 = s1; // copy constructor is called here
    Simple s3(s1);  // copy constructor is called here

    cout << "s1: " << endl;
    s1.display();
    cout << "s2: " << endl;
    s2.display();
    cout << "s3: " << endl;
    s3.display();

    return 0;
}