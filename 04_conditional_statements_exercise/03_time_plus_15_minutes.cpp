#include <iostream>
using namespace std;

int main() {
    int time_hours, time_minutes;
    cin >> time_hours >> time_minutes;
    int total_time_minutes = time_hours * 60 + time_minutes + 15;
    int total_hours = total_time_minutes / 60;
    int total_minutes = total_time_minutes % 60;
    if (total_hours > 23) {
        total_hours = 0;
    }
    if (total_time_minutes > 59) {
        total_minutes = 60 - (60 - total_minutes);
    }
    if (total_minutes < 10) {
        cout << total_hours << ":0" << total_minutes << endl;
    } else {
        cout << total_hours << ":" << total_minutes << endl;
    }
    return 0;
}