#include <iostream>
#include <string>

using namespace std;

int main() {
    int open_tabs, salary;
    cin >> open_tabs >> salary;
    bool salary_lost = false;

    for (int i = 1; i <= open_tabs; i++) {
        string tab_name;
        cin >> tab_name;
        if (tab_name == "Facebook") {
            salary -= 150;
        } else if (tab_name == "Instagram") {
            salary -= 100;
        } else if (tab_name == "Reddit") {
            salary -= 50;
        }
        if (salary <= 0) {
            salary_lost = true;
            break;
        }
    }

    if (salary_lost) {
        cout << "You have lost your salary." << endl;
    } else {
        cout << int(salary) << endl;
    }

    return 0;
}