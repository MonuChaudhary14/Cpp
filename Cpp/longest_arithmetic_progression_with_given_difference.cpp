#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int longestsubsequence(vector<int> &arr, int difference){

    unordered_map<int, int> dp;
    int ans = 0;

    for(int i = 0; i < arr.size(); i++){

        int temp = arr[i] - difference;

        int tempans = 0;

        //check if answer exist for temp

        if(dp.count(temp)){
            tempans = dp[temp];
        }

        //current element update

        dp[arr[i]] = 1 + tempans;

        //ans update
        ans = max(ans  , dp[arr[i]]);

    }
    return ans;
}

int main()
{

    return 0;
}