// To shift zeroes at the end; To check if non zero elements are sorted; To check second largest element among non-zero elements
#include <iostream>
using namespace std;

int main(){

    int arr[10], length;
    cout << "Enter length of array: ";
    cin >> length;

    cout << "Enter " << length << " elements in the array: ";
    int i;
    for(i = 0 ; i < length; i++) {
        cin >> arr[i];
    }

    int freq = 0;
    for(i = 0; i < length-1; i++) {
        if(arr[i] == 0){
            swap(arr[i], arr[i+1]);
            freq++;
        }
    }

    cout << freq << endl;

    for(i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}