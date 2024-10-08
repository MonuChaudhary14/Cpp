#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &satisfaction  , int index , int time){

    //base case
    if(index == satisfaction.size()){
        return 0;
    }

    int include = satisfaction[index] * (time+1) + solve(satisfaction , index +1  , time+1);
    int exclude = solve(satisfaction , index+1 , time+1);

    return max(include , exclude);
}

int solve1(vector<int> &satisfaction  , int index , int time , vector<vector<int>> &dp){

    //base case
    if(index == satisfaction.size()){
        return 0;
    }

    if(dp[index][time] != -1){
        return dp[index][time];
    }

    int include = satisfaction[index] * (time+1) + solve1(satisfaction , index +1  , time+1 , dp);
    int exclude = solve1(satisfaction , index+1 , time+1 , dp);

    dp[index][time] =  max(include , exclude);

    return dp[index][time];
}

int solve2(vector<int> &satisfaction){

    int n = satisfaction.size();

    vector<vector<int>> dp(n+1 , vector<int> (n+1 ,0));

    for(int index = n-1; index >= 0; index --){

        for(int time = index; time >= 0; time--){

            int include = satisfaction[index] * (time+1) + dp[index+1][time+1];
            int exclude = dp[index+1][time];


            dp[index][time] = max(include , exclude);
        }


    }
    return dp[0][0];
}


int solve3(vector<int> &satisfaction){

    int n = satisfaction.size();

    vector<int> curr(n+1 , 0);
    vector<int> next(n+1 ,0);

    for(int index = n-1; index >= 0; index --){

        for(int time = index; time >= 0; time--){

            int include = satisfaction[index] * (time+1) + next[time+1];
            int exclude = next[time];


            curr[time] = max(include , exclude);
        }

    next = curr;    
    }
    return next[0];
}

int maxsatisfaction(vector<int> &satisfaction){
    sort(satisfaction.begin() , satisfaction.end());

    // return solve(satisfaction , 0, 0);

    int n = satisfaction.size();

    vector<vector<int>> dp(n+1 , vector<int> (n+1 , -1));
    
    return solve1(satisfaction , 0 , 0 , dp);
    
    }


int main()
{

    return 0;
}