#include <iostream>
#include <string>

using namespace std;

int main() {
    int num = 0, current = 1;
    cin >> num;
    bool bigger = false;
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << current << " ";
            current++;
            if (current > num) {
                bigger = true;
                break;
            }
        }
        if (bigger) {
            break;
        }
        cout << endl;
    }

    return 0;
}