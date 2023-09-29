#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    string movie_name;
    double movie_time;
    double break_time;
    getline(cin, movie_name);
    cin >> movie_time >> break_time;
    double lunch_time = break_time / 8;
    double  relax_time = break_time / 4;
    double time_needed = movie_time + lunch_time + relax_time;
    if (break_time < time_needed) {
        cout << "You don't have enough time to watch " <<
            movie_name << ", you need " << ceil(time_needed - break_time) << " more minutes." << endl;
    } else {
        cout << "You have enough time to watch " << movie_name << " and left with " <<
            ceil(break_time - time_needed) << " minutes free time." << endl;
    }
    return 0;
}