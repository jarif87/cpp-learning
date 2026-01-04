#include <iostream>
#include <string>
using namespace std;
int main()
{
    /*
    cout << "Break and Continue Example" << endl;
    cout << string(100, '#') << endl;
    for (int i = 5; i <= 19; i++)
    {
        if (i == 9)
        {
            cout << "Breaking the loop at i = " << i << endl;
            break;
        }
    }*/
    cout << "Continue Example" << endl;
    cout << string(100, '#') << endl;
    for (int i = 7; i <= 23; i++)
    {
        if (i == 11)
        {
            cout << "Skipping the iteration at i = " << i << endl;
            continue;
        }
        cout << string(100, '-') << endl;
        cout << "final i value is: " << i << endl;
    }
    return 0;
}