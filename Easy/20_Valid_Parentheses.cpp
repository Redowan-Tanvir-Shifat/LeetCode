#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s) {
        stack<char> str;
        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                str.push(ch);
            } 
            else {
                if(str.empty()) {
                    return false;
                }
                if(ch == ')' && str.top() != '(') {
                    return false;
                }
                if (ch == '}' && str.top() != '{') {
                    return false;
                }
                if(ch == ']' && str.top() != '[') {
                    return false;
                }
                str.pop();
            }
        }
        return str.empty();
    }
};

int main()
{
    Solution s;

    string str = "[{{})}]";
    cout << "Is Valid: " << s.isValid(str);

    return 0;
}