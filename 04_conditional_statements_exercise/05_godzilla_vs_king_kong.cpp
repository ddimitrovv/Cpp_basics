#include <iostream>
using namespace std;

int main() {
    double movie_budget, people, clothing_price;
    cin >> movie_budget >> people >> clothing_price;
    double decor = movie_budget * 0.1;
    double total_clothing_price = people * clothing_price;
    if (people > 150) {
        total_clothing_price *= 0.9;
    }
    double total_expenses = total_clothing_price + decor;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (total_expenses > movie_budget) {
        cout << "Not enough money!" << endl <<
        "Wingard needs " << total_expenses - movie_budget <<" leva more." << endl;
    } else {
        cout << "Action!" << endl <<
             "Wingard starts filming with " << movie_budget - total_expenses <<" leva left." << endl;
    }
    return 0;
}