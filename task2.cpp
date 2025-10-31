#include <iostream>
using namespace std;


void checkOperators(string input) {
    bool found = false;
    cout << "Checking for operators..." << endl;

    for (int i = 0; i < input.length(); i++) {
        if (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
            input[i] == '/' || input[i] == '%' || input[i] == '=') {
            cout << "Operator found: " << input[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No operators found." << endl;
}

int main() {
    string input;
    cout << "Enter expression: ";
    cin >> input;

    checkOperators(input);

    return 0;
}

