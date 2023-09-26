#include <iostream>
using namespace std;

int main() {
    int num_1;
    cin >> num_1;
    if (num_1 < 100) {
        cout << "Less than 100" << endl;
    } else if (100 <= num_1 && 200 >= num_1){
        cout << "Between 100 and 200" << endl;
    } else if (num_1 > 200) {
        cout << "Greater than 200" << endl;
    }
    return 0;
}