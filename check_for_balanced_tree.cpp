#include <iostream>
#include<cmath>
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


pair<bool , int> isbalanced(node * root){

    //base case
    if(root == NULL){
        pair<bool , int> p = make_pair(true , 0);
        return p;
    }

    pair<bool , int>  left = isbalanced(root->left);
    pair<bool , int> right = isbalanced(root->right);

    bool leftans = left.first;
    bool rightans = right.first;

    bool diff = abs(left.second - right.second) <= 1;

    pair<bool , int> ans;
    ans.second = max(left.second  , right.second) + 1;

    if(leftans && rightans && diff){
        ans.first = 1;
    }
    else{
        ans.first = 0;
    }

    return ans;
}

bool isbalnced1(node * root){
    return isbalanced(root).first;
}

int main()
{

    return 0;
}