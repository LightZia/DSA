#include <iostream>
#include <climits>
using namespace std;

int main() {

    int htmap[20], length;
    cout << "Enter length of height map: ";
    cin >> length;

    int i;
    cout << "Enter " << length << " height bars: ";
    for(i = 0; i < length; i++) {
        cin >> htmap[i];
    }

    // int j, width, minht, maxarea = 0;
    // for(i = 0; i < length; i++) {
    //     for(j = i + 1; j < length; j++) {
    //         width = j-i;
    //         minht = min(htmap[i], htmap[j]);
    //         int currentarea = width*minht;
    //         maxarea = max(maxarea, currentarea);
    //     }
    // }

    int lftp = 0, rhtp = length - 1, maxarea = 0;
    while(rhtp > lftp) {
        int currentarea = min(htmap[lftp], htmap[rhtp])*(rhtp-lftp);
        maxarea = max(maxarea, currentarea);
        if(rhtp > lftp) {
            lftp++;
        }
        else {
            rhtp--;
        }
    }

    cout << "Largest possible area: " << maxarea;

    return 0;
}