#include <iostream>
#include <climits>
using namespace std;

int main() {
    int range;
    cin >> range;

    int sum = 0;
    int max_number = INT_MIN;

    for (int i = 0; i < range; ++i) {
        int number;
        cin >> number;
        sum += number;
        if (number > max_number) {
            max_number = number;
        }
    }

    int diff = std::abs(max_number - (sum - max_number));

    if (2 * max_number == sum) {
        cout << "Yes" << endl;
        cout << "Sum = " << max_number << endl;
    } else {
        cout << "No" << endl;
        cout << "Diff = " << diff << endl;
    }

    return 0;
}