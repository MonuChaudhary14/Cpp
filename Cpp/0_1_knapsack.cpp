#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxweight(vector<int> &weight, vector<int> &value, int index, int capacity)
{

    // base case
    // if only 1 item to steal them just compare its weight with the kanpsach capacity

    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }

    int include = 0;
    int exclude = 0;
    int ans = 0;
    if (weight[index] <= capacity)
    {

        include = value[index] + maxweight(weight, value, index - 1, capacity - weight[index]);
        exclude = 0 + maxweight(weight, value, index - 1, capacity);

        ans = max(exclude, include);
    }
    return ans;
}

int maxweight1(vector<int> &weight, vector<int> &value, int index, int capacity, vector<vector<int>> &dp)
{

    // base case
    // if only 1 item to steal them just compare its weight with the kanpsach capacity

    if (index == 0)
    {
        if (weight[0] <= capacity)
        {
            return value[0];
        }
        else
        {
            return 0;
        }
    }

    if (dp[index][capacity] != -1)
    {
        return dp[index][capacity];
    }

    int include = 0;
    int exclude = 0;
    int ans = 0;
    if (weight[index] <= capacity)
    {

        include = value[index] + maxweight1(weight, value, index - 1, capacity - weight[index], dp);
        exclude = 0 + maxweight1(weight, value, index - 1, capacity, dp);

        dp[index][capacity] = max(exclude, include);
    }
    return dp[index][capacity];
}

int maxweight2(vector<int> &weight, vector<int> &value, int n, int capacity)
{

    vector<vector<int>> dp(n, vector<int>(capacity + 1, 0));

    // analyse base case

    for (int w = weight[0]; w <= capacity; w++)
    {

        if (weight[0] <= capacity)
        {
            dp[0][w] = value[0];
        }
        else
        {
            dp[0][w] = 0;
        }
    }

    for (int index = 1; index < n; index++)
    {

        for (int w = 0; w <= capacity; w++)
        {

            int include = 0;

            if (weight[index] <= w)
            {
                include = value[index] + dp[index - 1][w - weight[index]];

                int exclude = 0 + dp[index - 1][w];

                dp[index][w] = max(exclude, include);
            }
        }
    }
    return dp[n - 1][capacity];
}

int maxweight3(vector<int> &weight, vector<int> &value, int n, int capacity)
{

    // step 1
    vector<int> prev(capacity + 1, 0);
    vector<int> curr(capacity + 1, 0);

    for (int w = weight[0]; w <= capacity; w++)
    {

        if (weight[0] <= capacity)
        {
            prev[w] = value[0];
        }
        else
        {
            prev[w] = 0;
        }
    }

    for (int index = 1; index < n; index++)
    {

        for (int w = 0; w <= capacity; w++)
        {

            int include = 0;

            if (weight[index] <= w)
            {
                include = value[index] + prev[w - weight[index]];

                int exclude = 0 + prev[w];

                curr[w] = max(exclude, include);
            }
        }
        prev = curr;
    }
    return prev[capacity];
}

int maxweight4(vector<int> &weight, vector<int> &value, int n, int capacity)
{

    // step 1
    vector<int> curr(capacity + 1, 0);

    for (int w = weight[0]; w <= capacity; w++)
    {

        if (weight[0] <= capacity)
        {
            curr[w] = value[0];
        }
        else
        {
            curr[w] = 0;
        }
    }

    for (int index = 1; index < n; index++)
    {

        for (int w = capacity; w >= 0; w--)
        {

            int include = 0;

            if (weight[index] <= w)
            {
                include = value[index] + curr[w - weight[index]];

                int exclude = 0 + curr[w];

                curr[w] = max(exclude, include);
            }
        }
    }
    return curr[capacity];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxweight)
{

    vector<vector<int>> dp(n, vector<int>(maxweight + 1, -1));

    return maxweight1(weight, value, n - 1, maxweight, dp);
}

int main()
{

    return 0;
}