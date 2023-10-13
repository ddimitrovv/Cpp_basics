#include <iostream>

using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    long long prime_sum = 0;
    long long non_prime_sum = 0;
    while (true) {
        string input;
        cin >> input;

        if (input == "stop") {
            break;
        }

        int number = stoi(input);

        if (number < 0) {
            cout << "Number is negative." << endl;
            continue;
        }

        if (is_prime(number)) {
            prime_sum += number;
        } else {
            non_prime_sum += number;
        }
    }

    cout << "Sum of all prime numbers is: " << prime_sum << endl;
    cout << "Sum of all non prime numbers is: " << non_prime_sum << endl;

    return 0;
}