#include <bits/stdc++.h>
using namespace std;

int solve(int index, int difference, int a[])
{

    // backward check

    if (index < 0)
    {
        return 0;
    }

    int ans = 0;

    for (int j = index - 1; j >= 0; j--)
    {

        if (a[index] - a[j] == difference)
        {
            ans = max(ans, 1 + solve(j, difference, a));
        }
    }
    return ans;
}

int solve1(int index, int difference, int a[], unordered_map<int, int> dp[])
{

    // backward check

    if (index < 0)
    {
        return 0;
    }

    if (dp[index].count(difference))
    {
        return dp[index][difference];
    }
    int ans = 0;

    for (int j = index - 1; j >= 0; j--)
    {

        if (a[index] - a[j] == difference)
        {
            ans = max(ans, 1 + solve(j, difference, a));
        }
    }
    return dp[index][difference] = ans;
}

int length(int a[], int n)
{

    if (n <= 2)
    {
        return n;
    }
    int ans = 0;

    unordered_map<int, int> dp[n + 1];

    // for(int i = 0; i < n; i++){
    //     for(int j = i+1; j < n ; j++){

    //         ans = max(ans , 2 + solve(i ,a[j]-a[i] , a));

    //     }

    // }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            ans = max(ans, 2 + solve1(i, a[j] - a[i], a, dp));
        }
    }
    return ans;
}

int bottomtoup(int a[], int n)
{

    if (n <= 2)
    {
        return n;
    }

    int ans = 0;

    unordered_map<int, int> dp[n + 1];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
    
            int difference = a[i] - a[j];
            int count = 1;

            // check if answer already present

            if (dp[j].count(difference))
            {
                count = dp[j][difference];
            }

            dp[i][difference] = 1 + count;
            ans = max(ans, dp[i][difference]);
        }
    }
    return ans;
}

int main()
{

    return 0;
}