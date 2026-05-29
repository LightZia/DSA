#include <iostream>
#include <unordered_map>
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

    int preSum[20], count = 0, k = 2;
    preSum[0] = arr[0];
    for(i = 1; i < length; i++) {
        preSum[i] = preSum[i-1] + arr[i];
    }

    unordered_map<int, int> m;
    int j;
    for(j = 0; j < length; j++) {
        if(preSum[j] == k) {
            count++;
        }
        int val = preSum[j] - k;
        if(m.find(val) != m.end()) {
            count = count + m[val];
        }

        if(m.find(preSum[j]) == m.end()) {
            m[preSum[j]] = 0;
        }
        m[preSum[j]]++;
    }

    cout << count;

    return 0;
}