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

void flatten(node * root){

    node * curr = root;
    while(curr != NULL){

        if(curr->left){

            node * prev = curr->right;

            while(prev->right){
                prev = prev->right;
            }
            prev->right = curr->right;
            curr->right = curr->left;
            curr->left = NULL;
        }
        curr = curr->right;
    }
}

int main()
{

    return 0;
}