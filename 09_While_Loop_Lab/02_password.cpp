#include <iostream>
#include <string>
using namespace std;

int main() {
    string user, passwd, passwd_check;
    cin >> user >> passwd;

    while (cin >> passwd_check && passwd_check != passwd) {
//        cout << "Invalid password. Please try again!" << endl;
    }
    cout << "Welcome " << user << "!" << endl;
    return 0;
}
