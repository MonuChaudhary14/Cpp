#include <iostream>
#include <bits/stdc++.h>
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

bool isMaxorder(node *root)
{

    // leaf node
    if (root->left == NULL && root->right == NULL)
    {
        return true;
    }

    if (root->right == NULL)
    {
        return (root->data > root->left->data);
    }
    else
    {
        bool left = isMaxorder(root->left);
        bool right = isMaxorder(root->right);

        return (left && right && (root->data > root->left->data && root->data > root->right->data));
    }
    return false;
}

int countnodes(node *root)
{

    // base case
    if (root == NULL)
    {
        return 0;
    }
    return countnodes(root->left) + countnodes(root->right) + 1;
}

bool isCBT(node *root, int index, int count)
{

    if (root == NULL)
    {
        return true;
    }

    if (index >= count)
    {
        return false;
    }
    else
    {
        bool left = isCBT(root->left, 2 * index + 1, count);
        bool right = isCBT(root->right, 2 * index + 2, count);
        return (left && right);
    }
}

bool isheap(node *root)
{

    int index = 0;
    int totalcount = countnodes(root);

    if (isCBT(root, index, totalcount) && isMaxorder(root))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    return 0;
}