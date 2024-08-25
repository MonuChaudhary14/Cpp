#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct job{
    int id;
    int deadline;
    int profit;
};

static bool compare(job a , job b){
    return a.profit > b.profit;
}

vector<int> jobschedule(job arr[] , int n){

    sort(arr ,arr+n , compare);

    int maxdeadline = INT_MIN;

    for(int i = 0; i < n; i++){

        maxdeadline = max(maxdeadline , arr[i].deadline);

    }
    int count = 0;
    int maxprofit = 0;

    vector<int> schedule(maxdeadline +1 , -1);

    for(int i = 0; i < n; i++){

        int currprofit = arr[i].profit;
        int currjobid = arr[i].id;
        int currdead = arr[i].deadline;

        for(int k = currdead; k > 0; k--){

            if(schedule[k] == -1){
                count++;
                maxprofit = currprofit + maxprofit;
                schedule[k] = currjobid;
                break;
            }

        }

    }
    vector<int> ans;
    ans.push_back(count);
    ans.push_back(maxprofit);

    return ans;
}

int main()
{

    return 0;
}