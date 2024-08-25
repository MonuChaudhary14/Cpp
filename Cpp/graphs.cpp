#include <iostream>
#include <unordered_map>
#include <list>
#include <vector>
using namespace std;

class graph
{

public:
    unordered_map<int, list<int>> adj;

    void addedge(int u, int v, bool direction)
    {
        // direction = 0->undirected
        // direction = 1->directed

        // create an edge from u to v

        adj[u].push_back(v);

        if (direction == 0)
        {
            adj[v].push_back(u);
        }
    }

    void printadj()
    {

        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }

    // another method

    vector<vector<int>> printadj(int n, int m, vector<vector<int>> &edge)
    {

        vector<int> ans[n];

        for (int i = 0; i < m; i++)
        {

            int u = edge[i][0];
            int v = edge[i][1];

            ans[u].push_back(v);
            ans[v].push_back(u); // only for undirectional graph
        }

        vector<vector<int>> adj(n);

        for (int i = 0; i < n; i++)
        {

            adj[i].push_back(i);

            // entering neighbours
            for (int j = 0; j < ans[i].size(); j++)
            {
                adj[i].push_back(ans[i][j]);
            }
        }
        return adj;
    }
};

int main()
{
    int n;
    cout << "Enter the number of nodes" << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edge" << endl;
    cin >> m;

    graph g;

    for (int i = 0; i < m; i++)
    {

        int u, v;
        cin >> u, v;

        // creating an undirected graph
        g.addedge(u, v, 0);
    }

    // printing graph
    g.printadj();

    return 0;
}