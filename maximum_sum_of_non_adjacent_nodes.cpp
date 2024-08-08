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

pair<int,int> solve(node * root){

    //base case
    if(root == NULL){
        pair<int, int> p = make_pair(0,0);
        return p;
    }

    pair<int, int> left = solve(root->left);
    pair<int, int> right = solve(root->right);


    pair<int, int> result;

    result.first = root->data + left.second + right.second;

    result.second = max(left.first , left.second) + max(right.first , right.second);


    return result;
}

int getmaxsum(node * root){

    pair<int , int> ans = solve(root);

    return max(ans.first , ans.second);

}

int main()
{

    return 0;
}