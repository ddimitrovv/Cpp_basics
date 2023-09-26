#include <iostream>
using namespace std;

int main() {
    int time_first, time_second, time_third;
    cin >> time_first >> time_second >> time_third;
    int total_time_seconds = time_first + time_second + time_third;
    int total_minutes = total_time_seconds / 60;
    int total_seconds = total_time_seconds % 60;
    if (total_seconds < 10) {
        cout << total_minutes << ":0" << total_seconds << endl;
    } else {
        cout << total_minutes << ":" << total_seconds << endl;
    }
    return 0;
}