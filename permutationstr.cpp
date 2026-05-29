#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string str1 = "ab";
    string str2 = "eidabooo";
    string str3 = "";

    int i, j;
    for(i = 0; i < str2.length(); i++) {
        for(j = i; j < str1.length(); j++) {
            str3.push_back(str2[j]);
        }
        if(str1 == str3) {
            cout << "True";
            return 0;
        }
        // reverse(str3.begin(), str3.end());
        // if(str1 == str3) {
        //     cout << "True";
        //     return 0;
        // }

        while(str3.length() > 0) {
            str3.pop_back();
        }

    }

    cout << "False";

    return 0;
}