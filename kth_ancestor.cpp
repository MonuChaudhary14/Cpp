#include <iostream>
#include<climits>
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

node * solve(node * root , int &k , int value){

    //base case
    if(root == NULL){
        return NULL;
    }

    if(root->data == value){
        return root;
    }

    node * leftans = solve(root->left , k ,value);
    node * rightans = solve(root->right , k ,value);

    if(leftans != NULL && rightans == NULL){
        k--;

        if(k <= 0){
            k = INT_MAX;   /*we make it so big that we cannot again get it*/
            return root;
        }
        return leftans;
    }

    if(leftans == NULL && rightans != NULL){

          k--;

        if(k <= 0){
            k = INT_MAX;   /*we make it so big that we cannot again get it*/
            return root;
        }
        return rightans;
    }
    return NULL;
}

int kancestor(node * root , int k , int value){

    node * ans = solve(root , k , value);

    if(ans == NULL || /*root*/ans->data == value){
        return -1;
    }

    return ans->data;

}

int main()
{

    return 0;
}