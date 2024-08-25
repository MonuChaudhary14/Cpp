#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool detectcycle(int n , vector<pair<int ,int >> &edges){

    unordered_map<int , list<int>> adj;
    //create adjacent list
    for(int i = 0; i < edges.size(); i++){

        int u = edges[i].first - 1;
        int v = edges[i].second-1;

        adj[u].push_back(n);

    }

    //find all indegrees

    vector<int> indegree(n);

    for(auto i :adj){
        for(auto j : i.second){
            indegree[j]++;
        }
    }
    //0 indegree walo ko queue pe push kar do

    queue<int> q;
    for(int i = 0; i < n; i++){

        if(indegree[i] == 0){
            q.push(i);
        }

    }

    //do bfs
    int count = 0;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        //increase count
        count++;

        //neightbour indegree update
        for(auto neighbour : adj[front]){
            indegree[neighbour]--;

            if(indegree[neighbour] == 0){
                q.push(neighbour);
            }
        }
    }
    if(count == n){
        return false;
    }
    else{
        return true;
    }
}

int main()
{

    return 0;
}