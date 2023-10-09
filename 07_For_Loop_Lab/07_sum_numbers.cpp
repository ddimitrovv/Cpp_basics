#include <iostream>

using namespace std;

int main() {
    int range;
    cin >> range;

    int result = 0;
    for (int i = 1; i <= range; i++) {
        int num;
        cin >> num;
        result += num;
    }
    cout << result << endl;
    return 0;
}