#include <iostream>
using namespace std;

int main() {
    float dog_food_pack_price = 2.5;
    float cat_food_pack_price = 4;
    int dog_food_packs, cat_food_packs;
    cin >> dog_food_packs;
    cin >> cat_food_packs;
    float total = (dog_food_pack_price * dog_food_packs) + (cat_food_pack_price * cat_food_packs);
    cout << total << endl;
    return 0;
}