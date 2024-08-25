#include <iostream>
#include<vector>
using namespace std;

int solve(string a , string b , int i  , int j){

    if(i == a.length()){
        return b.length()-j;  /*remaining charcter to delete so this is answer */
    }
    if(j == b.length()){
        return a.length()-i;
    }

    int ans = 0;

    if(a[i] == b[j]){
        return solve(a , b, i+1 , j+1);
    }
    else{  
        //we have to assume  , not really insert or delete or replace
        //insert
        int insertans = 1 + solve(a , b, i , j+1);

        //delete
        int deleteans = 1 + solve(a , b, i+1, j);

        //replace
        int replaceans = 1 + solve(a , b, i+1 , j+1);

        ans = min(insertans , min(deleteans ,replaceans));
    }

    return ans;
}

int solve1(string a , string b , int i  , int j){

    vector<vector<int>> dp(a.length() , vector<int> (b.length() ,-1));

    if(i == a.length()){
        return b.length()-j;  /*remaining charcter to delete so this is answer */
    }
    if(j == b.length()){
        return a.length()-i;
    }

    if(dp[i][j] != -1){
        return dp[i][j];
    }

    int ans = 0;

    if(a[i] == b[j]){
        return solve(a , b, i+1 , j+1);
    }
    else{  
        //we have to assume  , not really insert or delete or replace
        //insert
        int insertans = 1 + solve1(a , b, i , j+1);

        //delete
        int deleteans = 1 + solve1(a , b, i+1, j);

        //replace
        int replaceans = 1 + solve1(a , b, i+1 , j+1);

        ans = min(insertans , min(deleteans , replaceans));
    }

    return dp[i][j] = ans;
}

    int solve2(string a, string b){

        vector<vector<int>> dp(a.length()+1 , vector<int> (b.length()+1 , 0));

        for(int j = 0; j < b.length(); j++){
            dp[a.length()][j] = b.length()-j;
        }

        for(int i = 0; i < a.length(); i++){
            dp[i][b.length()] = a.length()-i;
        }

        for(int i = a.length()-1; i >= 0; i--){
            for(int j = b.length()-1; j >= 0; j--){
        int ans = 0;

        if(a[i] == b[j]){
            ans =  dp[i+1][j+1];;
        }
        else{  
            //we have to assume  , not really insert or delete or replace
            //insert
            int insertans = 1 + dp[i][j+1];

            //delete
            int deleteans = 1 + dp[i+1][j];

            //replace
            int replaceans = 1 + dp[i+1][j+1];

            ans = min(insertans , min(deleteans , replaceans));

        }
        dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }

int solve3(string a, string b){

    vector<int> curr(b.length()+1 ,0);
    vector<int> next(b.length()+1 ,0);

    for(int j = 0; j < b.length(); j++){
        next[j] = b.length()-j;
    }

    //base case is in loop

    for(int i = a.length()-1; i >= 0; i--){
        for(int j = b.length()-1; j >= 0; j--){

    //imp part->base case
    curr[b.length()] = a.length()-i;

            
    int ans = 0;

    if(a[i] == b[j]){
        ans =  next[j+1];;
    }
    else{  
        //we have to assume  , not really insert or delete or replace
        //insert
        int insertans = 1 + curr[j+1];

        //delete
        int deleteans = 1 + next[j];

        //replace
        int replaceans = 1 + next[j+1];

        ans = min(insertans , min(deleteans , replaceans));

    }
    curr[j] = ans;
        }
    }
    return next[0];
}

int min(string a, string b){

    if(a.length() == 0){
        return b.length();
    }

    if(b.length() == 0){
        return a.length();
    }

    return solve(a , b, 0 ,0);
}

int main()
{

    return 0;
}