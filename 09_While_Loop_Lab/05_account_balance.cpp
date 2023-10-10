#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    double totalAmount = 0.0;
    string input;

    while (cin >> input && input != "NoMoreMoney") {

        double amount = stod(input);

        if (amount < 0) {
            cout << "Invalid operation!" << endl;
            break;
        }

        totalAmount += amount;
        cout << "Increase: " << fixed << setprecision(2) << amount << endl;
    }

    cout << "Total: " << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}