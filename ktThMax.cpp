#include <iostream>
using namespace std;

int main() {

    int length, arr[20];
    cout << "Enter length of the array: ";
    cin >> length;

    int i;
    cout << "Enter " << length << " elements: ";
    for(i = 0; i < length; i++) {
        cin >> arr[i];
    }

    int k;
    cout << "Enter degree of Min/Max: ";
    cin >> k;

    int j;
    int max = 0;
    for(i = length-1; i > 0; i--) {
        for(j = 0; j < i; j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    if(arr[length - k] >= arr[0]) {
        cout << k << " order Min: " << arr[k-1] << endl;
        cout << k << " order of Max: " << arr[length - k] << endl;
    }

    for(i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}