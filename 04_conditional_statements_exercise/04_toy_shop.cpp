#include <iostream>
using namespace std;

int main() {
    double jigsaw_price = 2.60;
    double talking_doll_price = 3.00;
    double teddy_bear_price = 4.10;
    double minion_price = 8.20;
    double truck_price = 2.00;
    double shop_rent = 0.10;
    double fifty_or_more_toys_discount = 0.75;
    double trip_price, jigsaws, talking_dolls, teddy_bears, minions, trucks;
    cin >> trip_price >> jigsaws >> talking_dolls >> teddy_bears >> minions >> trucks;
    double total_price = jigsaw_price * jigsaws +
            talking_doll_price * talking_dolls + teddy_bear_price * teddy_bears +
            minion_price * minions + truck_price * trucks;
    double total_items = jigsaws + talking_dolls + teddy_bears + minions + trucks;
    if (total_items >= 50) {
        total_price *=  fifty_or_more_toys_discount;
    }
    total_price -= total_price * shop_rent;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (total_price - trip_price < 0) {
        cout << "Not enough money! " << trip_price - total_price << " lv needed." << endl;
    } else {
        cout << "Yes! " << total_price - trip_price << " lv left." << endl;
    }
    return 0;
}