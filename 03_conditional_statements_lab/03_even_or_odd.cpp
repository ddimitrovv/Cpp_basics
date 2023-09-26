#include <iostream>
using namespace std;

int main() {
    int num_1;
    cin >> num_1;
    if (num_1 % 2 != 1) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
    return 0;
}
