#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// strongly connected component->the components pf the graph from which we can reach any node

void dfs(int node, unordered_map<int, bool> &visited, stack<int> &st, unordered_map<int, list<int>> &adj)
{

    visited[node] = 1;

    for (auto nbr : adj[node])
    {

        if (!visited[nbr])
        {
            dfs(nbr, visited, st, adj);
        }
    }
    st.push(node);
}

void revdfs(int node, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adj)
{
    visited[node] = true;

    for (auto nbr : adj[node])
    {
        if (!visited[nbr])
        {
            revdfs(nbr, visited, adj);
        }
    }
}

int stronglyconnectedcomponents(int v, vector<vector<int>> &edges)
{

    unordered_map<int, list<int>> adj;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
    }

    // topological sort
    stack<int> st;
    unordered_map<int, bool> visited;

    for (int i = 0; i < v; i++)
    {

        if (!visited[i])
        {
            dfs(i, visited, st, adj);
        }
    }

    // create a transpose graph
    unordered_map<int, list<int>> transpose;

    for (int i = 0; i < v; i++)
    {
        visited[i] = 0;
        for (auto nbr : adj[i])
        {
            transpose[nbr].push_back(i);
        }
    }

    // dfs call using above ordering
    int count = 0;
    while (!st.empty())
    {

        int top = st.top();
        st.pop();
        if (!visited[top])
        {
            count++;
            revdfs(top, visited, transpose);
        }
    }
    return count;
}

int main()
{

    return 0;
}