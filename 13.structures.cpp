#include <iostream>
#include <string>
#include <map>
using namespace std;

union Data
{
    int intValue;
    float floatValue;
    char charValue;
};

struct employee

{
    int id;
    string name;
    float salary;
    string department;
    string position;
    string email;
    string address;
};

int main()
{

    struct employee jarif, kamal, rafiq;
    cout << string(100, '=') << endl;

    jarif.id = 101;
    jarif.name = "Jarif Hossain";
    jarif.salary = 50000.50;
    jarif.department = "IT";
    jarif.position = "ML Engineer";
    jarif.email = "xyz@gmail.com";
    jarif.address = "Dhaka, Bangladesh";
    cout << "Employee Name: " << jarif.name << endl;

    cout << string(100, '=') << endl;

    kamal.id = 102;
    kamal.name = "Kamal Hossain";
    kamal.salary = 40000.00;
    kamal.department = "CSE";
    kamal.position = "Software Engineer";
    kamal.email = "abc@gmail.com";
    kamal.address = "Chittagong, Bangladesh";
    cout << "Employee Name: " << kamal.name << endl;

    cout << string(100, '=') << endl;

    rafiq.id = 103;
    rafiq.name = "Rafiq Islam";
    rafiq.salary = 30000.75;
    rafiq.department = "ECE";
    rafiq.position = "Hardware Engineer";
    rafiq.email = "hnm@gmail.com";
    rafiq.address = "Khulna, Bangladesh";
    cout << "Employee Name: " << rafiq.name << endl;

    cout << string(100, '=') << endl;
    cout << "Employee 1 Details:" << endl;
    cout << "ID: " << jarif.id << endl;
    cout << "Name: " << jarif.name << endl;
    cout << "Salary: " << jarif.salary << endl;
    cout << "Department: " << jarif.department << endl;
    cout << "Position: " << jarif.position << endl;
    cout << "Email: " << jarif.email << endl;
    cout << "Address: " << jarif.address << endl;

    cout << string(100, '=') << endl;

    Data data;
    data.intValue = 42;
    cout << "Data as Integer: " << data.intValue << endl;
    data.floatValue = 3.14f;
    cout << "Data as Float: " << data.floatValue << endl;
    data.charValue = 'A';
    cout << "Data as Character: " << data.charValue << endl;

    cout << string(100, '=') << endl;

    // Enum Example

    enum Color
    {
        RED,
        GREEN,
        BLUE
    };
    cout << string(100, '=') << endl;
    Color favoriteColor = GREEN;
    cout << "Favorite Color Enum Value: " << favoriteColor << endl;

    cout << string(100, '=') << endl;
    Color favoriteColor2 = BLUE;
    cout << "Another Favorite Color Enum Value: " << favoriteColor2 << endl;

    cout << string(100, '=') << endl;
    Color hate_this_color = RED;
    cout << "Hate this color Enum Value: " << hate_this_color << endl;

    cout << string(100, '=') << endl;
    cout << RED << endl;
    cout << GREEN << endl;
    cout << BLUE << endl;
    cout << string(100, '=') << endl;
    return 0;
}