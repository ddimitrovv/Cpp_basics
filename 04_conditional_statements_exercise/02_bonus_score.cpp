#include <iostream>
using namespace std;

int main() {
    int num;
    double bonus_points = 0.0;
    cin >> num;
    if (num <= 100) {
        bonus_points += 5;
    } else if (num > 100 && num <= 1000) {
        bonus_points += num * 0.2;
    } else if (num > 1000) {
        bonus_points += num * 0.1;
    }
    if (num % 2 != 1) {
        bonus_points += 1;
    }
    if (num % 10 == 5) {
        bonus_points += 2;
    }
    cout << bonus_points << endl;
    cout << num + bonus_points << endl;
    return 0;
}