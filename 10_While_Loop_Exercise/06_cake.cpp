#include <iostream>

using namespace std;

int main() {
    int width = 0, length = 0;
    cin >> width >> length;
    string input;
    int total_pieces = width * length;

    while (true) {
        cin >> input;
        if (input == "STOP") {
            cout << total_pieces << " pieces are left." << endl;
            break;
        }
        total_pieces -= stoi(input);
        if (total_pieces < 0) {
            cout << "No more cake left! You need " << abs(total_pieces) << " pieces more." << endl;
            break;
        }
    }

    return 0;
}