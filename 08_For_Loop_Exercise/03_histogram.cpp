#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    int count_p1 = 0, count_p2 = 0, count_p3 = 0, count_p4 = 0, count_p5 = 0;

    for (int i = 0; i < n; ++i) {
        if (numbers[i] < 200) {
            count_p1++;
        } else if (numbers[i] >= 200 && numbers[i] < 400) {
            count_p2++;
        } else if (numbers[i] >= 400 && numbers[i] < 600) {
            count_p3++;
        } else if (numbers[i] >= 600 && numbers[i] < 800) {
            count_p4++;
        } else {
            count_p5++;
        }
    }

    int total = count_p1 + count_p2 + count_p3 + count_p4 + count_p5;

    double percentage_p1 = (static_cast<double>(count_p1) / total) * 100;
    double percentage_p2 = (static_cast<double>(count_p2) / total) * 100;
    double percentage_p3 = (static_cast<double>(count_p3) / total) * 100;
    double percentage_p4 = (static_cast<double>(count_p4) / total) * 100;
    double percentage_p5 = (static_cast<double>(count_p5) / total) * 100;

    cout << fixed << setprecision(2);
    cout << percentage_p1 << "%" << endl;
    cout << percentage_p2 << "%" << endl;
    cout << percentage_p3 << "%" << endl;
    cout << percentage_p4 << "%" << endl;
    cout << percentage_p5 << "%" << endl;

    return 0;
}