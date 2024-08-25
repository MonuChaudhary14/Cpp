#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> dijkstra(vector<vector<int>> &vec , int vertices , int edges , int source){

    //create adjancency list
    unordered_map<int , list<pair<int , int>>> adj;

    for(int i = 0; i < edges ; i++){

        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u ,w));

    }

    //creation of distance array 
    vector<int> dist(vertices);

    for(int i = 0; i < vertices; i++){

        dist[i] = INT_MAX;

    }

    //creation of set on basis of (distance , node)
    set<pair<int , int>> st;

    //intilise distance with source node
    dist[source] = 0;
    st.insert(make_pair(0 , source));

    while(!st.empty()){

        //fetch top record
        auto top = *(st.begin());

        int nodedistance = top.first;
        int topnode = top.second;

        //remove top record now
        st.erase(st.begin());

        //traverse on neighbours
        for(auto neighbour : adj[topnode]){

            if(nodedistance + neighbour.second < dist[neighbour.first]){

                auto record = st.find(make_pair(dist[neighbour.first] , neighbour.first));

                //if record found , then erase it
                if(record != st.end()){
                    st.erase(record);
                }

                //distance update
                dist[neighbour.first] = nodedistance + neighbour.second;

                //record push in et
                st.insert(make_pair(dist[neighbour.first] , neighbour.first));

            }

        }

    }
    return dist;

}

int main()
{

    return 0;
}