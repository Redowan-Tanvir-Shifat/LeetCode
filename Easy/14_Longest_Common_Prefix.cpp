#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs) {
        if (strs.empty()) {
            return "";
        }

        // Sort the array to bring similar prefixes closer
        sort(strs.begin(), strs.end());

        // Compare the first and last strings only, since sorting places them in lexicographical order
        string first = strs[0];
        string last = strs.back();

        // Find the common prefix between the first and last string
        int i = 0;
        while (i < first.size() && i < last.size() && first[i] == last[i]) {
            i++;
        }

        return first.substr(0, i); // Return the common prefix (0 to i)
    }
};

int main() {
    Solution s;

    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << s.longestCommonPrefix(strs);

    return 0;
}