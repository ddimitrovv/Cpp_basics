#include <iostream>
using namespace std;

int main() {
    string first_name, last_name, town;
    int age;
    cin >> first_name;
    cin >> last_name;
    cin >> age;
    cin >> town;
    cout << "You are " << first_name << " " << last_name << ", a " 
        << age << "-years old person from " << town << "."<< endl;
    return 0;
}