#include<bits/stdc++.h>
using namespace std;

// we can also do this by methd used in III case jus tchange limit to k

int solve(int index , int operationNo , int k , vector<int> &prices){

    if(index == prices.size()){
        return 0;
    }

    if(operationNo == 2*k){
        return 0;
    }
    int profit = 0;
    if(operationNo & 1 == 0/*even*/){
        //but allowed
        int buy = -prices[index] + solve(index+1 , operationNo+1 , k , prices);
        int skip = solve(index+1 , operationNo , k , prices);
        profit = max(buy  ,skip);
    }
    else{
        int sell = prices[index] + solve(index+1, operationNo+1 , k,prices);
        int skip = solve(index+1, operationNo, k, prices); 
        profit = max(sell , skip);
    }
    return profit;
}

int solve1(int index , int operationNo , int k , vector<int> &prices){

    int n = prices.size();
    vector<vector<int>> dp(n , vector<int> (2*k ,-1));

    if(index == prices.size()){
        return 0;
    }

    if(operationNo == 2*k){
        return 0;
    }

    if(dp[index][operationNo] != -1){
        return dp[index][operationNo];
    }

    int profit = 0;
    if(operationNo & 1 == 0/*even*/){
        //but allowed
        int buy = -prices[index] + solve(index+1 , operationNo+1 , k , prices);
        int skip = solve(index+1 , operationNo , k , prices);
        profit = max(buy  ,skip);
    }
    else{
        int sell = prices[index] + solve(index+1, operationNo+1 , k,prices);
        int skip = solve(index+1, operationNo, k, prices); 
        profit = max(sell , skip);
    }
    return dp[index][operationNo] = profit;
}

int solve2(int k , vector<int> &prices){

    int n = prices.size();
    vector<vector<int>> dp(n ,vector<int> (2*k+1 ,0));

    for(int index = n-1; index >= 0; index--){

        for(int operationNo = 0; operationNo < 2*k; operationNo++){
    int profit = 0;
    if(operationNo & 1 == 0/*even*/){
        //but allowed
        int buy = -prices[index] + dp[index+1][operationNo+1];
        int skip = dp[index+1][operationNo];;
        profit = max(buy  ,skip);
    }
    else{
        int sell = prices[index] + dp[index+1][operationNo+1];
        int skip = dp[index+1][operationNo];
        profit = max(sell , skip);
    }
        dp[index][operationNo] = profit;
        }
    }
    return dp[0][0];
}

int solve3(int k , vector<int> &prices){

    int n = prices.size();
    vector<int> curr(2*k+1 , 0);
    vector<int> next(2*k+1 , 0);

    for(int index = n-1; index >= 0; index--){

        for(int operationNo = 0; operationNo < 2*k; operationNo++){
    int profit = 0;
    if(operationNo & 1 == 0/*even*/){
        //but allowed
        int buy = -prices[index] + next[operationNo+1];
        int skip = next[operationNo];;
        profit = max(buy  ,skip);
    }
    else{
        int sell = prices[index] + next[operationNo+1];
        int skip = next[operationNo];
        profit = max(sell , skip);
    }
        curr[operationNo] = profit;
        }
        next = curr;
    }
    return next[0];
}

int maxprofit(int k , vector<int>& prices){
    // return solve(0 , 0 , k ,prices);

}

int main()
{

    return 0;
}