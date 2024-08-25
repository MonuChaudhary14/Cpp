#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

long long int count(int n)
{

    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    int ans = (((n - 1) % MOD) * ((count(n - 1) % MOD) + (count(n - 2) % MOD)) % MOD);

    return ans;
}

long long int count1(int n)
{

    vector<long long> dp(n + 1, -1);
    // base case
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = (((n - 1) % MOD) * ((count1(n - 1) % MOD) + (count1(n - 2) % MOD)) % MOD);

    return dp[n];
}

long long int count2(int n)
{

    vector<long long int> dp(n + 1, -1);

    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= n; i++)
    {

        long long int first = dp[i - 1] % MOD;
        long long int second = dp[i - 2] % MOD;
        long long int sum = (first + second) % MOD;

        long long int ans = ((i - 1) * sum) % MOD;

        dp[i] = ans;
    }
    return dp[n];
}

long long int count3(int n)
{
    long long int prev1 = 0;
    long long int prev2 = 1;

    for (int i = 3; i <= n; i++)
    {

        long long int first = prev1 % MOD;
        long long int second = prev2 % MOD;
        long long int sum = (first + second) % MOD;

        long long int ans = ((i - 1) * sum) % MOD;
        prev2 = prev1;
        prev1 = ans;
    }
    return prev1;
}



int main()
{

    return 0;
}