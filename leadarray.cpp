#include <iostream>
#include <stack>
using namespace std;

int main() {

    int arr[20], length;
    cout << "Enter length of array: ";
    cin >> length;

    int i;
    cout << "Enter " << length << " elements: ";
    for(i = 0; i < length; i++) {
        cin >> arr[i];
    }

    stack<int> st;

    //  Brute Force method
    // int j;
    // for(i = 0; i < length; i++) {
    //     for(j = i + 1; j < length; j++) {
    //         if(arr[j] > arr[i]) {
    //             cout << arr[i] << " : " << arr[j] << endl;
    //             break;
    //         }
    //     }
    //     if(j == length) {
    //         cout << arr[i] << " : " << -1 << endl;
    //     }
    // }

    // Optimized Time Complexity
    // int  maxElem = arr[length - 1];
    // cout << maxElem << " : " << -1 << endl;
    // for(i = length - 2; i >= 0; i--) {
    //     if(arr[i] < arr[i + 1]) {
    //         cout << arr[i] << " : " << arr[i + 1] << endl;
    //     }
    //     else if(arr[i] < maxElem) {
    //         cout << arr[i] << " : " << maxElem << endl;
    //     }

    //     else {
    //         cout << arr[i] << " : " << -1 << endl;
    //         maxElem = arr[i];
    //     }
    // }

    // Stack method
    for(i = length-1; i >= 0; i--) {
        while(st.size() > 0 && arr[i] > st.top()) {
            st.pop();
        }

        if(st.empty()) {
            cout << arr[i] << " : " << -1 << endl;
        }

        else {
            cout << arr[i] << " : " << st.top() << endl;
        }

        st.push(arr[i]);
    }

    return 0;
}