#include<iostream>
#include<climits>
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

class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(node * root , int &ans){

    //base case
    if(root == NULL){
        return {INT_MIN , INT_MAX , true , 0};
    }

    info left = solve(root->left , ans);
    info right = solve(root->right , ans);

    info currNode;

    currNode.size = left.size + right.size +1;
    currNode.maxi = max(root->data , right.maxi);
    currNode.mini = min(root->data , left.mini);

    if(left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)){
        currNode.isBST = true;
    }
    else{
        currNode.isBST = false;
    }

    if(currNode.isBST){
        ans = max(ans , currNode.size);
    }

    return currNode;

}

int largestBST(node * root){

    int maxsize = 0;
    info temp = solve(root , maxsize);
    
    return maxsize;


}
 
int main(){
    
    return 0;
}