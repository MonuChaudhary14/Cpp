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

void inorder(node * root , int count){

    //base case
    if(root == NULL){
        return ;
    }

    inorder(root->left , count);    //L
    
    if(root->left == NULL && root->right == NULL){
        count++;
    }

    inorder(root->right , count);   //R

}

int noofleafnodes(node * root){

    int count = 0;

    inorder(root , count);

    return count;

}



int main(){

    return 0;
}