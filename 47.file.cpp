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

    string st2;
    ifstream in("output.txt");
    // in >> st2; // it will only read the first word "hello"

    getline(in, st2);
    cout << st2;

    return 0;
}