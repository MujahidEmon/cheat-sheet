#include <iostream>
#include <string>
using namespace std;

int main() {
    string expr;
    cout << "Enter a simple math expression (only numbers and + - * /): ";
    cin >> expr;

    int result = 0;
    int currentNumber = 0;
    char lastOperator = '+';

    for (int i = 0; i < expr.length(); i++) {
        char ch = expr[i];

        if (ch >= '0' && ch <= '9') {
            currentNumber = ch - '0';
        }

        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || i == expr.length() - 1) {
            if (lastOperator == '+') {
                result += currentNumber;
            } else if (lastOperator == '-') {
                result -= currentNumber;
            } else if (lastOperator == '*') {
                result *= currentNumber;
            } else if (lastOperator == '/') {
                result /= currentNumber;
            }
            lastOperator = ch;
        }
    }

    cout << "Result: " << result << endl;
    return 0;
}
