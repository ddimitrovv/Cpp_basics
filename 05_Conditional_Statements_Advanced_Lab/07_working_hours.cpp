#include <iostream>
#include <string>
using namespace std;

int main() {
    int hour;
    string day_of_week;
    cin >> hour >> day_of_week;
    if (day_of_week == "Sunday" || hour < 10 || hour > 18) {
        cout << "closed" << endl;
    } else if (day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Wednesday" ||
                day_of_week == "Thursday" || day_of_week == "Friday" || day_of_week == "Saturday") {
        cout << "open" << endl;
    }
    return 0;
}
