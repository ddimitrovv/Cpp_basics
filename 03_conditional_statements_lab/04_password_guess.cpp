#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "s3cr3t!P@ssw0rd";
    string passwd;
    cin >> passwd;
    if (passwd == password) {
        cout << "Welcome" << endl;
    } else {
        cout << "Wrong password!" << endl;
    }
    return 0;
}
