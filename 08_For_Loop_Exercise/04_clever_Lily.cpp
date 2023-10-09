#include <iostream>

using namespace std;

int main() {
    int lily_age, toy_price;
    double washing_machine_price;
    cin >> lily_age >> washing_machine_price >> toy_price;

    int collected_money = 0;

    int counter = 1;
    for (int i = 1; i <= lily_age; i++) {
        if (i % 2 == 0) {
            collected_money += 10 * counter - 1;
            counter++;
        } else {
            collected_money += toy_price;
        }
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (collected_money >= washing_machine_price) {
        cout << "Yes! " << collected_money - washing_machine_price << endl;
    } else {
        cout << "No! " << washing_machine_price - collected_money << endl;
    }

    return 0;
}