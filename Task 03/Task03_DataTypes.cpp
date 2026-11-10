
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // Data type examples
    long long farePaise = 1000;
    long long balancePaise = 10000;
    int hour = 9;
    int zoneNumber = 1;
    long long journeyCount = 3000000;
    bool isPeak = true;
    char passengerInitial = 'H';

    cout << "METRO DATA TYPES" << endl;

    cout << "Fare: " << farePaise << " paise" << endl;
    cout << "Balance: " << balancePaise << " paise" << endl;
    cout << "Hour: " << hour << endl;
    cout << "Zone Number: " << zoneNumber << endl;
    cout << "Journey Count: " << journeyCount << endl;
    cout << "Peak Status: " << isPeak << endl;
    cout << "Passenger Initial: " << passengerInitial << endl;

    cout << "\nDATA TYPE SIZES" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " byte" << endl;

    cout << "\nINTEGER LIMITS" << endl;
    cout << "INT_MAX: " << INT_MAX << endl;
    cout << "INT_MIN: " << INT_MIN << endl;

    cout << "\nTYPE COMPATIBILITY" << endl;
    int a = 10;
    double b = 2.5;
    double result = a + b;
    bool status = 5;

    cout << "Integer + Double: " << result << endl;
    cout << "Integer to Boolean: " << status << endl;

    cout << "\nROUNDING ERROR EXAMPLE" << endl;
    double x = 0.1 + 0.2;
    cout.precision(17);
    cout << "0.1 + 0.2 = " << x << endl;

    cout << "\nNETWORK COLLECTION" << endl;
    long long totalPaise = 3000000LL * 3000;
    cout << "Maximum collection: " << totalPaise
         << " paise" << endl;

    return 0;
}
