#include <iostream>
#include <string>
using namespace std;

int main() {
    int degree;
    string time_of_the_day, shoes, outfit;
    cin >> degree >> time_of_the_day;
    if (time_of_the_day == "Evening") {
        outfit = "Shirt";
        shoes = "Moccasins";
    } else if (10 <= degree and degree <= 18) {
        if (time_of_the_day == "Morning") {
            outfit = "Sweatshirt";
            shoes = "Sneakers";
        } else if (time_of_the_day == "Afternoon") {
            outfit = "Shirt";
            shoes = "Moccasins";
        }
    } else if (18 < degree and degree <= 24) {
        if (time_of_the_day == "Morning") {
            outfit = "Shirt";
            shoes = "Moccasins";
        } else if (time_of_the_day == "Afternoon") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        }
    } else if (degree >= 25) {
        if (time_of_the_day == "Morning") {
            outfit = "T-Shirt";
            shoes = "Sandals";
        } else if (time_of_the_day == "Afternoon") {
            outfit = "Swim Suit";
            shoes = "Barefoot";
        }
    }
    cout << "It's " << degree << " degrees, get your " << outfit << " and " << shoes << "." << endl;
    return 0;
}