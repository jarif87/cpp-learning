#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int age;
    // cout << "Control Structures in C++" << endl;
    // cout << string(100, '#') << endl;

    // cout << "Enter your age: " << endl;
    // cin >> age;
    // if (age < 0)
    // {
    //     cout << "Invalid age entered." << endl;
    // }
    // else if (age < 13)
    // {
    //     cout << "You are a child." << endl;
    // }
    // else if (age >= 13 && age < 20)
    // {
    //     cout << "You are a teenager." << endl;
    // }
    // else
    // {
    //     cout << "You are an adult." << endl;
    // }
    cout << "Switch Case Example" << endl;
    cout << string(100, '#') << endl;

    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    switch (age)
    {

    case 8:
        cout << "You are a child." << endl;
        break;
    case 15:
        cout << "You are a teenager." << endl;
        break;
    case 20:
        cout << "You are an adult." << endl;
        break;
    default:
        cout << "Invalid age entered." << endl;
    }

    return 0;
}