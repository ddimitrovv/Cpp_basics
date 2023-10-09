#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    for (char ch : input) {
        cout << ch << endl;
    }

    return 0;
}