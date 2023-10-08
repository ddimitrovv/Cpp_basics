#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int hour_of_exam, minutes_of_exam, hour_of_arrive, minutes_of_arrive;
    cin >> hour_of_exam >> minutes_of_exam >> hour_of_arrive >> minutes_of_arrive;

    int exam_time = hour_of_exam * 60 + minutes_of_exam;
    int arrive_time = hour_of_arrive * 60 + minutes_of_arrive;
    int difference = abs(exam_time - arrive_time);
    int hours = difference / 60;
    int minutes = difference % 60;
    string condition;
    string before_after;

    if (difference == 0) {
        cout << "On time" << endl;
    } else {
        if (exam_time < arrive_time) {
            condition = "Late";
            before_after = "after";
        } else if (difference <= 30 && exam_time > arrive_time) {
            condition = "On time";
            before_after = "before";
        } else if (difference > 30 && exam_time > arrive_time) {
            condition = "Early";
            before_after = "before";
        }

        cout << condition << endl;
        if (condition == "Early" || condition == "Late" || (condition == "On time" && difference <= 30 && difference > 0)) {
            string hours_minutes = (hours >= 1) ? "hours" : "minutes";
            string minutes_less_than_ten = (minutes < 10 && condition != "On time") ? "0" : "";
            if (hours > 0) {
                cout << hours << ":" << minutes_less_than_ten << minutes << " " << hours_minutes << " " << before_after << " the start" << endl;
            } else {
                cout << minutes << " minutes " << before_after << " the start" << endl;
            }
        }
    }

    return 0;
}