#include <iostream>
#include<bits/stdc++.h>
using namespace std;

long long solve(int dice , int faces , int target){

    //base case
    if(target < 0){
        return 0;
    }

    if(dice == 0 && target != 0){
        return 0;
    }
    if(dice != 0 & target == 0){
        return 0;
    }
    if(target == 0 && dice == 0){
        return 1;
    }

    long long ans = 0;
    for(int i = 1; i <= faces; i++){

        ans = ans + solve(dice - 1, faces , target - i);
    }
    return ans;
}


long long solve1(int dice , int faces , int target , vector<vector<long long>> &dp){

    //base case
    if(target < 0){
        return 0;
    }

    if(dice == 0 && target != 0){
        return 0;
    }
    if(dice != 0 & target == 0){
        return 0;
    }
    if(target == 0 && dice == 0){
        return 1;
    }

    if(dp[dice][target] != -1){
        return dp[dice][target];
    }

    long long ans = 0;
    for(int i = 1; i <= faces; i++){

        ans = ans + solve1(dice - 1, faces , target - i, dp);
    }
    return dp[dice][target] = ans;
}

long long solve2(int d , int f , int t){

    vector<long long> prev(t+1 , 0);
    vector<long long> curr(t+1 ,0);

    //after analysing base case
    prev[0] = 1;

    for(int dice = 1; dice <= d; dice++){

        for(int target = 1; target <= t; target++){

            long long ans = 0;

            for(int i = 1; i <= f; i++){

                if(target-i >= 0){
                    ans = ans + prev[target-i];
                }
                curr[target] = ans;
            }

        }
        prev = curr;
    }
    return prev[t];
}

long long noofways(int m , int n , int x){

    // return solve(n , m , x);

    vector<vector<long long>> dp(n+1 , vector<long long > (x + 1 , -1));

    return solve1(n ,m , x ,dp);

}

int main()
{

    return 0;
}