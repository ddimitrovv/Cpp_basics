#include <iostream>
#include <string>

using namespace std;

int main() {
    double budget;
    string season;
    cin >> budget >> season;

    string destination;
    string holiday_type;
    double money_to_spend = 0.0;

    if (budget <= 100) {
        destination = "Bulgaria";
        if (season == "summer") {
            money_to_spend = budget * 0.3;
            holiday_type = "Camp";
        } else if (season == "winter") {
            money_to_spend = budget * 0.7;
            holiday_type = "Hotel";
        }
    } else if (budget > 100 && budget <= 1000) {
        destination = "Balkans";
        if (season == "summer") {
            money_to_spend = budget * 0.4;
            holiday_type = "Camp";
        } else if (season == "winter") {
            money_to_spend = budget * 0.8;
            holiday_type = "Hotel";
        }
    } else if (budget > 1000) {
        destination = "Europe";
        money_to_spend = budget * 0.9;
        holiday_type = "Hotel";
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "Somewhere in " << destination << endl;
    cout << holiday_type << " - " << money_to_spend << endl;

    return 0;
}