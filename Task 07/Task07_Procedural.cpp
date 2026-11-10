
#include <iostream>
using namespace std;

bool canTravel(long long balance, long long fare)
{
    return balance - fare >= 5000;
}

void deduct(long long &balance, long long fare)
{
    if (canTravel(balance, fare))
    {
        balance -= fare;
        cout << "Journey Allowed" << endl;
    }
    else
    {
        cout << "Journey Denied" << endl;
    }
}

int main()
{
    long long balance = 10000;
    long long fare = 3000;

    cout << "Initial Balance: Rs. " << balance / 100 << endl;

    deduct(balance, fare);

    cout << "Remaining Balance: Rs. " << balance / 100 << endl;

    return 0;
}
