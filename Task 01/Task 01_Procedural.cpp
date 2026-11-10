#include <iostream>
using namespace std;
int main() {
    int balance = 100;
    int fare = 30;
    int remainingBalance;
    remainingBalance = balance - fare;
    cout << "Initial Balance: Rs. " << balance << endl;
    cout << "Journey Fare: Rs. " << fare << endl;
    if (remainingBalance >= 50) {
        cout << "Journey Allowed" << endl;
        cout << "Remaining Balance: Rs. "
             << remainingBalance << endl;
    } else {
        cout << "Journey Denied" << endl;
    }
    return 0;
}
