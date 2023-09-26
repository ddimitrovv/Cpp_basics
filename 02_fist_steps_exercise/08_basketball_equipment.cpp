#include <iostream>
using namespace std;

int main() {
    double year_tax;
    cin >> year_tax;
    double basketball_shoes = year_tax * 0.6;
    double basketball_suit = basketball_shoes * 0.8;
    double ball = basketball_suit / 4;
    double accessories = ball / 5;
    double total_amount = basketball_shoes + basketball_suit + ball + accessories + year_tax;

    cout << total_amount << endl;

    return 0;
}
