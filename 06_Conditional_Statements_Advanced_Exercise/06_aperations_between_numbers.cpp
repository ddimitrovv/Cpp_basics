#include <iostream>
#include <string>

using namespace std;

int main() {
    int first_number, second_number;
    string operator_symbol;

    cin >> first_number >> second_number >> operator_symbol;

    string even_odd;
    int result;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (second_number == 0 && (operator_symbol == "/" || operator_symbol == "%")) {
        cout << "Cannot divide " << first_number << " by zero" << endl;
    } else if (operator_symbol == "%") {
        cout << first_number << " % " << second_number << " = " << first_number % second_number << endl;
    } else if (operator_symbol == "/") {
        cout << first_number << " / " << second_number << " = " << static_cast<double>(first_number) / second_number << endl;
    } else {
        if (operator_symbol == "+") {
            result = first_number + second_number;
        } else if (operator_symbol == "-") {
            result = first_number - second_number;
        } else if (operator_symbol == "*") {
            result = first_number * second_number;
        }

        if (result % 2 != 0) {
            even_odd = "odd";
        } else {
            even_odd = "even";
        }

        cout << first_number << " " << operator_symbol << " " << second_number <<
            " = " << result << " - " << even_odd <<  endl;
    }

    return 0;
}