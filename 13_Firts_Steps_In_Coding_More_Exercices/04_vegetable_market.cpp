#include <iostream>

using namespace std;


int main() {
    float vegetables_price_kg = 0, fruits_price_kg = 0;
    int total_kg_vegetables = 0, total_kg_fruits = 0;
    cin >> vegetables_price_kg >> fruits_price_kg >> total_kg_vegetables >> total_kg_fruits;

    float total_amount_leva = vegetables_price_kg * total_kg_vegetables + fruits_price_kg * total_kg_fruits;
    float total_amount_euro = total_amount_leva / 1.94;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total_amount_euro << endl;
    return 0;
}
