#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    while (cin >> input && input != "Stop") {
        cout << input << endl;
    }

    return 0;
}