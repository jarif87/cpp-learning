#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

// void display(vector<int> &v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     display(v);

//     // Using std::transform to square each element in the vector
//     transform(v.begin(), v.end(), v.begin(), [](int x)
//               { return x * x; });
//     display(v);

//     // Using std::sort to sort the vector in descending order
//     sort(v.begin(), v.end(), greater<int>());
//     display(v);

//     return 0;
// }

void display(list<int> &l)
{
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    display(l);

    // Using std::transform to square each element in the list
    transform(l.begin(), l.end(), l.begin(), [](int x)
              { return x * x; });
    display(l);

    // Using std::sort to sort the list in descending order
    l.sort(greater<int>());
    display(l);

    // Adding more elements
    l.push_back(36);
    l.push_back(49);
    l.push_back(64);
    display(l);

    return 0;
}