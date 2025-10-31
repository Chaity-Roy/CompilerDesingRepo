#include <iostream>
#include <string>
using namespace std;


void makeFullName(string firstName, string lastName) {
    string fullName = firstName + " " + lastName;
    cout << "Full Name = " << fullName << endl;
}

int main() {
    string firstName, lastName;

    cout << "Enter your first name: ";
    cin >> firstName;

    cout << "Enter your last name: ";
    cin >> lastName;

    makeFullName(firstName, lastName);

    return 0;
}
