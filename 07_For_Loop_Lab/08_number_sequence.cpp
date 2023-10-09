#include <iostream>
#include <limits>

using namespace std;

int main() {
    int range;
    cin >> range;

    int max_num = numeric_limits<int>::min();
    int min_num = numeric_limits<int>::max();

    for (int i = 1; i <= range; i++) {
        int num;
        cin >> num;
        if (num > max_num) {
            max_num = num;
        }
        if (num < min_num) {
            min_num = num;
        }
    }
    cout << "Max number: " << max_num << endl;
    cout << "Min number: " << min_num << endl;
    return 0;
}