#include <iostream>
using namespace std;

int main() {
    int range;
    cin >> range;

    int odd_sum = 0;
    int even_sum = 0;

    for (int i = 0; i < range; i++) {
        int num;
        cin >> num;
        if (i % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }
    if (even_sum == odd_sum) {
        cout << "Yes" << endl << "Sum = "  << even_sum << endl;
    } else {
        cout << "No"<< endl << "Diff = " << abs(even_sum - odd_sum) << endl;
    }
    return 0;
}