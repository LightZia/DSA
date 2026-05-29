#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[20], length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int i;
    cout << "Enter " << length << " elements: ";
    for(i = 0; i < length; i++ ) {
        cin >> arr[i];
    }

    int right, left, minbar, sum, sub;
    sum = 0;
    for(i = 1; i < length-1; i++) {
        left = i - 1;
        right = i + 1;
        if(arr[i] < arr[left] && arr[i] < arr[right]) {
            minbar = min(arr[left], arr[right]);
        }
        sub = minbar-arr[i];
        sum += sub;
    }

    return 0;
}