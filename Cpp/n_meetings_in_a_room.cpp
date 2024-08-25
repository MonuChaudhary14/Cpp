#include <iostream>
#include<bits/stdc++.h>
using namespace std;

static bool compare(pair<int ,int> a , pair<int , int> b){

    return a.second < b.second;
}

int maxmeeting(int start[] , int end[] , int n){

    vector<pair<int , int>> v;

    for(int i = 0; i < n ; i++){

        pair<int, int> p = make_pair(start[i] , end[i]);
        v.push_back(p);
    }

    sort(v.begin() , v.end() , compare);

    int count = 1;
    int endans = v[0].second;

    for(int i = 1; i < n ; i++){

        if(v[i].first > endans){
            count++;
            endans = v[i].second;
        }

    }
    return count;
}

int main()
{

    return 0;
}