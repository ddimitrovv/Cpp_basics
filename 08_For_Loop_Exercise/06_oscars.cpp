#include <iostream>
#include <string>

using namespace std;

int main() {
    string actor_name;
    double total_score = 0.0;
    int judges;
    getline(cin, actor_name);
    cin >> total_score >> judges;
    cin.ignore();
    bool is_nominated = false;

    for (int i = 1; i <= judges; i++) {
        string judge_name;
        double judge_points = 0.0;
        getline(cin, judge_name);
        cin >> judge_points;

        total_score += int(judge_name.length()) * judge_points / 2;

        if (total_score > 1250.5) {
            is_nominated = true;
            break;
        }
        cin.ignore();
    }

    cout.setf(ios::fixed);
    cout.precision(1);
    if (is_nominated) {
        cout << "Congratulations, " << actor_name <<
            " got a nominee for leading role with " << total_score << "!" << endl;
    } else {
        cout << "Sorry, " << actor_name << " you need " << 1250.5 - total_score << " more!" << endl;
    }

    return 0;
}