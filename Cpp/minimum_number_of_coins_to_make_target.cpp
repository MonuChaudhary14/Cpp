#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &num , int x){

//base case
if(x == 0){
    return 0;
}
if(x < 0){
    return INT_MAX;
}

int mini = INT_MAX;

for(int i = 0; i < num.size(); i++){

    int ans = solve(num, x - num[i]);

    if(ans != INT_MAX){
        mini = min(mini , 1+ans);
    }

}

    return mini;
}

int solve1(vector<int> num, int x , vector<int> &dp){

//base case
if(x == 0){
    return 0;
}
if(x < 0){
    return INT_MAX;
}

if(dp[x] != -1){
    return dp[x];
}

int mini = INT_MAX;

for(int i = 0; i < num.size(); i++){

    int ans = solve(num, x - num[i]);

    if(ans != INT_MAX){
        mini = min(mini , 1+ans);
    }

}
dp[x] = mini;

    return mini;


}

int minimum(vector<int> &num , int x){

    // int ans = solve(num , x);

    vector<int> dp(x+1 , -1);

    int ans = solve1(num, x, dp);


    if(ans = INT_MAX){
        return -1;
    }
    else{
        return ans;
    }

}

int solve2(vector<int> &num , int x){

    vector<int> dp(x+1 , INT_MAX);
    dp[0] = 0;

    for(int i = 0;i <= x; i++){

        //solve for every amount figure from 1 to x
        for(int j = 0; j < num.size(); i++){

            if(i-num[j] >= 0 && dp[i-num[j]] != INT_MAX){
                dp[i] = min(dp[i] , i + dp[i-num[j]]);
            }

        }


    }

    if(dp[x] == INT_MAX){
        return -1;
    }
    else{
        return dp[x];
    }

}

int main()
{

    return 0;
}