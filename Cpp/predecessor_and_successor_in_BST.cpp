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

pair<int, int> find(node * root , int key){

    //find key
    node * temp = root;
    int pre = -1;
    int succ = -1;

    while(temp->data != key){

        if(temp->data > key){
            succ = temp->data;
            temp = temp->left;
        }
        else{
            pre = temp->data;
            temp = temp ->right;
        }

    }

    //pre and succ

    //pre
    node * lefttree = temp->left;

    while(lefttree != NULL){
        pre = lefttree->data;
        lefttree = lefttree->right;
    }

    node * righttree = temp->right;

    while(righttree != NULL){

        succ = righttree->data;
        righttree = righttree->left;
    }

    // pair<int, int> ans = make_pair(pre , succ);

    // return ans;
    return {pre , succ};

}

int main()
{

    return 0;
}