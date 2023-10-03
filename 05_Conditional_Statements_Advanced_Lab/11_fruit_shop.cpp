#include <iostream>
#include <string>
using namespace std;

int main() {
    string fruit, day_of_week;
    double quantity;
    cin >> fruit >> day_of_week >> quantity;
    double price = 0.0;
    if (day_of_week == "Saturday" || day_of_week == "Sunday") {
        if (fruit == "banana") {
            price = 2.70;
        } else if (fruit == "apple") {
            price = 1.25;
        } else if (fruit == "orange") {
            price = 0.90;
        } else if (fruit == "grapefruit") {
            price = 1.60;
        } else if (fruit == "kiwi") {
            price = 3.00;
        } else if (fruit == "pineapple") {
            price = 5.60;
        } else if (fruit == "grapes") {
            price = 4.20;
        }
    } else if (day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Wednesday" ||
                day_of_week == "Thursday" || day_of_week == "Friday") {
        if (fruit == "banana") {
            price = 2.50;
        } else if (fruit == "apple") {
            price = 1.20;
        } else if (fruit == "orange") {
            price = 0.85;
        } else if (fruit == "grapefruit") {
            price = 1.45;
        } else if (fruit == "kiwi") {
            price = 2.70;
        } else if (fruit == "pineapple") {
            price = 5.50;
        } else if (fruit == "grapes") {
            price = 3.85;
        }
    }

    if (price != 0.0) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << price * quantity << endl;
    } else {
        cout << "error" << endl;
    }
    return 0;
}
