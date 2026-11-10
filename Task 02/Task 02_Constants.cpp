#include <iostream>
using namespace std;
enum class Zone {
    Inner,
    Middle,
    Outer
};
constexpr int BASE_FARE_PAISE[] = {1000, 2000, 3000};
constexpr int PEAK_SURCHARGE_PERCENT = 20;
constexpr int MIN_BALANCE_PAISE = 5000;
int main() {
    cout << "Metro Fare Details" << endl;
    cout << "Inner Zone Fare: Rs. "
         << BASE_FARE_PAISE[0] / 100 << endl;
    cout << "Middle Zone Fare: Rs. "
         << BASE_FARE_PAISE[1] / 100 << endl;
    cout << "Outer Zone Fare: Rs. "
         << BASE_FARE_PAISE[2] / 100 << endl;
    cout << "Peak Surcharge: "
         << PEAK_SURCHARGE_PERCENT << "%" << endl;
    cout << "Minimum Balance: Rs. "
         << MIN_BALANCE_PAISE / 100 << endl;
    return 0;
}
