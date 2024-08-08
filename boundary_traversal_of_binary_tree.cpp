#include <iostream>
#include<vector>
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

void traverseleft(node * root , vector<int>&ans){

    //base case
    if((root == NULL) || (root->left == NULL && root->right == NULL)){
        return ;
    }

    ans.push_back(root->data);

    if(root->left){
        traverseleft(root->left , ans);
    }
    else{
        traverseleft(root->right , ans);
    }
    
}

void traverseleaf(node * root , vector<int> &ans){

    //base case
    if(root == NULL){
        return ;
    }

    if(root->left == NULL && root->right == NULL){
        ans.push_back(root->data);
        return ;
    }

    traverseleaf(root->left , ans);
    traverseleaf(root->right , ans);

}

void traverseright(node * root , vector<int> ans){

    //base case
    if((root == NULL) || (root ->left == NULL && root->right == NULL)){
        return ;
    }

    if(root->right){
        traverseright(root->right , ans);
    }
    else{
        traverseright(root->left , ans);
    }

    ans.push_back(root->data);

}

vector<int> boundary(node * root){

    vector<int> ans;

    if(root == NULL){
        return ans;
    }

    ans.push_back(root->data);

    //left part print
    traverseleft(root->left, ans);

    //traverse leaf node

    //left subtree
    traverseleaf(root->left ,ans);
    //right subtree
    traverseleaf(root->right ,ans);

    //traverse right part
    traverseright(root->right , ans);


    return ans;
    
}

int main()
{

    return 0;
}