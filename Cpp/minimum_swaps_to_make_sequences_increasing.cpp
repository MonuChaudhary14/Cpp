#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums1, vector<int> &nums2, int index, bool swapped)
{

    // base case
    if (index == nums1.size())
    {
        return 0;
    }

    int ans = INT_MAX;

    int prev1 = nums1[index - 1];
    int prev2 = nums2[index - 1];

    // important
    if (swapped)
    {
        swap(prev1, prev2);
    }

    // no swap
    if (nums1[index] > prev1 && nums2[index] > prev2)
    {
        ans = solve(nums1, nums2, index + 1, 0);
    }

    // swap
    if (nums1[index] > prev2 && nums2[index] > prev1)
    {
        ans = min(ans, 1 + solve(nums1, nums2, index + 1, 1));
    }

    return ans;
}


int solve1(vector<int> &nums1, vector<int> &nums2, int index, bool swapped , vector<vector<int>> &dp)
{

    // base case
    if (index == nums1.size())
    {
        return 0;
    }

    if(dp[index][swapped] != -1){
        return dp[index][swapped];
    }

    int ans = INT_MAX;

    int prev1 = nums1[index - 1];
    int prev2 = nums2[index - 1];

    // important
    if (swapped)
    {
        swap(prev1, prev2);
    }

    // no swap
    if (nums1[index] > prev1 && nums2[index] > prev2)
    {
        ans = solve1(nums1, nums2, index + 1, 0 ,dp);
    }

    // swap
    if (nums1[index] > prev2 && nums2[index] > prev1)
    {
        ans = min(ans, 1 + solve1(nums1, nums2, index + 1, 1 , dp));
    }

    return dp[index][swapped] = ans;
}

int solve2(vector<int> &nums1 , vector<int> &nums2){

    int n = nums1.size();

    vector<vector<int>> dp(n+1 , vector<int> (2,0));

    for(int index = n-1; index >= 1; index--){

        for(int swapped = 1; swapped >= 0; swapped--){

            int ans = INT_MAX;
            int prev1 = nums1[index-1];
            int prev2 = nums2[index-1];

            if(swapped){
                swap(prev1 ,prev2);
            }

              // no swap
            if (nums1[index] > prev1 && nums2[index] > prev2)
            {
                ans = dp[index+1][0];
            }

            // swap
            if (nums1[index] > prev2 && nums2[index] > prev1)
            {
                ans = min(ans, 1 + dp[index+1][1]);
            }

            return dp[index][swapped] = ans;


        }
    }
    return dp[1][0];
}


int solve3(vector<int> &nums1 , vector<int> &nums2){

    int n = nums1.size();

    int swapp = 0;
    int noswap = 0;
    int currswap = 0;
    int currnoswap = 0;

    for(int index = n-1; index >= 1; index--){

        for(int swapped = 1; swapped >= 0; swapped--){

            int ans = INT_MAX;
            int prev1 = nums1[index-1];
            int prev2 = nums2[index-1];

            if(swapped){
                swap(prev1 ,prev2);
            }

              // no swap
            if (nums1[index] > prev1 && nums2[index] > prev2)
            {
                ans = noswap;
            }

            // swap
            if (nums1[index] > prev2 && nums2[index] > prev1)
            {
                ans = min(ans, 1 + swapp);
            }

            if(swapped){
                currswap = ans;
            }
            else{
                currnoswap = ans;
            }
        }
        swapp = currswap;
        noswap = currnoswap;
    }
    return min(swapp , noswap);
}

int minswap(vector<int> &nums1, vector<int> &nums2)
{

    nums1.insert(nums1.begin(), -1);
    nums2.insert(nums2.begin(), -1);

    // it means the previous index are swapped
    bool swapped = 0;

    // return solve(nums1, nums2, 1, swapped);

    int n = nums1.size();

    vector<vector<int>> dp(n , vector<int> (2,-1));

    return solve1(nums1 , nums2 , 1 , swapped , dp);
}

int main()
{

    return 0;
}