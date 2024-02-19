#include <iostream>

using namespace std;


int main() {
    float degree_celsius = 0;
    cin >> degree_celsius;

    float degree_fahrenheit = degree_celsius * 1.8 + 32;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << degree_fahrenheit << endl;
    return 0;
}
