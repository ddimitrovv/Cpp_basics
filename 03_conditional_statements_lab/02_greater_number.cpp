#include <iostream>
using namespace std;

int main() {
    int num_1, num_2;
    cin >> num_1;
    cin >> num_2;
    if (num_1 < num_2) {
        cout << num_2 << endl;
    } else {
        cout << num_1 << endl;
    }
    return 0;
}
