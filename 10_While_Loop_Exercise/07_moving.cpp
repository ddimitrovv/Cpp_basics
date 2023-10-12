#include <iostream>

using namespace std;

int main() {
    int width = 0, length = 0, height = 0;
    cin >> width >> length >> height;
    int free_space = width * length * height;

    while (free_space > 0) {
        string input;
        cin >> input;
        if (input == "Done") {
            cout << free_space << " Cubic meters left." << endl;
            break;
        }
        free_space -= stoi(input);
        if (free_space < 0) {
            cout << "No more free space! You need " << abs(free_space) << " Cubic meters more." << endl;
            break;
        }
    }

    return 0;
}