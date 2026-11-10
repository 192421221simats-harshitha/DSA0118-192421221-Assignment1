
#include <iostream>
#include <iomanip>
#include <climits>
using namespace std;

int main()
{
    const long long farePaise = 3000; // Rs. 30
    const double fareRupees = 30.0;

    int journeys[] = {20000, 500000, 3000000};

    cout << fixed << setprecision(2);
    cout << "METRO COLLECTION COMPARISON\n\n";

    for (int i = 0; i < 3; i++)
    {
        long long integerTotal = journeys[i] * farePaise;
        double doubleTotal = journeys[i] * fareRupees;

        long long doubleInPaise =
            static_cast<long long>(doubleTotal * 100 + 0.5);

        cout << "Journeys: " << journeys[i] << endl;

        cout << "Integer-paise total: Rs. "
             << integerTotal / 100.0 << endl;

        cout << "Double total: Rs. "
             << doubleTotal << endl;

        cout << "Difference in paise: "
             << integerTotal - doubleInPaise << endl;

        if (integerTotal > INT_MAX)
            cout << "int status: OVERFLOW - cannot store this total\n";
        else
            cout << "int status: Can store this total\n";

        cout << "-----------------------------\n";
    }

    cout << "\nINTEGER LIMITS\n";
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "LONG_LONG_MAX: " << LLONG_MAX << endl;

    return 0;
}
