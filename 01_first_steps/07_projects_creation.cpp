#include <iostream>
using namespace std;

int main() {
    string architect;
    int number_of_projects;
    cin >> architect;
    cin >> number_of_projects;
    int time_needed = number_of_projects * 3;
    cout << "The architect "<< architect << " will need " << time_needed <<
        " hours to complete " << number_of_projects << " project/s." << endl;
    return 0;
}