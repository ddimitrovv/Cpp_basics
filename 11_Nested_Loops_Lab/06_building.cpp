#include <iostream>
#include <string>

using namespace std;

int main() {
    int floors = 0, rooms = 0;
    string var = "L";
    cin >> floors >> rooms;
    for (int floor = floors; floor > 0 ; --floor) {
        for (int room = 0; room < rooms ; ++room) {
            if (floor % 2 != 0 && floor != floors) {
                var = "A";
            } else if (floor % 2 == 0 && floor != floors) {
                var = "O";
            }
            cout << var << floor << room << " ";
        }
        cout << endl;
    }

    return 0;
}