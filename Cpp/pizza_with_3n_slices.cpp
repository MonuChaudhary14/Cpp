#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int index ,int endingindex , vector<int> &slices , int n){

    //base case
    if(n == 0 || index > endingindex){
        return 0;
    }

    int take = slices[index] + solve(index+2 ,endingindex , slices, n-1);
    int nottake = solve(index+1 ,endingindex ,  slices , n);

    return max(take , nottake);

}


int solve1(int index ,int endingindex , vector<int> &slices , int n , vector<vector<int>> &dp){

    //base case
    if(n == 0 || index > endingindex){
        return 0;
    }

    if(dp[index][n] != -1){
        return dp[index][n];
    }

    int take = slices[index] + solve1(index+2 ,endingindex , slices, n-1 , dp);
    int nottake = solve1(index+1 ,endingindex ,  slices , n , dp);

    return dp[index][n] = max(take , nottake);

}

int solve2(vector<int> &slices){

    int k = slices.size();

    vector<vector<int>> dp1(k+2 , vector<int> (k+2 , 0));

    vector<vector<int>> dp2(k+2 , vector<int> (k+2 , 0));

    for(int index = k-2; index >= 0; index--){

        for(int n = 1; n <= k/3; n++){

            int take = slices[index] + dp1[index+2][n-1];
            int nottake = dp1[index+1][n];

            dp1[index][n] = max(take , nottake);
        }

    }

    int case1 = dp1[0][k/3];

    for(int index = k-1; index >= 1; index--){
        for(int n = 1; n <= k/3; n++){

            int take = slices[index] + dp2[index+2][n-1];
            int nottake = dp2[index][n];

            dp2[index][n] = max(take, nottake);
        }
    }
    int case2 = dp2[1][k/3];

    return max(case1,case2);
}


int solve3(vector<int> &slices){

    int k = slices.size();

    vector<int> prev1(k+2 , 0);
    vector<int> curr1(k+2 , 0);
    vector<int> next1(k+2 , 0);

    vector<int> prev2(k+2 , 0);
    vector<int> curr2(k+2 , 0);
    vector<int> next2(k+2 , 0);

    for(int index = k-2; index >= 0; index--){

        for(int n = 1; n <= k/3; n++){

            int take = slices[index] + next1[n-1];
            int nottake = curr1[n];

            prev1[n] = max(take , nottake);
        }
        next1 = curr1;
        curr1 = prev1;
    }

    int case1 = curr2[k/3];

    for(int index = k-1; index >= 1; index--){
        for(int n = 1; n <= k/3; n++){

            int take = slices[index] + next2[n-1];
            int nottake = curr2[n];

            prev2[n] = max(take, nottake);
        }

        next2 = curr2;
        curr2 = prev2;
    }
    int case2 = curr2[k/3];

    return max(case1,case2);
}

int maxslice(vector<int> &slices){

    int k = slices.size();

    // int case1 = solve(0 ,k-2 , slices , k/3);
    // int case2 = solve(1 ,k-1, slices , k/3);

    // return max(case1 ,case2);

    vector<vector<int>> dp1(k , vector<int> (k , -1));
    int case1 = solve1(0 , k-2 , slices , k/3 , dp1);

    vector<vector<int>> dp2(k , vector<int> (k , -1));
    int case2 = solve1(0 , k-2 , slices , k/3 , dp2);

    return max(case1 ,case2);
}


int main()
{

    return 0;
}