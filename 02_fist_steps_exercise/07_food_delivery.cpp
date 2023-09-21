#include <iostream>
using namespace std;

int main() {
    double chicken_menu = 10.35;
    double fish_menu = 12.40;
    double vegeterian_menu = 8.15;
    double desert_percent = 1.2;
    double delivery = 2.50;
    int total_chicken_menus, total_fish_menus, total_vegeterian_menus;
    cin >> total_chicken_menus;
    cin >> total_fish_menus;
    cin >> total_vegeterian_menus;
    double total_amount = (total_chicken_menus * chicken_menu +
            total_fish_menus * fish_menu + total_vegeterian_menus * vegeterian_menu) * desert_percent + delivery;
    cout << total_amount << endl;

    return 0;
}
