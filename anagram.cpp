#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {

    string str = "anagram";
    string str2 = "nagaram";

//     unordered_map<char, int> freq;
//     int i;
//     for(i = 0; i < str.length(); i++) {
//         freq[str[i]]++;
//     }

//     for(char itr:str2) {
//         if(freq.find(itr) == freq.end() || freq[itr] == 0) {
//             cout << "False";
//             return 0;
//         }
//         freq[itr]--;
//     }

    
//     cout << "True";

    if(str.length() != str2.length()) {
        cout << "False";
        return 0;
    }

    int arr[26]; 
    int i;
    for(i = 0; i < str.length(); i++) {
        arr[i] = str[i] - 'a';
    }
    for(i = 0; i < str2.length(); i++) {
        for(int j = 0; j < 26; j++) {
            if(arr[j] != str2[i] - 'a') {
                cout << "False";
                return 0;
            }
        }
        arr[i] = str2[i] - 'a';
    }

    cout << "True";

    return 0;
}

