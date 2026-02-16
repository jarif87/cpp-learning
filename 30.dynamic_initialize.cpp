#include <iostream>
#include <string>
using namespace std;

class bank_deposit
{
private:
    int principal;
    int years;
    float interest_rate;
    float return_value;

public:
    bank_deposit() {}
    bank_deposit(int p, int y, float r)
    {
        principal = p;
        years = y;
        interest_rate = r;
        return_value = principal;
        for (int i = 0; i < y; i++)
        {
            return_value = return_value * (1 + interest_rate);
        }
    }
    float getAmount() const
    {
        return return_value;
    }
};

int main()
{

    bank_deposit bd1, bd2, bd3;
    int p, y;
    float r;
    cout << "Enter the principal: " << endl;
    cin >> p;
    cout << "Enter the years: " << endl;
    cin >> y;
    cout << "Enter the interest rate: " << endl;
    cin >> r;
    bd1 = bank_deposit(p, y, r);
    cout << "Final Amount is: " << bd1.getAmount() << endl;
    return 0;
}