#include <iostream>
#include <string>

using namespace std;

int main() {
    string name, book;
    getline(cin, name);
    int counter = 0;
    bool is_found = false;

    while (getline(cin, book) && book != "No More Books") {

        if (book == name) {
            is_found = true;
            cout << "You checked " << counter << " books and found it." << endl;
            break;
        }
        counter++;
    }

    if (!is_found) {
        cout << "The book you search is not here!" << endl <<  "You checked " << counter << " books." << endl;
    }

    return 0;
}