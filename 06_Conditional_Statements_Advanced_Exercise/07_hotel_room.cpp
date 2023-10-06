#include <iostream>
#include <string>

using namespace std;

int main() {
    int nights;
    string month;

    cin >> month >> nights;

    double price_for_studio = 0.0;
    double price_for_apartment = 0.0;

    if (month == "May" || month == "October") {
        price_for_studio = nights * 50;
        price_for_apartment = nights * 65;
    } else if (month == "June" || month == "September") {
        price_for_studio = nights * 75.20;
        price_for_apartment = nights * 68.70;
    } else if (month == "July" || month == "August") {
        price_for_studio = nights * 76;
        price_for_apartment = nights * 77;
    }

    if (nights > 14) {
        price_for_apartment *= 0.9;
        if (month == "June" || month == "September") {
            price_for_studio *= 0.8;
        } else if (month == "May" || month == "October") {
            price_for_studio *= 0.7;
        }
    } else if (nights > 7 && (month == "May" || month == "October")) {
        price_for_studio *= 0.95;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Apartment: " << price_for_apartment << " lv." << endl
        << "Studio: " << price_for_studio << " lv." << endl;

    return 0;
}