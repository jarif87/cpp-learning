#include <iostream>
#include <string>
using namespace std;
int main()
{
    // int marks[19] = {34, 45, 56, 67, 78, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102};

    // cout << "The marks of student 1 is: " << *marks << endl;
    // cout << "The marks of student 2 is: " << *(marks + 1) << endl;
    // cout << "The marks of student 3 is: " << *(marks + 2) << endl;
    // cout << "The marks of student 4 is: " << *(marks + 3) << endl;
    // cout << "The marks of student 5 is: " << *(marks + 4) << endl;
    // cout << "The marks of student 6 is: " << *(marks + 5) << endl;
    // cout << "The marks of student 7 is: " << *(marks + 6) << endl;
    // cout << string(100, '-') << endl;
    // cout << "The marks of student 0 is: " << (marks[0]) << endl;
    // cout << "The marks of student 1 is: " << (marks[1]) << endl;
    // cout << "The marks of student 2 is: " << (marks[2]) << endl;
    // cout << "The marks of student 3 is: " << (marks[3]) << endl;
    // cout << "The marks of student 4 is: " << (marks[14]) << endl;
    // cout << "The marks of student 5 is: " << (marks[15]) << endl;
    // cout << "These are Maths marks of students." << endl;

    // cout << string(100, '=') << endl;
    // int mathsMarks[5] = {98, 97, 95, 93, 91};
    // cout << "The maths marks of student 0 is: " << mathsMarks[0] << endl;
    // cout << "The maths marks of student 1 is: " << *(mathsMarks + 1) << endl;
    // cout << "The maths marks of student 2 is: " << *(mathsMarks + 2) << endl;
    // cout << "The maths marks of student 3 is: " << *(mathsMarks + 3) << endl;
    // cout << "The maths marks of student 4 is: " << *(mathsMarks + 4) << endl;

    // mathsMarks[2] = 100;

    // cout << "The updated maths marks of student 2 is: " << *(mathsMarks + 2) << endl;

    // int values[] = {10, 20, 30, 100, 50};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "The value at index " << i << " is: " << values[i] << endl;
    // }

    int values[] = {10, 20, 30, 100, 50};
    int *p = values;

    cout << "Using pointer arithmetic to access array elements:" << endl;
    cout << string(60, '-') << endl;
    // cout << "The value of values[0] is: " << *p << endl;
    // cout << "The value of values[1] is: " << *(p + 1) << endl;
    // cout << "The value of values[2] is: " << *(p + 2) << endl;

    cout << "The value of P is: " << *(p++) << endl;
    cout << "New value of P is: " << *(++p) << endl;

    return 0;
}