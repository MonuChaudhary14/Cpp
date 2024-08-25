#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(string a,string b){

    vector<int> curr(b.length()+1 ,0);
    vector<int> next(b.length()+1 ,0);

    for(int i = a.length() ; i >= 0; i--){

        for(int j = b.length() ; j >= 0; j--){

    int ans = 0;

    if(a[i] == b[j]){
        ans = 1 + next[j+1];
    }
    else{
        ans = max(next[j]  , curr[j+1]);
    }
    curr[j] = ans;       
    }
    next = curr;
    }
    return next[0];
}

int longest(string s){
    string rev = s;
    reverse(rev.begin() ,rev.end());

    int ans = solve(s , rev);

    return ans;
}

int main()
{

    return 0;
}