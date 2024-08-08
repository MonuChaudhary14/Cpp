#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{

    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int j = index; j < nums.size(); j++)
    {

        swap(nums[index], nums[j]);
        solve(nums, ans, index + 1);
        // backtrack
        swap(nums[index], nums[j]); /*We are making changes into original string so we have to swap again to make it so new swap can work*/
    }
}

vector<vector<int>> permutation(vector<int> &nums)
{

    vector<vector<int>> ans;
    int index = 0;

    solve(nums, ans, index);

    return ans;
}

int main()
{
    string s;
    cin >> s;

    return 0;
}