#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int start  , int end){

    if(start >= end){
        return 0;
    }

    int maxi = INT_MAX;

    for(int i = start; i <= end; i++){

        maxi =  min(maxi , i+ max(solve(start , i-1) , solve(1+1 , end)));

    }
    return maxi;
}

int solve1(int start  , int end , vector<vector<int>> &dp){

    if(start >= end){
        return 0;
    }

    if(dp[start][end] != -1){
        return dp[start][end];
    }

    int maxi = INT_MAX;

    for(int i = start; i <= end; i++){

        maxi =  min(maxi , i+ max(solve(start , i-1) , solve(1+1 , end)));

    }
    return dp[start][end] = maxi;
}

int solve2(int n){

    vector<vector<int>> dp(n+2 , vector<int> (n+2 ,0));

    for(int start = n; start >= 1; start--){

        for(int end = start; end <= n; end++){
            if(start == end){
                continue;
            }
            else{
                int maxi = INT_MAX;

                for(int i = start ; i <= end; i++){
                    maxi = min(maxi , i + max(dp[start][i-1]  , dp[i+1][end]));
                }
                dp[start][end] = maxi;
            }
        }

    }
    return dp[1][n];   /*this value is same which we give in input in solve1*/
}

int getmoney(int n){
    // return solve(1 ,n);

    vector<vector<int>> dp(n+1 , vector<int> (n+1 ,-1));

    solve1(1 , n, dp);
}

int main()
{

    return 0;
}