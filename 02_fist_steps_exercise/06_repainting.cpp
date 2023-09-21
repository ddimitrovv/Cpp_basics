#include <iostream>
using namespace std;

int main() {
    double nylon_per_sq_m_price = 1.50;
    double paint_per_lt = 14.50;
    double paint_thinner_per_lt = 5.00;
    double bags = 0.40;
    int nylon, paint_lt, thinner_lt, hours;
    cin >> nylon;
    cin >> paint_lt;
    cin >> thinner_lt;
    cin >> hours;
    double total_amount_materials = (nylon + 2) * nylon_per_sq_m_price +
            (paint_lt * 1.1) * paint_per_lt + thinner_lt * paint_thinner_per_lt + bags;;
    double total_workers_amount = (total_amount_materials * 0.3) * hours;
    cout << total_amount_materials + total_workers_amount << endl;

    return 0;
}
