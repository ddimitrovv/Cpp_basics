#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int tournaments = 0, points = 0;
    cin >> tournaments >> points;

    int total_points = points;
    int won_tournaments = 0;
    int final_points = total_points;
    for (int i = 0; i < tournaments; ++i) {
        string condition;
        cin >> condition;

        if (condition == "W") {
            final_points += 2000;
            won_tournaments++;
        } else if (condition == "F") {
            final_points += 1200;
        } else if (condition == "SF") {
            final_points += 720;
        }
    }

    double average_points = static_cast<double>(final_points - total_points) / tournaments;
    double percentage_won = static_cast<double>(won_tournaments) / tournaments * 100;

    cout << "Final points: " << final_points << endl;
    cout << "Average points: " << static_cast<int>(average_points) << endl;
    cout << fixed << setprecision(2) << percentage_won << "%" << endl;

    return 0;
}
