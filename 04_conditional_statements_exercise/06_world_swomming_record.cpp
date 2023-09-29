#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double record, distance, time_per_meter;
    cin >> record >> distance >> time_per_meter;
    double delay = floor(distance / 15) * 12.5;
    double final_time = distance * time_per_meter + delay;
    cout.setf(ios::fixed);
    cout.precision(2);
    if (final_time < record) {
        cout << "Yes, he succeeded! The new world record is " << final_time << " seconds." << endl;
    } else {
        cout << "No, he failed! He was " << final_time - record << " seconds slower." << endl;
    }
    return 0;
}