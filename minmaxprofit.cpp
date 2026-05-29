#include <iostream>
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

    int maxProfit, currProfit, minBuy, maxSale;
    maxProfit = 0;
    currProfit = 0;
    minBuy = arr[0];
    maxSale = INT_MIN;

    for(i = 0; i < length; i++) {
        maxSale = arr[i];
        currProfit = maxSale - minBuy;
        maxProfit = max(maxProfit, currProfit);
        minBuy = min(minBuy, arr[i]);
    }

    cout << "Maximum Profit: " << maxProfit;

    return 0;
}