#include <iostream>
#include <string>
#include <stack>
using namespace std;

class Solution
{
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty()) {
                    return false;
                }
                if (c == ')' && st.top() != '(') {
                    return false;
                }
                if (c == '}' && st.top() != '{') {
                    return false;
                }
                if (c == ']' && st.top() != '[') {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution s;

    string str = "()";
    cout << "Is Valid: " << s.isValid(str);

    return 0;
}