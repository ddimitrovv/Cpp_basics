#include <iostream>
using namespace std;

int main() {
    double height, width, length, percent;
    cin >> height;
    cin >> width;
    cin >> length;
    cin >> percent;
    double fish_tank_volume_lt = (height * width * length) / 1000;
    double total_liters = fish_tank_volume_lt * ((100 - percent) / 100);
    cout << total_liters << endl;

    return 0;
}
