#include <iostream>
using namespace std;

int main() {
    int number, next_num = 1;
    cin >> number;

    while (number >= next_num) {
        cout << next_num << endl;
        next_num = next_num * 2 + 1;
    }
    return 0;
}