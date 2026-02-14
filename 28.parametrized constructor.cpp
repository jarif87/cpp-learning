#include <iostream>
#include <string>
using namespace std;

class Point
{
private:
    int x;
    int y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    Point p1(3, 4);
    p1.display();

    Point q1(5, 6);
    q1.display();

    return 0;
}