#include <iostream>
#include<vector>
using namespace std;

bool solve(int index  , int arr[] , int n , int target){

    //base case
    if(index >= n){
        return 0;
    }
    if(target < 0){
        return 0;
    }
    if(target == 0){
        return 1;
    }

    bool include = solve(index+1 , arr , n, target-arr[index]);
    bool exclude = solve(index+1 ,arr , n , target);

    return include || exclude;
}


bool solve1(int index  , int arr[] , int n , int target , vector<vector<int>> &dp){

    //base case
    if(index >= n){
        return 0;
    }
    if(target < 0){
        return 0;
    }
    if(target == 0){
        return 1;
    }
    if(dp[index][target] != -1){
        return dp[index][target];
    }

    bool include = solve(index+1 , arr , n, target-arr[index]);
    bool exclude = solve(index+1 ,arr , n , target);

    return dp[index][target] = include || exclude;
}

bool solve2(int n , int arr[] , int total){

    vector<vector<int>> dp(n+1 , vector<int> (total/2 , 0));

    for(int i = 0; i <= n; i++){

        dp[i][0] = 1;
    }

    for(int index = n-1; index >= 0; index--){

        for(int target = 0; target <= total /2; target++){

            bool include = 0;

            if(target - arr[index] >= 0){
                include = dp[index+1][target-arr[index]];   

                bool exclude = dp[index+1][target];

                dp[index][target] = include || exclude;
            }

        }

    }

    return dp[0][total/2];
}

bool solve3(int n , int arr[] , int total){

    vector<int> curr(total/2 , 0);
    vector<int> next(total/2 , 0);

    curr[0] = 1;
    next[0] = 1;

    for(int index = n-1; index >= 0; index--){

        for(int target = 0; target <= total /2; target++){

            bool include = 0;

            if(target - arr[index] >= 0){
                include = next[target-arr[index]];   

                bool exclude = next[target];

                curr[target] = include || exclude;
            }

        }
        next = curr;
    }

    return next[total/2];
}

int equalpartition(int n , int arr[]){

    int total = 0;

    for(int i = 0; i < n; i++){


        total += arr[i];
    }

    if(total & 1){
        return 0;
    }

    int target = total/2;

    // return solve(0 ,arr , n, target); 

    vector<vector<int>> dp(n , vector<int> (target+1 , -1));

    return solve1(0, arr ,n , target ,dp);   

}

int main()
{

    return 0;
}