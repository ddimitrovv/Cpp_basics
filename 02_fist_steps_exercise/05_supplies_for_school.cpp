#include <iostream>
using namespace std;

int main() {
    double pack_of_pens_price = 5.80;
    double pack_of_highlighters_price = 7.20;
    double detergent_price = 1.20;
    int pen_packs, highlighter_packs, detergents, percent_discount;
    cin >> pen_packs;
    cin >> highlighter_packs;
    cin >> detergents;
    cin >> percent_discount;
    double total_amount = (pen_packs * pack_of_pens_price + highlighter_packs * pack_of_highlighters_price
            + detergents * detergent_price) * ((100 - static_cast <double> (percent_discount)) / 100);
    cout << total_amount << endl;

    return 0;
}
