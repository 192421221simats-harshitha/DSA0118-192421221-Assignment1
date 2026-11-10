
#include <iostream>
using namespace std;

class SmartCard
{
private:
    long long balance;

public:
    SmartCard(long long amount)
    {
        balance = amount;
    }

    bool canTravel(long long fare)
    {
        return balance - fare >= 5000;
    }

    void deduct(long long fare)
    {
        if (canTravel(fare))
        {
            balance -= fare;
            cout << "Journey Allowed" << endl;
        }
        else
        {
            cout << "Journey Denied" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Remaining Balance: Rs. " << balance / 100 << endl;
    }
};

int main()
{
    SmartCard card(10000);

    cout << "Initial Balance: Rs. 100" << endl;

    card.deduct(3000);

    card.displayBalance();

    return 0;
}
