#include <iostream>
using namespace std;
class SmartCard {
private:
    int balance;
public:
    SmartCard(int amount) {
        balance = amount;
    }
    void travel(int fare) {
        cout << "Initial Balance: Rs. " << balance << endl;
        cout << "Journey Fare: Rs. " << fare << endl;
        if (balance - fare >= 50) {
            balance = balance - fare;
            cout << "Journey Allowed" << endl;
            cout << "Remaining Balance: Rs. "
                 << balance << endl;
        } else {
            cout << "Journey Denied" << endl;
        }
    }
};
int main() {
    SmartCard card(100);
    card.travel(30);
    return 0;
}
