#include <iostream>
using namespace std;

class ShopItem
{
private:
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void display()
    {
        cout << "Code of item is: " << id << endl;
        cout << "Price of item is: " << price << endl;
    }
};

int main()
{
    ShopItem item[3]; // Array of objects

    item[0].setData(101, 29.99);
    item[1].setData(102, 49.99);
    item[2].setData(103, 19.99);

    for (int i = 0; i < 3; i++)
    {
        cout << "Item " << i + 1 << ":" << endl;
        item[i].display();
        cout << endl;
    }

    return 0;
}