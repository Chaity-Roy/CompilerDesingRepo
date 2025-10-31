#include <iostream>
using namespace std;

void checkIdentifier(string input) {
    int i;
    bool valid = true;


    if (!((input[0] >= 'A' && input[0] <= 'Z') ||
          (input[0] >= 'a' && input[0] <= 'z') ||
          (input[0] == '_'))) {
        valid = false;
    }


    for (i = 1; i < input.length(); i++) {
        if (!((input[i] >= 'A' && input[i] <= 'Z') ||
              (input[i] >= 'a' && input[i] <= 'z') ||
              (input[i] >= '0' && input[i] <= '9') ||
              (input[i] == '_'))) {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "It is a valid identifier." << endl;
    else
        cout << "It is not a valid identifier." << endl;
}

int main() {
    string input;

    cout << "Enter something: ";
    cin >> input;

    checkIdentifier(input);

    return 0;
}
