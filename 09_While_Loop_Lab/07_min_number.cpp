#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main() {
    int max_number = INT_MAX;
    string input;

    while (cin >> input && input != "Stop") {

        int num = stoi(input);
        if (num < max_number) {
            max_number = num;
        }
    }

    cout << max_number << endl;

    return 0;
}