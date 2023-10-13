#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int judges;
    cin >> judges;
    cin.ignore();

    string presentation;
    double total_score = 0;
    int presentations_count = 0;

    while (true) {
        getline(cin, presentation);

        if (presentation == "Finish") {
            break;
        }

        double average_score = 0;

        for (int i = 0; i < judges; i++) {
            double score;
            cin >> score;
            average_score += score;
        }

        average_score /= judges;
        total_score += average_score;
        presentations_count++;

        cout << presentation << " - "  << fixed << setprecision(2) << average_score << "." << endl;
        cin.ignore();
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    if (presentations_count > 0) {
        double finalAssessment = total_score / presentations_count;
        cout << "Student's final assessment is " << fixed << setprecision(2) << finalAssessment << "." << endl;
    }

    return 0;
}