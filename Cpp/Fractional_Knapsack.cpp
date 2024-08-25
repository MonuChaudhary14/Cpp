#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct item{
    int value;
    int weight;
};

static bool compare(pair<double , item> a , pair<double , item> b){
    return a.first > b.first;
}

double fractional(int w , item arr[] , int n){

    vector<pair<double , item>> v;

    for(int i = 0; i < n; i++){
        double perunit = (1.0*arr[i].value) / arr[i].weight;
        pair<double ,item> p = make_pair(perunit , arr[i]);
        v.push_back(p);     

    }
    sort(v.begin() ,v.end() , compare);

    double totalvalue = 0;
    
    for(int i = 0; i < n; i++){

        if(v[i] .second.weight > w){
            //can take only fraction
            totalvalue += w*v[i].first;
            w = 0;  

        }
        else{
            totalvalue += v[i].second.value;
            w = w - v[i].second.weight;
        }

    }
    return totalvalue;
}

int main()
{

    return 0;
}