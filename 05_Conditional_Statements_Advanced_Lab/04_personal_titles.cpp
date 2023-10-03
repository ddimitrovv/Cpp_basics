#include <iostream>
#include <string>
using namespace std;

int main() {
    float age;
    string gender;
    cin >> age;
    cin.ignore();
    getline(cin, gender);

    if (age < 16) {
        if (gender == "m") {
            cout << "Master" << endl;
        } else if (gender == "f"){
            cout << "Miss" << endl;
        }
    } else if (age >= 16) {
        if (gender == "m") {
            cout << "Mr." << endl;
        } else if (gender == "f"){
            cout << "Ms." << endl;
        }
    }
    return 0;
}
