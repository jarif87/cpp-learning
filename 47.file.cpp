#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    // string st = "hello world this is file handling in c++";
    // ofstream out("output.txt");
    // out << st;
    // out.close();

    /*

    string st2;
    ifstream in("output.txt");
    // in >> st2; // it will only read the first word "hello"

    getline(in, st2);
    cout << st2;
    */

    // ofstream hout("output.txt");
    // string name;
    // cout << "Enter your name: ";
    // cin >> name;
    // hout << "Hello, " << name << "! Welcome to file handling in C++.";
    // hout.close();

    /*
    ifstream hin("output.txt");
    string greeting;
    hin >> greeting;
    cout << "this is the greeting: " << greeting;
    hin.close();
*/

    ifstream in;
    string st;
    in.open("output.txt");

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}