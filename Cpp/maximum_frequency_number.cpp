#include <iostream>
#include<vector>    
#include<unordered_map>
using namespace std;

int maximumfrequency(vector<int> arr){

    unordered_map<int , int> count;

    int maxfreq = 0;
    int maxans = 0;

    for(int i =0; i < arr.size(); i++){

        count[arr[i]]++;
        maxfreq = max(maxfreq , count[arr[i]]);
    }

    for(int i = 0; i < arr.size();i++){

        if(maxfreq == count[arr[i]]){
            maxans = arr[i];
            break;
        }

    }
    return maxans;
}   

int main()
{

    vector<int> arr;

    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(3);

    cout<<maximumfrequency(arr);

    return 0;
}