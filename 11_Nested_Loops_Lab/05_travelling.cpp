#include <iostream>
#include <string>

using namespace std;

int main() {
    string destination;
    int budget = 0, current_amount = 0, amount = 0;

    while (cin >> destination && destination != "End") {
        cin >> budget;
        while (budget > current_amount) {
            cin >> amount;
            current_amount += amount;
        }
        cout << "Going to " << destination << "!" << endl;
        current_amount = 0;
    }

    return 0;
}