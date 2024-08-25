#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void topologicalsort(int node, vector<bool> &visited, stack<int> s, unordered_map<int, list<int>> &adj)
{

    visited[node] = 1;

    for (auto neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            topologicalsort(neighbour, visited, s, adj);
        }
    }

    s.push(node);
}

vector<int> sort(vector<vector<int>> &edges, int v, int e)
{

    // create adj list
    unordered_map<int, list<int>> adj;

    for (int i = 0; i < e; i++)
    {

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // call dfs topological sort util function for all components

    vector<bool> visited;

    stack<int> s;
    vector<int> ans;

    for (int i = 0; i < v; i++)
    {

        if (!visited[i])
        {
            topologicalsort(i, visited, s, adj);
        }

        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
    }
    return ans;
}

int main()
{

    return 0;
}