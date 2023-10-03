#include <iostream>
#include <string>
using namespace std;

int main() {
    string day_of_week;
    cin >> day_of_week;
    if (day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Wednesday" || 
        day_of_week == "Thursday" || day_of_week == "Friday") {
        cout << "Working day" << endl;
    } else if (day_of_week == "Saturday" || day_of_week == "Sunday") {
        cout << "Weekend" << endl;
    } else {
        cout << "Error" << endl;
    }
    return 0;
}