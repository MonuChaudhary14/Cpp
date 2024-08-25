#include <iostream>
#include<climits>
#include<vector>
using namespace std;

int cutintosegment(int n , int x , int y , int z){

    //base case
    if(n == 0)
    {
    return 0;
    }

    if(n < 0){
        return INT_MIN;
    }

    int a = cutintosegment(n - x , x, y , z);
    int b = cutintosegment(n-y ,x , y , z);
    int c = cutintosegment(x-z, x, y, z);

    int ans = max(a , max(b, c));

    if(ans < 0){
        return 0;
    }
    else{
        return ans;
    }

}


int cutintosegment1(int n , int x , int y , int z){

    vector<int> dp(n+1 , -1);

    //base case
    if(n == 0)
    {
    return 0;
    }

    if(n < 0){
        return INT_MIN;
    }
    if(dp[n] != -1){
        return dp[n];
    }

    int a = cutintosegment1(n - x , x, y , z) + 1;
    int b = cutintosegment1(n-y ,x , y , z) + 1;
    int c = cutintosegment1(x-z, x, y, z) + 1;

    dp[n] = max(a , max(b, c));

    return dp[n];

}

int cutintosegments2(int n , int x ,int y , int z){

    vector<int> dp(n+1 , -1);  /*we can also use INT_MIN in place of -1 and then there is no need for second conditon given at line 68 , 72, 76*/
    dp[0] = 0;

    for(int i = 1; i <= n; i++){

        if(i - x >= 0 && dp[i-x] != -1){
            dp[i] = max(dp[i] , dp[i-x] + 1);
        }

        if(i-y >= 0 && dp[i-y] != -1){
            dp[i] = max(dp[i] , dp[i-y] + 1);
        }

        if(i-z >= 0 && dp[i-z] != -1){
            dp[i] = max(dp[i] , dp[i-z]+1);
        }

    }
    if(dp[n] < 0){
        return 0;
    }
    else{
        return dp[n];
    }
}

int segments(int n , int x , int y , int z){

    int ans = cutintosegment1(n, x, y, z);

    if(ans < 0){
        return 0;
    }
    else{
        return ans;
    }
}


int main()
{

   
 
    return 0;
}