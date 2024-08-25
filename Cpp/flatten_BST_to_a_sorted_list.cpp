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

node * flatten(node * root){

    vector<int> inorderval;
    inorder(root , inorderval);

    int n = inorderval.size();

    node * newroot = new node(inorderval[0]);

    node * curr = newroot;

    for(int i = 1; i < n; i++){

        node * temp = new node(inorderval[i]);

        curr->left = NULL;
        curr->right = temp;

        curr = temp;

    }
    curr->left = NULL;
    curr->right = NULL;

    return newroot;

}

int main()
{

    return 0;
}