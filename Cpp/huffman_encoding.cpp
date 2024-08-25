#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node * left;
    node * right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

class compare{
    public:
    bool operator()(node * a, node * b){
        return a->data > b->data;
    }
};

void traverse(node * root , vector<string> &ans , string temp){

    //base case
    if(root->left == NULL && root->right == NULL){
        ans.push_back(temp);
        return ;
    }

    traverse(root->left , ans , temp + '0');
    traverse(root->right , ans , temp + '1');

}

vector<string> huffmancodes(string s , vector<int> f , int n){

    priority_queue<node * , vector<node*> , compare> pq;

    for(int i = 0; i <n; i++){

        node  * temp = new node(f[i]);
        pq.push(temp);

    }

    while(pq.size() > 1){
        node * left = pq.top();
        pq.pop();

        node * right = pq.top();
        pq.pop();

        node * newnode = new node(left->data + right->data);
        newnode->left = left;
        newnode->right = right;
        pq.push(newnode);
    }

    node * root = pq.top();

    vector<string>  ans;

    string temp = "";

    traverse(root , ans , temp);

    return ans;
}



int main()
{

    return 0;
}