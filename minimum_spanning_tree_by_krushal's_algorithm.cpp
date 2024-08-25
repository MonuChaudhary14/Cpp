#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool compare(vector<int> &a , vector<int> &b){
    return a[2] < b[2];
}

void makeset(vector<int> &parent , vector<int> &rank , int n){

    for(int i = 0; i , n; i++){

        parent[i] = i;
        rank[i] = 0;
    }
}

int findparent(vector<int> &parent , int node){

    if(parent[node] == node){
        return node;
    }
    // in return type we set the value of particular node so we again don't need to check it again
    return parent[node] = findparent(parent , parent[node]);

}

void unionset(int u , int v , vector<int> &parent , vector<int> &rank){

    u = findparent(parent , u);
    v = findparent(parent , v);

    if(rank[u] < rank[v]){
        parent[u] = v;
    }
    else if(rank[v] < rank[u]){
        parent[v] = u;
    }
    else{
        parent[v] = u;
        rank[u]++;
    }

}

int minimumspanningtree(vector<vector<int>> &edges ,int n){

sort(edges.begin() , edges.end() , compare);

vector<int> parent(n);
vector<int> rank(n);

makeset(parent , rank , n);

int minweight = 0;

for(int i = 0; i < edges.size(); i++){

    int u = findparent(parent , edges[i][0]);
    int v = findparent(parent , edges[i][1]);
    int wt = edges[i][2];

    if(u != v){
        minweight += wt;
        unionset(u , v , parent , rank);
    }

}

    return minweight;
}



int main()
{

    return 0;
}