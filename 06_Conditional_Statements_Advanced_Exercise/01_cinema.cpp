#include <iostream>
#include <string>
using namespace std;

int main() {
    string type_of_movie_projection;
    int rows, cols;
    cin >> type_of_movie_projection >> rows >> cols;
    double total_amount;
    if (type_of_movie_projection == "Premiere") {
        total_amount = rows * cols * 12;
    } else if (type_of_movie_projection == "Normal") {
        total_amount = rows * cols * 7.5;
    } else if (type_of_movie_projection == "Discount") {
        total_amount = rows * cols * 5;
    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << total_amount << " leva." << endl;
    return 0;
}
