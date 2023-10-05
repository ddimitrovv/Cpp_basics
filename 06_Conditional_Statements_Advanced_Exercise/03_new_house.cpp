#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int budget, count_flowers;
    string type_flowers;
    cin >> type_flowers >> count_flowers >> budget;
    double total_amount = 0.0;

    if (type_flowers == "Roses") {
        if (count_flowers > 80) {
            total_amount = count_flowers * 5 * 0.9;
        } else {
            total_amount = count_flowers * 5;
        }
    } else if (type_flowers == "Dahlias") {
        if (count_flowers > 90) {
            total_amount = count_flowers * 3.80 * 0.85;
        } else {
            total_amount = count_flowers * 3.80;
        }
    } else if (type_flowers == "Tulips") {
        if (count_flowers > 80) {
            total_amount = count_flowers * 2.80 * 0.85;
        } else {
            total_amount = count_flowers * 2.80;
        }
    } else if (type_flowers == "Narcissus") {
        if (count_flowers < 120) {
            total_amount = count_flowers * 3 * 1.15;
        } else {
            total_amount = count_flowers * 3;
        }
    } else if (type_flowers == "Gladiolus") {
        if (count_flowers < 80) {
            total_amount = count_flowers * 2.50 * 1.2;
        } else {
            total_amount = count_flowers * 2.50;
        }
    }
    double difference = fabs(budget - total_amount);
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget >= total_amount) {
        cout << "Hey, you have a great garden with " << count_flowers << " " << type_flowers <<
            " and " << difference << " leva left." << endl;
    } else {
        cout << "Not enough money, you need " << difference << " leva more." << endl;
    }
    return 0;
}