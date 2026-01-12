#include <iostream>
using namespace std;

class box_machina;

class ex_machine
{

private:
    int a;

public:
    void setValue(int value)
    {
        a = value;
    }
    friend void multiple(ex_machine, box_machina);
};

class box_machina
{
private:
    int num1;

public:
    void setValue(int value)
    {
        num1 = value;
    }
    friend void multiple(ex_machine, box_machina);
};

void multiple(ex_machine h1, box_machina h2)
{
    cout << "Final Result of Multiple Value: " << h1.a * h2.num1 << endl;
}

int main()

{
    ex_machine value_1;
    box_machina value_2;
    int x, y;

    cout << "Enter your First value: " << endl;
    cin >> x;
    value_1.setValue(x);

    cout << "Enter Your Second Value: " << endl;
    cin >> y;
    value_2.setValue(y);

    multiple(value_1, value_2);

    return 0;
}