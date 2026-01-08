#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ShoppingCart
{
private:
    vector<int> itemids;
    vector<string> itemnames;
    vector<float> itemprices;
    vector<int> itemquantities;
    vector<string> itemcategories;
    vector<string> itembrands;

public:
    void addItem(int id, string name, float price, int quantity, string category, string brand)
    {
        itemids.push_back(id);
        itemnames.push_back(name);
        itemprices.push_back(price);
        itemquantities.push_back(quantity);
        itemcategories.push_back(category);
        itembrands.push_back(brand);
    }

    void displayCart()
    {
        cout << "Shopping Cart Items:" << endl;
        for (size_t i = 0; i < itemids.size(); i++)
        {
            cout << "ID: " << itemids[i]
                 << ", Name: " << itemnames[i]
                 << ", Price: $" << itemprices[i]
                 << ", Quantity: " << itemquantities[i]
                 << ", Category: " << itemcategories[i]
                 << ", Brand: " << itembrands[i] << endl;
        }
    }
};

int main()
{
    ShoppingCart cart;
    string intput;

    cout << string(100, '=') << endl;
    cout << "Shopping Cart Management" << endl;
    cout << string(100, '=') << endl;
    while (true)
    {
        cout << "Enter number of items to add to cart (quit to exit): ";
        cin >> intput;
        if (intput == "quit")

            break;

        int id = stoi(intput);
        cin.ignore(); // to ignore the newline character after integer input
        string name, category, brand;
        float price;
        int quantity;
        cout << "Enter item name: " << endl;
        getline(cin, name);
        cout << "Enter item price: " << endl;
        cin >> price;
        cout << "Enter item quantity: " << endl;
        cin >> quantity;
        cout << "Enter item category: " << endl;
        getline(cin, category);
        cout << "Enter item brand: " << endl;
        getline(cin, brand);

        cart.addItem(id, name, price, quantity, category, brand);
        cart.displayCart();
    }
    cout << string(100, '=') << endl;
    cout << "End of Shopping Cart Management" << endl;

    return 0;
}
