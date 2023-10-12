#include <iostream>
#include <string>

using namespace std;

int main() {
    int goal = 10000, total_steps = 0;

    while (total_steps < goal) {
        string input;
        cin >> input;

        if (input == "Going") {
            cin >> input;  // Read "home"
            int steps_to_home;
            cin >> steps_to_home;
            total_steps += steps_to_home;
            break;
        }

        int steps = stoi(input);
        total_steps += steps;
    }

    if (total_steps < goal) {
        int diff = goal - total_steps;
        cout << diff << " more steps to reach goal." << endl;
    } else {
        cout << "Goal reached! Good job!" << endl;
    }

    return 0;
}