#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int> &cost , int n){

    vector<int> dp(n+1 , -1);

    //base case
    if(n == 0){
        return cost[0];
    }

    if(n == 1){
        return cost[1];
    }

    if(dp[n] != -1){
        return dp[n]; 
    }

    dp[n] = cost[n] + min(solve(cost , n-1) , solve(cost , n-2));

    return dp[n];
}

int solve1(vector<int> &cost , int n){

    vector<int> dp(n+1);

    dp[0] = cost[0];
    dp[1] = cost[1];

    for(int i = 2; i <= n-1; i++){

        dp[i] = cost[i] + min(dp[i-1] , dp[n-2]);

    }
    return min(dp[n-1] , dp[n-2]);
}

int solve2(vector<int> &cost , int n){

    int prev2 = cost[0];
    int prev1 = cost[1];

    for(int i = 2; i < n; i++){

        int curr = cost[i] + min(prev1 ,prev2);
        prev2= prev1;
        prev1 = curr;

    }
    return min(prev1 , prev2);
}

int main()
{

    return 0;
}