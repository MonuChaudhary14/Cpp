#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int> &num , int target){

    //base case
    if(target < 0){
        return 0;
    }
    if(target == 0){
        return 1;
    }

    int ans = 0;

    for(int i = 0; i < num.size(); i++){

        ans = ans + solve(num , target - num[i]);

    }
    return ans;
}

int solve1(vector<int> &num , int target , vector<int> &dp){

    //base case
    if(target < 0){
        return 0;
    }
    if(target == 0){
        return 1;
    }

    if(dp[target] != -1){
        return dp[target];
    }

    int ans = 0;

    for(int i = 0; i < num.size(); i++){

        ans = ans + solve1(num , target - num[i] , dp);

    }
    dp[target] = ans;

    return dp[target];

}

int solve2(vector<int> &num , int target){

    vector<int> dp(target+1 , 0);

    dp[0] = 1;

    //traversing from target 1 to target
    for(int i = 1; i <= target; i++){

        for(int j = 0; j < num.size(); j++){
            if(i -num[j] >= 0){
            dp[i] = dp[i] + dp[i-num[j]];
            }
        }

    }

    return dp[target];
}

int findways(vector<int> &num , int target){

    vector<int> dp(target+1 , -1);

    // return solve(num , target);
    return solve1(num , target , dp);

}

int main()
{

    return 0;
}