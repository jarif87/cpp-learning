#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <unordered_map>
#include <functional>

using namespace std;

int main()
{
    // Define a function object (functor) that calculates the square of a number
    struct Square
    {
        double operator()(double x) const
        {
            return x * x;
        }
    };

    // Create an instance of the Square functor
    Square square;

    // Use the functor to calculate the square of a number
    double number = 5.0;
    double result = square(number);

    cout << "The square of " << number << " is " << result << endl;

    return 0;
}