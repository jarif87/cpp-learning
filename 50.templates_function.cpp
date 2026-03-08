#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>
using namespace std;

// template <class T>
// float area(T radius)
// {
//     return M_PI * radius * radius;
// }
// int main()
// {
//     float r = 5.0;
//     cout << "Area of circle with radius " << r << " is " << area(r) << endl;
//     return 0;
// }

// Member function template
// write function inside the class

/*
template <class T>
class Circle
{
public:
    T radius;
    Circle(T r) : radius(r) {}
    float area()
    {
        return M_PI * radius * radius;
    }
    void display();
};

template <class T>
void Circle<T>::display()
{
    cout << "Circle with radius " << radius << " has area " << area() << endl;
}

int main()
{
    Circle<float> c1(5.0);
    c1.display();

    Circle<double> c2(7.5);
    c2.display();

    return 0;
}
*/

// overloading template function
void function(int x)
{
    cout << "Function with int: " << x << endl;
}

template <class T>
void function(T x)
{
    cout << "Function with template type: " << x << endl;
}

int main()
{
    function(10);      // calls the non-template function
    function(3.14);    // calls the template function
    function("Hello"); // calls the template function

    return 0;
}