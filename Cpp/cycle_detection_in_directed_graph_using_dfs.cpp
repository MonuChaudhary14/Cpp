#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkcycleDFS(int node, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited, unordered_map<int, list<int>> &adj)
{

    visited[node] = 1;
    dfsvisited[node] = 1;

    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            bool cycledetected = checkcycleDFS(neighbour, visited, dfsvisited, adj);

            if (cycledetected)
            {
                return true;
            }
        }
        else if (dfsvisited[neighbour])
        {
            return true;
        }
    }
    return false;
}

bool detectcycle(int n, vector<pair<int, int>> &edges)
{

    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].first;
        int v = edges[i].second;

        adj[u].push_back(v);
    }

    // call dfs for all components
    unordered_map<int, bool> visited;
    unordered_map<int, bool> dfsvisited;

    for (int i = 1; i <= n; i++)
    {

        if (!visited[i])
        {
            bool cycledetected = checkcycleDFS(i, visited, dfsvisited, adj);

            if (cycledetected)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{

    return 0;
}