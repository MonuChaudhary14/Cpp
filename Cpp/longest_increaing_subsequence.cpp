#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int n , int a[] , int curr , int prev){

    //base case
    if(curr == n){
        return 0;
    }

    //include
    int take = 0;

    if(prev == -1 || a[curr] > a[prev]){
        take = 1 + solve(n , a ,curr +1 ,curr);
    }

    //exclude
    int nottake = solve(n , a , curr+1 , prev);


    return max(take , nottake);

}


int solve1(int n , int a[] , int curr , int prev , vector<vector<int>> &dp){

    //base case
    if(curr == n){
        return 0;
    }

    if(dp[curr][prev+1] != -1){
        return dp[curr][prev+1];
    }

    //include
    int take = 0;

    if(prev == -1 || a[curr] > a[prev]){
        take = 1 + solve1(n , a ,curr +1 ,curr , dp);
    }

    //exclude
    int nottake = solve1(n , a , curr+1 , prev , dp);


    dp[curr][prev+1] =  max(take , nottake);

    return dp[curr][prev+1];
}   

int solve3(int n , int a[]){

    vector<vector<int>> dp(n+1 , vector<int> (n+1, 0));

    for(int curr = n-1; curr >= 0; curr--){
        for(int prev = curr-1; prev >= -1; prev--){

            //include
            int take = 0;

            if(prev == -1 || a[curr] > a[prev]){
                take = 1 + dp[curr+1][curr+1];

                //exclude
                int nottake = dp[curr+1][prev+1];

                dp[curr][prev+1] = max(take , nottake);
            }
        }
    }
    return dp[0][-1 + 1];
}

int solve4(int n , int a[]){

    vector<int> currrow(n+1 ,0);
    vector<int> nextrow(n+1 ,0);

    for(int curr = n-1; curr >= 0; curr--){
        for(int prev = curr-1; prev >= -1; prev--){

            //include
            int take = 0;

            if(prev == -1 || a[curr] > a[prev]){
                take = 1 + nextrow[curr+1];

                //exclude
                int nottake = nextrow[prev+1];

                currrow[prev+1] = max(take , nottake);
            }
        }
        nextrow = currrow;
    }
    return nextrow[-1 + 1];
}

int solve5(int n , int a[]){

    if(n == 0){
        return 0;
    }

    vector<int> ans;
    ans.push_back(a[0]);

    for(int i = 1; i < n; i++){

        if(a[i] > ans.back()){
            ans.push_back(a[i]);
        }
        else{
            //find index of just greatee element
            int index = lower_bound(ans.begin() , ans.end() , a[i]) - ans.begin();
            ans[index] = a[i];
        }

    }
    return ans.size();
}

int longestsebsequence(int n , int a[]){

    // return solve(n , a, 0 , -1);

    vector<vector<int>> dp(n , vector<int> (n+1 , -1));

    solve1(n , a , 0, -1 , dp);
}

int main()
{

    return 0;
}