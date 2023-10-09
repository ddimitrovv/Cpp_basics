#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int total_groups;
    cin >> total_groups;

    int musala = 0, montBlanc = 0, kilimanjaro = 0, k2 = 0, everest = 0;

    for (int i = 0; i < total_groups; ++i) {
        int group_size;
        cin >> group_size;

        if (group_size <= 5) {
            musala += group_size;
        } else if (group_size <= 12) {
            montBlanc += group_size;
        } else if (group_size <= 25) {
            kilimanjaro += group_size;
        } else if (group_size <= 40) {
            k2 += group_size;
        } else {
            everest += group_size;
        }
    }

    int total_climbers = musala + montBlanc + kilimanjaro + k2 + everest;

    cout << fixed << setprecision(2);
    cout << (static_cast<double>(musala) / total_climbers) * 100 << "%" << endl;
    cout << (static_cast<double>(montBlanc) / total_climbers) * 100 << "%" << endl;
    cout << (static_cast<double>(kilimanjaro) / total_climbers) * 100 << "%" << endl;
    cout << (static_cast<double>(k2) / total_climbers) * 100 << "%" << endl;
    cout << (static_cast<double>(everest) / total_climbers) * 100 << "%" << endl;

    return 0;
}