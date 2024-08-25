#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int n){

    if(n <= 1){
        return 1;
    }

    int ans = 0;

    //think i as root node

    for(int i = 1; i <= n; i++){

        ans = ans + numtrees(i-1) * numtrees(n-i);

    }
    return ans;
}

int solve1(int n ,vector<int> &dp){

    if(n <= 1){
        return 1;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int ans = 0;

    //think i as root node

    for(int i = 1; i <= n; i++){

        ans = ans + numtrees(i-1) * numtrees(n-i);

    }
    return dp[n] = ans;
}

int solve2(int n){

    vector<int> dp(n+1 , 0);

    dp[0] = dp[1] = 1;

    // i->nnumber of nodes
    for(int i = 2; i <= n; i++){
        //j->root node
        for(int j = 1; j <= i; j++){

            dp[i] += dp[j-1] * dp[i-j];

        }   
    }
    return dp[n];
}

int numtrees(int n){
    // return solve(n);

    vector<int> dp(n+1 , -1);

    return solve1(n , dp);
}

int main()
{

    return 0;
}