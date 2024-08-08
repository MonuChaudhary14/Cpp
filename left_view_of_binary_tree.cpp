#include <iostream>
#include<vector>
#include<map>
#include<queue>
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

void solve(node * root , vector<int>& ans , int level){

    //base case
    if(root == NULL){
        return ;
    }

    //entered a new level
    if(level == ans.size()){
        ans.push_back(root->data);
    }

    solve(root->left ,ans , level+1);
    solve(root->right , ans ,level+1);

}

vector<int> leftview(node * root){

    vector<int> ans;
    solve(root , ans , 0);

    return ans;
}

int main()
{

    return 0;
}