#include <iostream>

using namespace std;


int main() {
    float a = 0, h = 0;
    cin >> a >> h;

    float area = a * h / 2;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << area << endl;

    return 0;
}
