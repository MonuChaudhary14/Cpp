#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool issafe(int x, int y, vector<vector<bool>> &vis, vector<vector<int>> &arr, int n)
{

    if ((x >= 0 && x < n) && (y >= 0 && y < n) && vis[x][y] != 1 && arr[x][y] == 1)
    {

        return true;
    }
    else
    {
        return false;
    }
}

void solve(int x, int y, vector<vector<int>> &arr, int n, vector<string> &ans, vector<vector<bool>> &vis, string path)
{
    // base case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    vis[x][y] = 1;

    // down
    if (issafe(x + 1, y, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x + 1, y, arr, n, ans, vis, path + 'D');
        vis[x][y] = 0;
    }

    // left
    if (issafe(x, y - 1, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x, y - 1, arr, n, ans, vis, path + 'L');
        vis[x][y] = 0;
    }

    // right
    if (issafe(x, y + 1, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x, y + 1, arr, n, ans, vis, path + 'R');
        vis[x][y] = 0;
    }

    // up
    if (issafe(x - 1, y, vis, arr, n))
    {
        vis[x][y] = 1;
        solve(x - 1, y, arr, n, ans, vis, path + 'U');
        vis[x][y] = 0;
    }

    vis[x][y] = 0;
}

vector<string> searchmaze(vector<vector<int>> &arr, int n)
{

    vector<string> ans;

    if (arr[0][0] == 0)
    {
        return ans;
    }

    vector<vector<bool>> visited(n, vector<bool>(n, 0));

    string path = "";

    solve(0, 0, arr, n, ans, visited, path);

    return ans;
}

int main()
{

    return 0;
}