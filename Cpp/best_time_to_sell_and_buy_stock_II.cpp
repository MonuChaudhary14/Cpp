#include <iostream>
#include<vector>
using namespace std;

int solve(int index ,int buy , vector<int> &prices){

    if(index == prices.size()){
        return 0;
    }

    int profit = 0;

    if(buy){

        int buy = -prices[index] + solve(index+1 , 0  ,prices);
        int skip = solve(index+1 ,1 ,prices);

        profit = max(buy  , skip); 

    }
    else{
        int sell = prices[index] + solve(index+1 , 1 ,prices);
        int skip = solve(index+1 , 0 , prices);
        profit = max(sell , skip);
    }
    return profit;
}

int solve1(int index ,int buy , vector<int> &prices , vector<vector<int>> &dp){

    if(index == prices.size()){
        return 0;
    }

    if(dp[index][buy] != -1){
        return dp[index][buy];
    }

    int profit = 0;

    if(buy){

        int buy = -prices[index] + solve(index+1 , 0  ,prices);
        int skip = solve(index+1 ,1 ,prices);

        profit = max(buy  , skip); 

    }
    else{
        int sell = prices[index] + solve(index+1 , 1 ,prices);
        int skip = solve(index+1 , 0 , prices);
        profit = max(sell , skip);
    }
    return dp[index][buy] = profit;
}

int solve2(vector<int> &prices){

    int n = prices.size();

    vector<vector<int>> dp(prices.size()+1 , vector<int> (2,0));

    for(int index = n-1; index >= 0; index--){

        for(int buy = 0; buy <= 1; buy++){

            int profit = 0;

            if(buy){
                int buy = -prices[index] + dp[index+1][0];
                int skip = dp[index+1][1]; 
                profit = max(buy , skip);
            }
            else{
                int sell = prices[index] + dp[index+1][1];
                int skip = dp[index+1][0];
                profit = max(sell , skip);
            }
            dp[index][buy] = profit;
        }

    }
    return dp[0][1];
}

int solve3(vector<int> &prices){

    int n = prices.size();

    vector<int> curr(2 , 0);
    vector<int> next(2,0);

    for(int index = n-1; index >= 0; index--){

        for(int buy = 0; buy <= 1; buy++){

            int profit = 0;

            if(buy){
                int buy = -prices[index] + next[0];
                int skip = next[1]; 
                profit = max(buy , skip);
            }
            else{
                int sell = prices[index] + next[1];
                int skip = next[0];
                profit = max(sell , skip);
            }
            curr[buy] = profit;
        }
        next = curr;
    }
    return next[1];
}

int maxprofit(vector<int>&prices){

// return solve(0 , 1 ,prices);
vector<vector<int>> dp(prices.size() , vector<int> (2 ,-1));

    solve1(0 , 1 ,prices,dp);

}

int main()
{

    return 0;
}