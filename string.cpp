#include <iostream>
#include <string>
using namespace std;

int main() {

    string str = "zia";
    int st = 0, end = str.length() -1 ;

    int i;
    while(st < end) {
        if(str[st] != str[end]) {
            cout << "The string is not palindrome";
            break;
        }
        st++;
        end--;
    }

    if(st >= end) {
        cout << "The string is palindrome";
    }

    return 0;
}