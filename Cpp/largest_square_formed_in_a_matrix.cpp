#include <iostream>
#include<vector>
using namespace std;

int solve(vector<vector<int>> matrix , int i , int j , int &maxi){

if(i >= matrix.size() || j >= matrix[0].size()){
    return 0;
}

int right = solve(matrix , i , j+1 , maxi);
int down = solve(matrix , i+1 , j , maxi);
int diagonal = solve(matrix , i+1 , j+1 , maxi);

if(matrix[i][j] == 1){
    int ans = 1 + min(right , min(diagonal , down));
    maxi = max(maxi, ans);
    return ans;
}
else{
    return 0;
}

}

int solve1(vector<vector<int>> &matrix , int i , int j , int &maxi , vector<vector<int>> &dp){

if(i >= matrix.size() || j >= matrix[0].size()){
    return 0;
}

if(dp[i][j] != -1){
    return dp[i][j];
}

int right = solve1(matrix , i , j+1 , maxi , dp);
int down = solve1(matrix , i+1 , j , maxi , dp);
int diagonal = solve1(matrix , i+1 , j+1 , maxi , dp);

if(matrix[i][j] == 1){
    dp[i][j] = 1 + min(right , min(diagonal , down));
    maxi = max(maxi, dp[i][j]);
    return dp[i][j];
}
else{
    return 0;
}

}

int solve2(vector<vector<int>> &matrix , int &maxi){

    int row = matrix.size();
    int col = matrix[0].size();

    vector<vector<int>> dp(row+1 ,vector<int> (col+1, 0));

    for(int i = row-1; i >= 0; i--){
        for(int j = col-1; j >= 0; j--){

            int right = dp[i][j+1];
            int down = dp[i+1][j];
            int diagonal = dp[i+1][j+1];

            if(matrix[i][j] == 1){
                dp[i][j] = 1 + min(right , min(diagonal , down));
                maxi = max(maxi , dp[i][j]);
                
            }
            else{
                 dp[i][j] = 0;
            }

        }
    }
    return dp[0][0];
}


int solve3(vector<vector<int>> &matrix , int &maxi){

    int row = matrix.size();
    int col = matrix[0].size();

    vector<int> curr(col+1 ,0);
    vector<int> next(col+1 ,0);

    for(int i = row-1; i >= 0; i--){
        for(int j = col-1; j >= 0; j--){

            int right = curr[j+1];
            int down = next[j];
            int diagonal = next[j+1];

            if(matrix[i][j] == 1){
                curr[j] = 1 + min(right , min(diagonal , down));
                maxi = max(maxi , curr[j]);
                
            }
            else{
                 curr[j] = 0;
            }

        }
    }
    next = curr;

    return next[0];   /*no need to return maxi because we give maxi in reference*/
}

int maxsquare(int n, int m , vector<vector<int>> matrix){

    int maxi = 0;

    //solve(matrix , 0 , 0 , maxi);

    // vector<vector<int>>dp(n , vector<int> (m , -1));
    // solve1(matrix , 0, 0,maxi, dp);
    
    // solve2(matrix , maxi);

    solve3(matrix , maxi);

    return maxi;
}



int main()
{

    return 0;
}