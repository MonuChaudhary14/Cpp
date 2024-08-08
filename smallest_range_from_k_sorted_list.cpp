#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    int row;
    int col;

    node(int data, int row, int col)
    {
        this->data = data;
        this->row = row;
        this->col = col;
    }
};

class compare
{ // we have to create this class because we are making our own class node and using in sorting in queue so we need a class to compare elements
public:
    bool operator()(node *a, node *b)
    {
        return a->data > b->data;
    }
};

int ksorted(vector<vector<int>> &a , int k , int n){

    int mini = INT_MAX;
    int maxi = INT_MIN;

    priority_queue<node* , vector<node*> , compare > minheap;

    for(int i = 0; i < k;i++){

        int element = a[i][0];
        mini = min(mini , element);
        maxi = max(maxi , element);
        minheap.push(new node(element , i , 0));
    }

    int start = mini;
    int end = maxi;

    while(!minheap.empty()){

        node * temp = minheap.top();
        minheap.pop();

        mini = temp->data;

        if(maxi - mini < end - start){

            start = mini;
            end = mini;
        }

        if(temp->col+1 < n){

            maxi = max(maxi , a[temp->row][temp->col+1]);
            minheap.push(new node(a[temp->row][temp->col+1] , temp->row , temp->col+1));
        }
        else{
            break;
        }


    }
    return end - start+1;
}

int main()
{

       return 0;
}