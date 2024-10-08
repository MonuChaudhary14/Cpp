#include <iostream>
#include <bits/stdc++.h>
using namespace std; // video no.102    lecture no-94

class graph
{

public:
    unordered_map<int, list<pair<int, int>>> adj;

    void addedge(int u, int v, int weight)
    {

        pair<int, int> p = make_pair(v, weight);
        adj[u].push_back(p);
    }

    void printadj()
    {
        for (auto i : adj)
        {

            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")";
            }
            cout << endl;
        }
    }

    void dfs(int node, unordered_map<int, bool> &visited, stack<int> &topo)
    {

        visited[node] = 1;

        for (auto neighbour : adj[node])
        {
            if (!visited[neighbour.first])
            {
                dfs(neighbour.first, visited, topo);
            }
        }
        topo.push(node);
    }

    void getshortestpath(int src, vector<int> &distance, stack<int> &topo)
    {

        distance[src] = 0;

        while (!topo.empty())
        {
            int top = topo.top();
            topo.pop();

            if (distance[top] != INT_MAX)
            {

                for (auto i : adj[top])
                {

                    if (distance[top] + i.second < distance[i.first])
                    {
                        distance[i.first] = distance[top] + i.second;
                    }
                }
            }
        }
    }
};

int main()
{
    graph g;
    g.addedge(0, 1, 5);
    g.addedge(0, 2, 3);
    g.addedge(0, 2, 2);
    g.addedge(1, 3, 6);
    g.addedge(2, 3, 7);
    g.addedge(2, 4, 4);
    g.addedge(2, 5, 2);
    g.addedge(3, 4, -1);
    g.addedge(4, 5, -2);

    g.printadj();

    // topological sort
    int n = 6;

    unordered_map<int, bool> visited;
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.dfs(i, visited, s);
        }
    }

    int src = 1;

    vector<int> distance;

    for (int i = 0; i < n; i++)
    {

        distance[i] = INT_MAX;

        g.getshortestpath(src, distance, s);

        cout << "answer is " << endl;

        for (int i = 0; i < distance.size(); i++)
        {

            cout << distance[i] << " ";
        }
        cout << endl;
    }

    return 0;
}