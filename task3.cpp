#include <iostream>
#include <string>
using namespace std;

void checkComment(string input) {
    if (input.substr(0, 2) == "//") {
        cout << "It is a single-line comment." << endl;
    }
    else if (input.substr(0, 2) == "/*" && input.substr(input.length() - 2, 2) == "*/") {
        cout << "It is a multi-line comment." << endl;
    }
    else {
        cout << "It is not a comment." << endl;
    }
}

int main() {
    string input;
    cout << "Enter a line: ";
    getline(cin, input);

    checkComment(input);

    return 0;
}

