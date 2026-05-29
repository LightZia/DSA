#include <iostream>
using namespace std;

int main() {
    int arr[20], length;
    cout << "Enter the length of array: ";
    cin >> length;

    int i;
    cout << "Enter " << length << " elements: ";
    for(i = 0; i < length; i++) {
        cin >> arr[i];
    }

    for(i = 0; i < length; i++) {
        if(arr[i+1] != arr[i]+1) {
            break;
        }
    }

    if(i == length) {
        cout << "No missing elements";
    }
    else {
        cout << "Missing elements is: " << arr[i] + 1;
    }

    return 0;
}