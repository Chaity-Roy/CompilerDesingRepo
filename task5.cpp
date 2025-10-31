#include <iostream>
using namespace std;


void findAverage(int arr[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float)sum / size;

    cout << "The average value of the array elements is: " << average << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    findAverage(arr, n);

    return 0;
}
