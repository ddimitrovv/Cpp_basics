#include <iostream>

using namespace std;


int main() {
    float b1 = 0, b2 = 0, h = 0;
    cin >> b1 >> b2 >> h;

    float area = (b1 + b2) * h/2;
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << area << endl;

    return 0;
}
