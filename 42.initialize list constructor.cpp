#include <iostream>
#include <list>

class MyClass
{
private:
    int a, b;

public:
    MyClass(int x, int y) : a(x), b(y)
    {
        std::cout << "Constructor called with values: " << a << ", " << b << std::endl;
    }
};

int main()
{
    std::list<MyClass> myList;

    // Initializing the list with MyClass objects
    myList.emplace_back(1, 2);
    myList.emplace_back(3, 4);
    myList.emplace_back(5, 6);

    return 0;
}