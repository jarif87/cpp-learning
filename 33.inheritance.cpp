#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    float salary;
    string department;
    string position;

public:
    Person(int id, string name, float salary, string department, string position)
    {
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->department = department;
        this->position = position;
    }
};
class Employee : public Person
{
private:
    int language_code;

public:
    Employee(int id, string name, float salary, string department, string position, int language_code) : Person(id, name, salary, department, position)
    {
        this->language_code = language_code;
    }
    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
        cout << "Language Code: " << language_code << endl;
    }
};

int main()
{
    Employee emp(1, "John Doe", 50000, "IT", "Software Engineer", 1);
    emp.display();
    return 0;
}