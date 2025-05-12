#include <iostream>
#include <string>
using namespace std;

string keywords[] = {
    "int", "float", "double", "char", "if", "else", "while", "for", "return",
    "break", "continue", "void", "class", "public", "private", "protected",
    "switch", "case", "do", "static", "const", "true", "false", "new", "delete"
};

bool isKeyword(string word) {
    int keywordCount = sizeof(keywords) / sizeof(keywords[0]);
    for (int i = 0; i < keywordCount; i++) {
        if (word == keywords[i]) {
            return true;
        }
    }
    return false;
}

bool isValidIdentifier(string word) {
    if (word.empty()) return false;

    if (!(isalpha(word[0]) || word[0] == '_')) {
        return false;
    }

    for (int i = 1; i < word.length(); i++) {
        if (!(isalnum(word[i]) || word[i] == '_')) {
            return false;
        }
    }

    return true;
}

int main() {
    string input;

    cout << "Enter a word: ";
    cin >> input;

    if (isKeyword(input)) {
        cout << "This is a C++ keyword." << endl;
    } else if (isValidIdentifier(input)) {
        cout << "This is a valid identifier." << endl;
    } else {
        cout << "This is not a valid identifier." << endl;
    }

    return 0;
}
