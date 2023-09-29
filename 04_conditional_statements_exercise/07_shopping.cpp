#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double vide_card_price = 250.00;
    double budget, video_cards, cpus, rams;
    cin >> budget >> video_cards >> cpus >> rams;
    double video_cards_total_amount = video_cards * vide_card_price;
    double cpu_price = video_cards_total_amount * 0.35;
    double ram_price = video_cards_total_amount * 0.10;
    double total_amount = video_cards_total_amount + cpus * cpu_price + rams * ram_price;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (video_cards > cpus) {
        total_amount *= 0.85;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    if (budget < total_amount) {
        cout << "Not enough money! You need " << total_amount - budget << " leva more!" << endl;
    } else {
        cout << "You have " << budget - total_amount << " leva left!" << endl;
    }
    return 0;
}