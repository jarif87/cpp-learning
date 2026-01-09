#include <iostream>
#include <array>
using namespace std;

class Complex
{
private:
    int a;
    int b;
    string name;
    string color;

public:
    void setdata(int x, int y, string n, string c)
    {
        a = x;
        b = y;
        name = n;
        color = c;
    }
    void getdata()
    {
        cout << "Complex Number: " << a << " + " << b << "i"
             << ", Name: " << name << ", Color: " << color << endl;
    }
};

int main()
{
    int x, y;
    string n, c;
    Complex c1, c2, c3;
    cout << "Enter real and imaginary parts, name and color for complex number 1: " << endl;
    cout << "Real part: ";
    cin >> x;
    cout << "Imaginary part: ";
    cin >> y;
    cout << "Name: ";
    cin >> n;
    cout << "Color: ";
    cin >> c;
    c1.setdata(x, y, n, c);
    c1.getdata();
    return 0;
}