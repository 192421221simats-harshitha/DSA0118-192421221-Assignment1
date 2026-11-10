
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

const long long MIN_BALANCE = 5000;

bool isPeakHour(int hour)
{
    return (hour >= 8 && hour < 10) ||
           (hour >= 17 && hour < 20);
}

bool calculateFare(int zone, int hour, long long &fare)
{
    int baseFare;

    switch (zone)
    {
        case 1: baseFare = 1000; break;
        case 2: baseFare = 2000; break;
        case 3: baseFare = 3000; break;
        default: return false;
    }

    fare = baseFare;

    if (isPeakHour(hour))
        fare += fare * 20 / 100;

    return true;
}

bool readHour(string input, int &hour)
{
    stringstream ss(input);
    char extra;

    if (!(ss >> hour) || (ss >> extra))
        return false;

    return hour >= 0 && hour <= 23;
}

struct Test
{
    string name;
    int zone;
    string hourInput;
    long long balance;
    long long recharge;
};

int main()
{
    Test tests[] = {
        {"Inner Off-Peak", 1, "12", 10000, 0},
        {"Middle Off-Peak", 2, "12", 10000, 0},
        {"Outer Off-Peak", 3, "12", 10000, 0},
        {"Inner Peak", 1, "9", 10000, 0},
        {"Middle Peak", 2, "18", 10000, 0},
        {"Outer Peak", 3, "18", 10000, 0},
        {"Boundary 8 AM", 1, "8", 10000, 0},
        {"Boundary 10 AM", 1, "10", 10000, 0},
        {"Boundary 5 PM", 1, "17", 10000, 0},
        {"Boundary 8 PM", 1, "20", 10000, 0},
        {"Exactly Rs.50 Left", 1, "12", 6000, 0},
        {"Unknown Zone", 4, "12", 10000, 0},
        {"Negative Recharge", 1, "12", 10000, -100},
        {"Letters for Hour", 1, "abc", 10000, 0}
    };

    int count = sizeof(tests) / sizeof(tests[0]);

    cout << "------ METRO FARE TEST RESULTS ------\n";

    for (int i = 0; i < count; i++)
    {
        long long fare = 0;
        int hour = 0;
        bool valid = true;

        if (!readHour(tests[i].hourInput, hour))
        {
            cout << tests[i].name << ": Invalid hour\n";
            continue;
        }

        if (tests[i].recharge < 0)
        {
            cout << tests[i].name << ": Invalid negative recharge\n";
            continue;
        }

        if (!calculateFare(tests[i].zone, hour, fare))
        {
            cout << tests[i].name << ": Invalid zone\n";
            continue;
        }

        if (tests[i].balance - fare >= MIN_BALANCE)
            cout << tests[i].name << ": Fare = Rs. "
                 << fare / 100.0 << ", Journey Allowed\n";
        else
            cout << tests[i].name << ": Journey Denied\n";
    }

    cout << "\n------ FIVE JOURNEYS TOTAL ------\n";

    int zones[] = {1, 2, 3, 1, 3};
    int hours[] = {12, 12, 12, 9, 18};

    long long total = 0;

    for (int i = 0; i < 5; i++)
    {
        long long fare;
        calculateFare(zones[i], hours[i], fare);
        total += fare;
        cout << "Journey " << i + 1
             << ": Rs. " << fare / 100.0 << endl;
    }

    cout << "Total Fare: Rs. " << total / 100.0 << endl;

    return 0;
}
