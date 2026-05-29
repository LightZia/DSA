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

    
    
    unordered_map<int, int> freq;
    
    for(i = 0; i < length; i++) {
        freq[arr[i]]++;
    }

    for(auto itr : freq) {
        if(itr.second == 1) {
            cout << itr.first;
        }
    }
    
    // int ans = 0;
    // for(i = 0; i < length; i++) {
    //     ans = ans^arr[i];
    // }

    // cout << ans;
    return 0;
}