
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
    int zone, hour, balance;

    // Read zone safely
    while (true)
    {
        cout << "Enter Zone (1-Inner, 2-Middle, 3-Outer): ";
        cin >> zone;

        if (cin.fail())
        {
            cout << "Invalid input! Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (zone < 1 || zone > 3)
        {
            cout << "Invalid zone! Try again.\n";
        }
        else
            break;
    }

    // Read journey hour safely
    while (true)
    {
        cout << "Enter Journey Hour (0-23): ";
        cin >> hour;

        if (cin.fail())
        {
            cout << "Invalid input! Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (hour < 0 || hour > 23)
        {
            cout << "Invalid hour! Try again.\n";
        }
        else
            break;
    }

    // Read balance safely
    while (true)
    {
        cout << "Enter Card Balance in Rupees: ";
        cin >> balance;

        if (cin.fail())
        {
            cout << "Invalid input! Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (balance < 0)
        {
            cout << "Balance cannot be negative!\n";
        }
        else
            break;
    }

    int fare[] = {1000, 2000, 3000};
    long long finalFare = fare[zone - 1];

    bool peak = (hour >= 8 && hour < 10) ||
                (hour >= 17 && hour < 20);

    if (peak)
        finalFare += finalFare * 20 / 100;

    long long balancePaise = balance * 100LL;

    cout << "\n------ METRO JOURNEY REPORT ------\n";
    cout << "Zone: " << zone << endl;
    cout << "Journey Hour: " << hour << endl;

    cout << fixed << setprecision(2);

    if (balancePaise - finalFare >= 5000)
    {
        balancePaise -= finalFare;

        cout << "Fare: Rs. " << finalFare / 100.0 << endl;
        cout << "Status: Journey Allowed\n";
        cout << "Remaining Balance: Rs. "
             << balancePaise / 100.0 << endl;
    }
    else
    {
        cout << "Status: Journey Denied\n";
        cout << "Reason: Minimum balance requirement not met.\n";
    }

    cout << "----------------------------------\n";

    return 0;
}
