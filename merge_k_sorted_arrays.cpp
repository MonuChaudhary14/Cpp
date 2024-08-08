#include <iostream>
#include <bits/stdc++.h>
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

vector<int> mergeksortedarrays(vector<vector<int>> &arr, int k)
{

    priority_queue<node *, vector<node *>, compare> minheap;

    // insert first element of all arrays

    for (int i = 0; i < k; i++)
    {

        node *temp = new node(arr[i][0], i, 0);
        minheap.push(temp);
    }

    vector<int> ans;

    while (minheap.size() > 0)
    {

        node *temp = minheap.top();

        ans.push_back(temp->data);
        minheap.pop();

        int i = temp->row;
        int j = temp->col;

        if (j + 1 < arr[i].size())
        {
            node *next = new node(arr[i][j + 1], i, j + 1);
            minheap.push(next);
        }
    }
    return ans;
}

int main()
{

    return 0;
}