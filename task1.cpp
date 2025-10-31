#include <iostream>
#include <cctype>
using namespace std;


void NumericConstant(string input) {
    bool isNumeric = true;

    for (int i = 0; i < input.length(); i++) {
        if (!isdigit(input[i])) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric)
        cout << "It is a numeric constant." << endl;
    else
        cout << "It is not numeric." << endl;
}

int main() {
    string input;
    cout << "Enter something: ";
    cin >> input;

    NumericConstant(input);

    return 0;
}

