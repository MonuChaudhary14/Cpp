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

node *LCA(node *root, node *P, node *Q)
{

    // base case
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data < P->data && root->data < Q->data)
    {
        return LCA(root->right, P, Q);
    }

    if (root->data > P->data && root->data > Q->data)
    {
        return LCA(root->left, P, Q);
    }

    return root;
}

int main()
{

    return 0;
}