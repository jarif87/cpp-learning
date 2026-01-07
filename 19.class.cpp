// C++ program to demonstrate class with multiple attributes and methods
// for managing employee data
// Using C++17 standards

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;
    string department;
    string position;
    int experience;
    string email;
    string phone;

public:
    void setdata(int i, string n, float s, string d = "IT", string p = "Developer", int e = 5, string em = "", string ph = "")
    {
        id = i;
        name = n;
        salary = s;
        department = d;
        position = p;
        experience = e;
        email = em;
        phone = ph;
    }
    void displaydata()
    {
        cout << "ID: " << id << ", Name: " << name << ", Salary: $" << salary << ", Department: " << department << ", Position: " << position << ", Experience: " << experience << ", Email: " << email << ", Phone: " << phone << endl;
    }
};

int main()

{
    cout << string(100, '=') << endl;
    cout << "Employee Data Management" << endl;
    cout << string(100, '=') << endl;
    Employee employees[3];
    employees[0].setdata(101, "Alice", 75000, "HR", "Manager", 8, "alice@company.com", "123-456-7890");
    employees[1].setdata(102, "Bob", 80000, "IT", "Developer", 5, "bob@company.com", "123-456-7891");
    employees[2].setdata(103, "Charlie", 90000, "Finance", "Analyst", 6, "charlie@company.com", "123-456-7892");
    for (int i = 0; i < 3; i++)
    {
        employees[i].displaydata();
    }
    cout << string(100, '=') << endl;
    cout << "End of Employee Data Management" << endl;
    cout << string(100, '=') << endl;

    return 0;
}