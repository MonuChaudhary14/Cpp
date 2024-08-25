#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//this algorithm is used when there is negative weight but it the cycle in the graph must not contain negative cycle means the sum of all weights in cycle is must be positive and we find negative cycle using belmaan cycle

int bellmonford(int n , int m , int src , int dest , vector<vector<int>> &edges){

    vector<int> dist(n+1 , 1e9/*large number*/);
        dist[src] = 0;

    for(int i = 1; i <= n; i++){

        //traverse on edge list

        for(int j = 0; j < m; j++){

            int u = edges[j][0];
            int v = edges[j][1];
            int wt = edges[j][2];

            if(dist[u] != 1e9 && (dist[u]+ wt) < dist[v]){
                dist[v] = dist[u] + wt;
            }

        }

    }
    //check for negative cycle
    bool flag = 0;

    for(int j = 0; j < m; j++){
        int u = edges[j][0];
        int v = edges[j][1];
        int wt = edges[j][2];

        if(dist[u] != 1e9 && (dist[u] + wt) < dist[v]){
            flag = 1;
        }
    }

    if(flag == 0){
        return dist[dest];
    }
    else{
        return -1;
    }

    }



int main()
{

    return 0;
}