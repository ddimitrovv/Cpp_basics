#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int num = 1111; num <= 9999; num++) {
        int number = num;
        bool is_special = true;

        while (number > 0) {
            int digit = number % 10;
            number /= 10;

            if (digit == 0 || n % digit != 0) {
                is_special = false;
                break;
            }
        }

        if (is_special) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}