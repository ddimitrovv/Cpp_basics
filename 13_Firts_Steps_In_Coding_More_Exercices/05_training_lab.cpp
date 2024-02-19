#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float length, width;
    cin >> length >> width;

    const float desk_width = 70;
    const float desk_length = 120;
    const float corridor_width = 100;

    double w_desks = floor((width * 100 - corridor_width) / desk_width);
    double l_desks = floor(length * 100 / desk_length);

    int total_workspaces = (w_desks * l_desks) - 3;

    cout << total_workspaces << endl;

    return 0;
}
