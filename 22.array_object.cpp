#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    string address;
    string phone;
    string email;
    string occupation;

public:
    void setDetails(string n, int a, string addr, string ph, string em, string occ)
    {
        name = n;
        age = a;
        address = addr;
        phone = ph;
        email = em;
        occupation = occ;
    }
    void getDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
        cout << "Phone: " << phone << endl;
        cout << "Email: " << email << endl;
        cout << "Occupation: " << occupation << endl;
    }
};
int main()
{

    // Person people[3];
    // people[0].setDetails("Alice", 30, "123 Main St", "555-1234", "alice@example.com", "Engineer");
    // people[1].setDetails("Bob", 25, "456 Oak Ave", "555-5678", "bob@example.com", "Designer");
    // people[2].setDetails("Charlie", 35, "789 Pine Rd", "555-9012", "charlie@example.com", "Manager");

    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "\nPerson " << (i + 1) << ":" << endl;
    //     people[i].getDetails();
    // }

    Person people[3];
    for (int i = 0; i < 3; i++)
    {
        string name, address, phone, email, occupation;
        int age;
        cout << "Enter details for person " << (i + 1) << ":\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "Age: ";
        cin >> age;
        cin.ignore();
        cout << "Address: ";
        getline(cin, address);
        cout << "Phone: ";
        getline(cin, phone);
        cout << "Email: ";
        getline(cin, email);
        cout << "Occupation: ";
        getline(cin, occupation);

        people[i].setDetails(name, age, address, phone, email, occupation);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\nPerson " << (i + 1) << ":" << endl;
        people[i].getDetails();
    }

    return 0;
}