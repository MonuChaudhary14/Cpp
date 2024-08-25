#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> shortestpath(vector<pair<int , int>> edges , int n , int m , int s , int t){

    unordered_map<int , list<int>> adj;
    //create adjacent list
    for(int i = 0; i < edges.size(); i++){

        int u = edges[i].first - 1;
        int v = edges[i].second-1;

        adj[u].push_back(n);

    }

    //do bfs

    unordered_map<int , bool> visited;
    unordered_map<int , int> parent;

    queue<int> q;
    q.push(s);
    parent[s] = -1;
    visited[s] = true;

    while(!q.empty()){

        int front = q.front();
        q.pop();

        for(auto i : adj[front]){

            if(!visited[i]){
                visited[i] = true;
                parent[i] = front;
                q.push(i);
            }

        }

    } 

    vector<int> ans;
    int currentnode = t;
    ans.push_back(t);

    while(currentnode != s){
        currentnode = parent[currentnode];
        ans.push_back(currentnode);
    }

    reverse(ans.begin() , ans.end());
    return ans;
}

int main()
{

    return 0;
}