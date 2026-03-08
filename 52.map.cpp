#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> myMap;

    // Insert some key-value pairs into the map
    myMap["apple"] = 1;
    myMap["banana"] = 2;
    myMap["orange"] = 3;

    // Access values using keys
    cout << "Value for 'apple': " << myMap["apple"] << endl;
    cout << "Value for 'banana': " << myMap["banana"] << endl;
    cout << "Value for 'orange': " << myMap["orange"] << endl;

    // Check if a key exists in the map
    if (myMap.find("grape") != myMap.end())
    {
        cout << "Value for 'grape': " << myMap["grape"] << endl;
    }
    else
    {
        cout << "'grape' not found in the map." << endl;
    }

    // Iterate through the map and print key-value pairs
    cout << "All key-value pairs in the map:" << endl;
    for (const auto &pair : myMap)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}