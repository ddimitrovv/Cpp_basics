#include <iostream>
using namespace std;

int main() {
    int number, next_num, total = 0;
    cin >> number;

    while (total < number) {
        cin >> next_num;
        total += next_num;
    }
    cout << total << endl;
    return 0;
}