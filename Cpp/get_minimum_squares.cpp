#include <iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;

int solve(int n){

    //base case
    if(n == 0){
        return 0;
    }

    int ans = n;

    for(int i = 1; i <= n; i++){

        ans = min(ans , 1+solve(n-i*i));

    }
    return ans;
}

int solve1(int n){

    vector<int> dp(n+1 , -1);

    //base case
    if(n == 0){
        return 0;
    }

    if(dp[n] != -1){
        return dp[n];
    }

    int ans = n;

    for(int i = 1; i <= n; i++){

        ans = min(ans , 1+solve(n-i*i));

    }
    dp[n] = ans;
    return dp[n];
}

int solve2(int n){

    vector<int> dp(n+1 , INT_MAX);  /*we want minimum value so we initilise it with INT_MAX*/
    dp[0] = 0;

    for(int i = 0; i <= n; i++){

        for(int j = 0; j*j <= n; j++){

            int temp = j*j;
            if(i-temp >= 0){
            dp[i] = min(dp[i] ,1+ dp[i-temp]);
            }
        }

    }
    return dp[n];
}




int main()
{

    return 0;
}