#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    map<char, int> dictionary;

    dictionary['a'] = 1;
    dictionary['e'] = 2;
    dictionary['i'] = 3;
    dictionary['o'] = 4;
    dictionary['u'] = 5;
    int result = 0;
    for (char letter : input) {
        if (dictionary.find(letter) != dictionary.end()) {
            result += dictionary[letter];
        }
    }
    cout << result << endl;
    return 0;
}