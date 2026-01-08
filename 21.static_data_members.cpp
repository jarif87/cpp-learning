#include <iostream>
using namespace std;

class Employee
{
private:
    static int count;
    int id;
    string name;
    string position;
    string department;
    string email;
    string phone;

public:
    void setData(int i, string n, string p, string d, string e, string ph)
    {
        id = i;
        name = n;
        position = p;
        department = d;
        email = e;
        phone = ph;
        count++;
    }
    void getData()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Position: " << position << endl;
        cout << "Department: " << department << endl;
        cout << "Email: " << email << endl;
        cout << "Phone: " << phone << endl;
    }
    static void getCount()
    {
        cout << "Total Employees: " << count << endl;
    }
};

int Employee::count = 0;

int main()
{
    Employee e1, e2, e3;
    e1.setData(1, "Alice", "Manager", "HR", "alice@company.com", "123-456-7890");
    e2.setData(2, "Bob", "Developer", "IT", "bob@company.com", "098-765-4321");
    e3.setData(3, "Charlie", "Analyst", "Finance", "charlie@company.com", "555-555-5555");
    e1.getData();
    cout << endl;
    e2.getData();
    cout << endl;
    e3.getData();
    cout << endl;
    Employee::getCount();

    return 0;
}