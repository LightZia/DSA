#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int arr[20], length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int i;
    cout << "Enter " << length << " elements: ";
    for(i = 0; i < length; i++) {
        cin >> arr[i];
    }

    // Unordered Map
    // unordered_map<int, int> freq;

    // for(i = 0; i < length; i++) {
    //     freq[arr[i]]++;
    // }

    // for(auto m:freq) {
    //     if(m.second > 1) {
    //         cout << m.first;
    //     }
    // }

    //Slow and Fast pointer

    return 0;
}