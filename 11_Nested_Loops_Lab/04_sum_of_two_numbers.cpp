#include <iostream>

using namespace std;

int main() {
    int first_num = 0, second_num = 0, magic_mun = 0;
    cin >> first_num >> second_num >> magic_mun;
    int counter = 0;
    bool is_found = false;
    for (int i = first_num; i <= second_num; ++i) {
        for (int j = first_num; j <= second_num; ++j) {
            if (i + j == magic_mun) {
                counter++;
                cout << "Combination N:" << counter << " (" << i << " + " << j << " = " << magic_mun << ")" << endl;
                is_found = true;
                break;
            }
            counter++;
        }
        if (is_found) {
            break;
        }
    }

    if (!is_found) {
        cout << counter << " combinations - neither equals " << magic_mun << endl;
    }

    return 0;
}