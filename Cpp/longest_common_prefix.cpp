#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }

        // Sort thehe strings to find the most dissimilar pair
        sort(strs.begin(), strs.end());

        // Compare the first and last strings
        string prefix;
        for (size_t i = 0; i < strs[0].size(); ++i)
        {
            if (strs[0][i] == strs.back()[i])
            {
                prefix += strs[0][i];
            }
            else
            {
                break;
            }
        }

        return prefix;
    }
};

int main()
{
    Solution sol;
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << sol.longestCommonPrefix(strs1) << endl; // Output: "fl"

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << sol.longestCommonPrefix(strs2) << endl; // Output: ""

    return 0;
}
