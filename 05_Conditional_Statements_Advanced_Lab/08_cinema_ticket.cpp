#include <iostream>
#include <string>
using namespace std;

int main() {
    string day_of_week;
    cin >> day_of_week;
    int ticket_price;
    if (day_of_week == "Sunday" || day_of_week == "Saturday") {
        ticket_price = 16;
    } else if (day_of_week == "Monday" || day_of_week == "Tuesday" || day_of_week == "Friday") {
        ticket_price = 12;
    } else if (day_of_week == "Wednesday" || day_of_week == "Thursday") {
        ticket_price = 14;
    }
    cout << ticket_price << endl;
    return 0;
}
