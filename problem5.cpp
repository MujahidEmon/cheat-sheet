#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, result;
    cout << "Enter a string with extra spaces: ";
    getline(cin, input);

    bool space_found = false;

    for (char ch : input) {
        if (ch == ' ') {
            if (!space_found) {
                result += ch;
                space_found = true;
            }
        } else {
            result += ch;
            space_found = false;
        }
    }

    cout << "Cleaned string: " << result << endl;
    return 0;
}
