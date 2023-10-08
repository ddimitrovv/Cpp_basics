#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int days;
    string room_type, mark;
    cin >> days;
    cin.ignore();
    getline(cin, room_type);
    cin >> mark;
    int nights = days - 1;
    double total_amount = 0.0;

    if (room_type == "room for one person") {
        total_amount = nights * 18.00;
    } else if (room_type == "apartment") {
        total_amount = nights * 25.00;
    } else if (room_type == "president apartment") {
        total_amount = nights * 35.00;
    }

    if (room_type != "room for one person") {
        if (days < 10) {
            if (room_type == "apartment") {
                total_amount *= 0.7;
            } else if (room_type == "president apartment") {
                    total_amount *= 0.9;
            }
        } else if (days >= 10 && days <= 15) {
            if (room_type == "apartment") {
                total_amount *= 0.65;
            } else if (room_type == "president apartment") {
                total_amount *= 0.85;
            }
        } else if (days > 15) {
            if (room_type == "apartment") {
                total_amount *= 0.5;
            } else if (room_type == "president apartment") {
                total_amount *= 0.8;
            }
        }
    }

    if (mark == "positive") {
        total_amount *= 1.25;
    } else if (mark == "negative") {
        total_amount *= 0.9;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total_amount << endl;

    return 0;
}