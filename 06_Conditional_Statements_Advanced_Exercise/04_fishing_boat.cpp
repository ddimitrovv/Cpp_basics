#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int budget, fishers;
    string season;
    cin >> budget >> season >> fishers;

    double total_amount = 0.0;

    if (season == "Spring") {
        total_amount = 3000;
    } else if (season == "Summer" || season == "Autumn") {
        total_amount = 4200;
    } else if (season == "Winter") {
        total_amount = 2600;
    }

    if (fishers <= 6) {
        total_amount *= 0.9;
    } else if (6 < fishers && fishers <= 11) {
        total_amount *= 0.85;
    } else if (fishers >= 12) {
        total_amount *= 0.75;
    }

    if (fishers % 2 == 0 && season != "Autumn") {
        total_amount *= 0.95;
    }

    double difference = fabs(budget - total_amount);

    cout.setf(ios::fixed);
    cout.precision(2);

    if (budget >= total_amount) {
        cout << "Yes! You have " << difference << " leva left." << endl;
    } else {
        cout << "Not enough money! You need " << difference << " leva." << endl;
    }

    return 0;
}