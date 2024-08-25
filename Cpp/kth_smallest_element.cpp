// #include <iostream>
#include<bits/stdc++.h> //Due to this we get all header files
using namespace std;

int element(int arr[] , int l , int r , int k){

    priority_queue<int> q;

    for(int i = 0; i < k ; i++){

        q.push(arr[i]);
    }

    for(int i = k; i < r; i++){

        if(arr[i] < q.top()){
            q.pop();
            q.push(arr[i]);
        }

    }


    return q.top();
}



int main()
{

    return 0;
}