#include <iostream>
using namespace std;

int main() {
    double amount, interest;
    int months;
    cin >> amount;
    cin >> months;
    cin >> interest;
    double total_amount = amount + months * ((amount * (interest / 100)) / 12);
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total_amount << endl;
    return 0;
}
