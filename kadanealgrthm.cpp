#include <iostream>
#include <climits>
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

   int maxsum, currsum;
   maxsum = INT_MIN, currsum = 0;
   for(i = 0; i < length; i++) {
        currsum = currsum + arr[i];
        maxsum = max(maxsum, currsum);
        if(currsum < 0) {
            currsum = 0;
        }     
   }

   cout << "Maximum sum of subarray is: " << maxsum;
   
    return 0;
}