#include <iostream>

using namespace std;

int main() {
    int coins[] = {200, 100, 50, 20, 10, 5, 2, 1};

    double amount;
    cin >> amount;
    int amount_in_st = static_cast<int>(amount * 100);
    int total_coins = 0;
    int current_coin = 0;

    while (amount_in_st > 0) {
        if (amount_in_st - coins[current_coin] < 0) {
            current_coin++;
            continue;
        }
        amount_in_st -= coins[current_coin];
        total_coins++;
    }
    
    cout << total_coins << endl;

    return 0;
}