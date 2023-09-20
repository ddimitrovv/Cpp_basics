#include <iostream>
using namespace std;

int main() {
    float price_per_sq_m = 7.61;
    float discount = 0.18;
    double sq_meters;
    cin >> sq_meters;
    double price_without_discount = price_per_sq_m * sq_meters;
    double total_discount = price_without_discount * discount;
    cout << "The final price is: " << price_without_discount - total_discount << " lv." << endl;
    cout << "The discount is: " << total_discount << " lv." << endl;
    return 0;
}