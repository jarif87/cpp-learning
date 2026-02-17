#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    string name;

public:
    void setName(string n)
    {
        name = n;
    }
};

class Student
{
protected:
    int studentID;

public:
    void setStudentID(int id)
    {
        studentID = id;
    }
};

class Employee
{
protected:
    int employeeID;

public:
    void setEmployeeID(int id)
    {
        employeeID = id;
    }
};

class Derived : public Person, public Student, public Employee
{
public:
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << studentID << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "This is a derived class that inherits from Person, Student, and Employee." << endl;

        cout << "It demonstrates multiple inheritance in C++." << endl;
    }
};

int main()
{
    Derived d;
    d.setName("John Doe");
    d.setStudentID(12345);
    d.setEmployeeID(67890);
    d.show();

    return 0;
}