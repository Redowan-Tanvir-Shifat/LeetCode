#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);                      // Convert to string
    string revStr = string(str.rbegin(), str.rend()); // Reverse the string

    return str == revStr; // If the original string is equal to the reversed string, return true else false
}

int main() {
    int number = 122;

    if(isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    }
    else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}