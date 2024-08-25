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

void solve(node * root , int k , int count , vector<int> path){

    if(root == NULL){
        return ;
    }

    path.push_back(root->data);

    solve(root->left , k , count , path);
    solve(root->right , k , count , path);

    int size = path.size()-1;
    int sum = 0;

    for(int i = 0; i < size; i++){

        sum = sum + path[i];

        if(sum == k){
            count++;
        }

    }
    path.pop_back();
}

int ksum(node * root , int k){
    vector<int> path;
    int count = 0;

    solve(root , k , count , path);

    return count;

}

int main()
{

    return 0;
}