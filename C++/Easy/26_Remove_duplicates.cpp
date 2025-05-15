#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        if (nums.empty())
            return 0; // Handle empty array case

        int uniqueIndex = 0; // Pointer for the unique elements

        for (int i = 1; i < nums.size(); ++i)
        {
            if (nums[i] != nums[uniqueIndex])
            {
                uniqueIndex++;
                nums[uniqueIndex] = nums[i];
            }
        }

        return uniqueIndex + 1; // Length of unique elements
    }
};

int main()
{
    // Example input
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    Solution solution;
    int newLength = solution.removeDuplicates(nums);

    // Print the result
    cout << "New length: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; ++i)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
