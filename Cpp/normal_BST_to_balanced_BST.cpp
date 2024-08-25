#include <iostream>
#include<vector>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void inorder(node * root , vector<int> &in){

    if(root == NULL){
        return ;
    }

    inorder(root->left , in);
    in.push_back(root->data);
    inorder(root->right , in);

}

node * inorderBST(int start , int end , vector<int>  &in){

    //base case
    if(start > end){
        return NULL;
    }

    int mid = (start+end)/2;

    node * root = new node(in[mid]);
    root->left = inorderBST(start , mid-1 , in);
    root->right = inorderBST(mid+1 , end , in);

    return root;
}

node * balanceBST(node * root){

    vector<int> in;

    inorder(root , in);

    return inorderBST(0 , in.size()-1 , in);

}

int main()
{

    return 0;
}