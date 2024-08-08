#include <iostream>
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

int solve(node * root , int &i, int k){

    //base case
    if(root == NULL){
        return -1;
    }

    int left = solve(root->left , i , k);

    if(left != -1){
        return left;
    }

    i++;

    if(i == k){
        return root->data;

        //Right
        return solve(root->right , i , k);
    }

}

int smallest(node * root , int k){
    int i = 0;

    int ans = solve(root, i , k);
    return ans;

}

int main()
{

    return 0;
}