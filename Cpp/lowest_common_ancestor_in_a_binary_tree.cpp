#include <iostream>
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

node * lca(node * root , int n1 , int n2){

    //base case
    if(root == NULL){
        return NULL;
    }

    if(root ->data == n1 || root->data == n2){
        return root;
    }

    node * leftans = lca(root->left , n1 , n2);
    node * rightans = lca(root->right , n1 , n2);

    if(leftans != NULL && rightans != NULL){
        return root;
    }
    else if(leftans != NULL && rightans == NULL){
        return leftans;
    }
    else if(rightans != NULL && leftans == NULL){
        return rightans;
    }
    else{
        return NULL;
    }
}

int main()
{

    return 0;
}