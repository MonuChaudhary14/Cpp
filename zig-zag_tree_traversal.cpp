#include <iostream>
#include<queue>
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

vector<int> zigzagtraversal(node * root){

    vector<int> result;

    if(root == NULL){
        return result;
    }

    queue<node*> q;
    bool lefttoright = true;

    q.push(root);

    while(!q.empty()){

        int size = q.size();
        vector<int> ans(size);

        //Level process
        for(int i = 0; i < size; i++){

            node * frontnode = q.front();
            q.pop();

            //normal insert or reverse
            int index = lefttoright ? i : size-i-1;

            ans[index] = frontnode->data;

            if(frontnode->left){
                q.push(frontnode->left);
            }

            if(frontnode->right){
                q.push(frontnode->right);
            }

        }

        //direction change
        lefttoright != lefttoright;


        for(auto i : ans){
            result.push_back(i);
        }

    }
    return result;

}

int main()
{

    return 0;
}