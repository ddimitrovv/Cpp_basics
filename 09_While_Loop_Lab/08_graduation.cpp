#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;

    int current_class = 1;
    int is_failed = 0;
    double total = 0.0, current = 0.0;

    while (is_failed < 2 && current_class <= 12) {
        cin >> current;
        if (current < 4.0) {
            is_failed++;
            current_class--;
        }
        total += current;
        current_class++;
    }

    cout.setf(ios::fixed);
    cout.precision(2);

    if (is_failed < 2) {
        cout << name << " graduated. Average grade: " << total / (current_class - 1) << endl;
    } else {
        cout << name << " has been excluded at " << current_class << " grade" << endl;
    }
    return 0;
}