#include <iostream>
#include<vector>
using namespace std;

long long int solve(vector<int> &nums){

    int n = nums.size();

    int prev2 = 0;
    int prev1 = nums[0];



    for(int i = 1; i < n; i++){

        int include = prev2 + nums[i];
        int exclude = prev1 + 0;

        int ans = max(include , exclude);

        prev2 = prev1;
        prev1 = ans;

    }

    return prev1;;
}

long long int houserobber(vector<int> &valueinhouse){

    int n = valueinhouse.size();

    if(n == 1){
        return valueinhouse[0];
    }

    vector<int> first , second;

    for(int i = 0; i < n; i++){

        if(i != n-1){
            first.push_back(valueinhouse[i]);
        }
        if(i != 0){
            second.push_back(valueinhouse[i]);
        }

    }
    return max(solve(first) , solve(second));
}

int main()
{

    return 0;
}