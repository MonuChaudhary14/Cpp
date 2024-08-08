#include <iostream>
#include<vector>
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

void inorder(node * root , vector<int> &in){

    if(root == NULL){
        return ;
    }

    inorder(root->left , in);
    in.push_back(root->data);
    inorder(root->right , in);

}

bool twosum(node * root  , int k){

    vector<int> inorderval;
    inorder(root , inorderval);

    int i = 0; 
    int j = inorderval.size()-1;

    while(i < j){
        int sum = inorderval[i] + inorderval[j];

        if(sum == k){
            return true;
        }
        else if(sum > k){
            j--;
        }
        else{
            i--;
        }

    }
    return false;

}


int main()
{

    return 0;
}