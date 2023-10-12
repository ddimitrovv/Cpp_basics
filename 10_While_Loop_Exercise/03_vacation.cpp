#include <iostream>
#include <string>

using namespace std;

int main() {
    double needed_money = 0.0, available_money = 0.0;
    cin >> needed_money >> available_money;
    int total_days = 0, days_spending = 0;

    while (needed_money > available_money && days_spending < 5) {
        string command;
        double current_amount = 0.0;
        cin >> command >> current_amount;

        if (command == "save") {
            available_money += current_amount;
            days_spending = 0;
        } else if (command == "spend") {
            available_money = available_money - current_amount > 0 ? available_money - current_amount : 0;
            days_spending++;
        }
        total_days++;
    }

    if (days_spending >= 5) {
        cout << "You can't save the money." << endl << total_days << endl;
    } else {
        cout << "You saved the money for " << total_days << " days." << endl;
    }

    return 0;
}