#include <iostream>
using namespace std;

int main() {
    int range;
    cin >> range;

    int left_sum = 0;
    int right_sum = 0;

    for (int i = 0; i < range; i++) {
        int num;
        cin >> num;
        left_sum += num;
    }
    for (int i = 0; i < range; i++) {
        int num;
        cin >> num;
        right_sum += num;
    }
    if (left_sum == right_sum) {
        cout << "Yes, sum = " << left_sum << endl;
    } else {
        cout << "No, diff = " << abs(left_sum - right_sum) << endl;
    }
    return 0;
}