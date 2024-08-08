#include <iostream>
#include <vector>
using namespace std;

int ways(int stairs)
{

    if (stairs < 0)
    {
        return 0;
    }
    if (stairs == 0)
    {
        return 1;
    }

    return ways(stairs - 1) + ways(stairs - 2);
}

// Another method because rescursion is not useful for large values

int countways(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    vector<long long> dp(n + 1);
    dp[0] = dp[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main()
{
    int stairs;
    cin >> stairs;

    cout << "Ways to climb the " << stairs << " is " << ways(stairs);

    return 0;
}