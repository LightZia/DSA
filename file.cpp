#include <iostream>
using namespace std;

int main() {
    int arr[10], i, freq, n;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;

    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    freq = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[freq], arr[i]);
            freq++;
        }
    }
    for(i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}