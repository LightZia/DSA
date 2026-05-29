#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "habibi";
    int i = 0;
    int arr[26] = {0};
    for(i = 0; i < str.length(); i++) {
        arr[str[i] - 'a'] = 1;
    }

    for(i = 0; i < 26; i++) {
        if(arr[i] > 0) {
            char alpha = i + 'a';
            cout << alpha;
        }
    }


    return 0;
}