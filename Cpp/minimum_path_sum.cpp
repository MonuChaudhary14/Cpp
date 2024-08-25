#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minPathSum(vector<vector<int>> &grid)
{
    if (grid.empty() || grid[0].empty())
    {
        return 0;
    }

    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> t(m, vector<int>(n, 0));

    t[0][0] = grid[0][0];

    for (int j = 1; j < n; ++j)
    {
        t[0][j] = t[0][j - 1] + grid[0][j];
    }

    for (int i = 1; i < m; ++i)
    {
        t[i][0] = t[i - 1][0] + grid[i][0];
    }

    for (int i = 1; i < m; ++i)
    {
        for (int j = 1; j < n; ++j)
        {
            t[i][j] = min(t[i - 1][j], t[i][j - 1]) + grid[i][j];
        }
    }

    return t[m - 1][n - 1];
}

int main()
{

    return 0;
}