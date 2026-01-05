#include <iostream>
#include <string>
using namespace std;

// call by value version of add function

// int add(int a, int b)
// {
//     return a + b;
// }

// call by reference version of swap function
// void swap(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int num1, num2;
//     cout << "Enter Number 1: " << endl;
//     cin >> num1;
//     cout << "Enter Number 2: " << endl;
//     cin >> num2;
//     int sum = add(num1, num2);
//     cout << "Sum: " << sum << endl;

//     cout << string(100, '#') << endl;

//     cout << "Before Swap: " << endl;
//     cout << "Num1: " << num1 << endl;
//     cout << "Num2: " << num2 << endl;

//     swap(num1, num2);

//     cout << "After Swap: " << endl;
//     cout << "Num1: " << num1 << endl;
//     cout << "Num2: " << num2 << endl;

// pointer version of swap function
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
// main function

int main()
{
    int num1, num2;
    cout << string(100, '#') << endl;

    cout << "Enter Number 1: " << endl;
    cin >> num1;
    cout << "Enter Number 2: " << endl;
    cin >> num2;
    cout << "Before Swap: " << endl;

    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    swap(&num1, &num2);

    cout << "After Swap: " << endl;
    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;

    return 0;
}