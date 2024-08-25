#include <iostream>
#include<vector>
using namespace std;

int solve(int index , int buy , vector<int> &prices , int limit , vector<vector<vector<int>>> &dp){

    if(index == prices.size()){
        return 0;
    }

    if(limit == 0){
        return 0;
    }

    if(dp[index][buy][limit] != -1){
        return dp[index][buy][limit];
    }

    int profit = 0;

    if(buy){

        int buy = -prices[index] + solve(index+1 , 0 , prices , limit , dp);
        int skip = solve(index+1 , 1 , prices , limit , dp);
        profit = max(buy , skip);
    }
    else{
        int sell = prices[index] + solve(index+1 , 1 , prices , limit-1 , dp);
        int skip = solve(index+1 , 0 , prices , limit , dp);
        profit = max(sell , skip);

    }
    return dp[index][buy][limit];
}

int solve1(vector<int> &prices){

    int n = prices.size();

    vector<vector<vector<int>>> dp(n+1 , vector<vector<int>> (2 , vector<int> (3 ,-1)));

    for(int index = n-1; index >= 0 ; index--){

        for(int buy = 0; buy <= 1; buy++){

            for(int limit = 1; limit <= 2; limit++){

                int profit = 0;

                if(buy){
                    int buy = -prices[index] + dp[index+1][0][limit];
                    int skip = dp[index+1][1][limit];
                    profit = max(buy  , skip);
                }else{
                    int sell = prices[index] + dp[index+1][1][limit-1];
                    int skip = dp[index+1][1][limit];
                    profit = max(skip  , sell);
                }
                dp[index][buy][limit] = profit;
            }

        }

    }
        return dp[0][1][2];
}

int solve2(vector<int> &prices){

    int n = prices.size();

    vector<vector<int>> curr(2 , vector<int> (3 , 0));
    vector<vector<int>> next(2 , vector<int> (3 , 0));
    
    for(int index = n-1; index >= 0 ; index--){

        for(int buy = 0; buy <= 1; buy++){

            for(int limit = 1; limit <= 2; limit++){

                int profit = 0;

                if(buy){
                    int buy = -prices[index] + next[0][limit];
                    int skip = next[1][limit];
                    profit = max(buy  , skip);
                }else{
                    int sell = prices[index] + next[1][limit-1];
                    int skip = next[1][limit];
                    profit = max(skip  , sell);
                }
                curr[buy][limit] = profit;
            }

        }

    }
        return next[1][2];
}

int maxprofit(vector<int> &prices){
    int n = prices.size();

    vector<vector<vector<int>>> dp(n , vector<vector<int>> (2 , vector<int> (3 ,-1)));

    return solve(0 , 1, prices , 2 ,dp);

}

int main()
{

    return 0;
}