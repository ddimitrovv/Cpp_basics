#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    cin >> city;
    double sells;
    cin >> sells;
    double commission = 0.0;

    if (sells >= 0 && sells <= 500) {
        if (city == "Sofia") {
            commission = 0.05;
        } else if (city == "Varna") {
            commission = 0.045;
        } else if (city == "Plovdiv") {
            commission = 0.055;
        }
    } else if (sells  > 500 && sells <= 1000) {
        if (city == "Sofia") {
            commission = 0.07;
        } else if (city == "Varna") {
            commission = 0.075;
        } else if (city == "Plovdiv") {
            commission = 0.08;
        }
    } else if (sells > 1000 && sells <= 10000) {
        if (city == "Sofia") {
            commission = 0.08;
        } else if (city == "Varna") {
            commission = 0.10;
        } else if (city == "Plovdiv") {
            commission = 0.12;
        }
    } else if (sells > 10000) {
        if (city == "Sofia") {
            commission = 0.12;
        } else if (city == "Varna") {
            commission = 0.13;
        } else if (city == "Plovdiv") {
            commission = 0.145;
        }
    }

    if (commission != 0.0) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << commission * sells << endl;
    } else {
        cout << "error" << endl;
    }
    return 0;
}
