#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{

public:
    int data;
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
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

node * merge(vector<node*> &list){

    priority_queue<node* , vector<node*> , compare > minheap;

    if(list.size() == 0){
        return NULL;
    }

    for(int i = 0; i < list.size(); i++){
        if(list[i] != NULL){
            minheap.push(list[i]);
        }
    }

    node * head = NULL;
    node * tail = NULL;

    while(minheap.size() > 0){

        node * top = minheap.top();
        minheap.pop();

        if(top->next != NULL){
            minheap.push(top->next);
        }
    
        if(head == NULL){
            head = top;
            tail = top;
        }
        else{
            tail->next = top;
            tail = top;
        }

    }
    return head;
}

int main()
{

    return 0;
}