#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    int total = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= n; ++j) {
            for (int k = 0; k <= n; ++k) {
                if (i + j + k == n) {
                    total++;
                    continue;
                }
            }
        }
    }
    cout << total << endl;

    return 0;
}