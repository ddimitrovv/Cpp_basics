#include <iostream>
#include <string>
using namespace std;

int main() {
    double quantity;
    string product, city;
    cin >> product >> city;
    cin >> quantity;
    double totalAmount;
    if (city == "Sofia") {
        if (product == "coffee") {
            totalAmount += quantity * 0.50;
        } else if (product == "water"){
            totalAmount += quantity * 0.80;
        } else if (product == "beer") {
            totalAmount += quantity * 1.20;
        } else if (product == "sweets") {
            totalAmount += quantity * 1.45;
        } else if (product == "peanuts") {
            totalAmount += quantity * 1.60;
        }
    } else if (city == "Plovdiv") {
        if (product == "coffee") {
            totalAmount += quantity * 0.40;
        } else if (product == "water"){
            totalAmount += quantity * 0.70;
        } else if (product == "beer") {
            totalAmount += quantity * 1.15;
        } else if (product == "sweets") {
            totalAmount += quantity * 1.30;
        } else if (product == "peanuts") {
            totalAmount += quantity * 1.50;
        }
    } else if (city == "Varna") {
        if (product == "coffee") {
            totalAmount += quantity * 0.45;
        } else if (product == "water") {
            totalAmount += quantity * 0.70;
        } else if (product == "beer") {
            totalAmount += quantity * 1.10;
        } else if (product == "sweets") {
            totalAmount += quantity * 1.35;
        } else if (product == "peanuts") {
            totalAmount += quantity * 1.55;
        }
    }

    cout << totalAmount << endl;
    return 0;
}
