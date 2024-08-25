#include <bits/stdc++.h>
using namespace std;

void prepareadjlist(unordered_map<int, set/*we can also use list but in this set case it sort the two values*/<int>> &adjlist, vector<pair<int, int>> &edge)
{
    for (int i = 0; i < edge.size(); i++)
    {

        int u = edge[i].first;
        int v = edge[i].second;

        adjlist[u].insert(v);
        adjlist[v].insert(u); /*only in case of undirectred graph*/
    }
}

void bfs(unordered_map<int, set<int>> &adjlist, unordered_map<int, bool> &visited, vector<int> ans, int node)
{

    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {

        int frontnode = q.front();
        q.pop();

        // store frontnode into ans
        ans.push_back(frontnode);

        // traverse all neighbours of frontnode
        for (auto i : adjlist[frontnode])
        {
            if (!visited[i])
            {
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edge)
{

    unordered_map<int, set<int>> adjlist;

    vector<int> ans;

    unordered_map<int, bool> visited;

    prepareadjlist(adjlist, edge);

    // traverse all components of a graph
    for (int i = 0; i < vertex; i++)
    {

        if (!visited[i])
        {
            bfs(adjlist, visited, ans, i);
        }
    }
    return ans;
}

int main()
{

    return 0;
}