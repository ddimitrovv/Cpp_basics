#include <iostream>
#include <string>

using namespace std;

int main() {
    int limit_bad_grades = 0;
    cin >> limit_bad_grades;

    int total_tasks;
    double total_score;
    int bad_grades = 0;
    string last_task;
    cin.ignore();
    while (true) {
        string current_task;
        getline(cin, current_task);

        if (current_task == "Enough") {
            break;
        }
        int current_grade;
        cin >> current_grade;
        if (current_grade <= 4) {
            bad_grades++;
            if (bad_grades == limit_bad_grades) {
                cout << "You need a break, " << bad_grades << " poor grades." << endl;
                break;
            }
        }
        total_tasks++;
        last_task = current_task;
        total_score += current_grade;
        cin.ignore();
    }

    if (bad_grades < limit_bad_grades) {
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Average score: " << total_score / total_tasks << endl;
        cout << "Number of problems: " << total_tasks << endl;
        cout << "Last problem: " << last_task << endl;
    }

    return 0;
}
