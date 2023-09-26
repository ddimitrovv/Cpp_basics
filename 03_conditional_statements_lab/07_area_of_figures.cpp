#include <iostream>
#include <string>
using namespace std;

int main() {
    string figure_type;
    double figure_area;
    cin >> figure_type;
    if (figure_type == "square") {
        double a;
        cin >> a;
        figure_area = a * a;
    } else if (figure_type == "rectangle"){
        double a, b;
        cin >> a >> b;
        figure_area = a * b;
    } else if (figure_type == "triangle") {
        double a, h;
        cin >> a >> h;
        figure_area = (a * h) / 2;
    } else if (figure_type == "circle") {
        double pi = 3.14159265359;
        double r;
        cin >> r;
        figure_area = r * r * pi;
    }
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << figure_area << endl;
    return 0;
}