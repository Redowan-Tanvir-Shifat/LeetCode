#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
    public:
    int romanToInt(string s) {
        unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int total = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i + 1 < s.size() && romanMap[s[i]] < romanMap[s[i + 1]]) {
                total -= romanMap[s[i]];
            } else {
                total += romanMap[s[i]];
            }
        }
        return total;
    }
};

int main() {
    Solution s;
    string romanNumber;
    cout << "Enter a Roman number: ";
    cin >> romanNumber;

    cout << "The integer value is: " << s.romanToInt(romanNumber) << endl;
    return 0;
}