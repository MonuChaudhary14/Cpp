#include <iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
using namespace std;

bool iscyclicDFS(int node , int parent , unordered_map<int, bool> &visited , unordered_map<int , list<int>> &adj){

    visited[node] = true;

    for(auto neighbour : adj[node]){
        if(!visited[neighbour]){
            bool cycledetected = iscyclicDFS(neighbour , node , visited , adj);

            if(cycledetected){
                return true;
            }
        }
        else if(neighbour != parent){
            return true;
        }
    }
    return false;
}

string cycledetection(vector<vector<int>> &edges , int n ,int m){

    //create adjacency list
    unordered_map<int, list <int>> adj;

    for(int i = 0; i < m; i++){

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    unordered_map<int , bool> visited;
    //to handle disconnnected components

    for(int i = 0; i < n; i++){

        if(!visited[i]){

            bool ans = iscyclicDFS(i ,-1, visited , adj);
            if(ans == 1){
                return "YES";
            }

        }

    }
    
    return "NO";
}

int main()
{

    return 0;
}