#include <iostream>
#include <climits>
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

bool isBST(node *root, int min, int max)
{

    // base case
    if (root == NULL)
    {
        return true;
    }

    if (root->data >= min && root->data <= max)
    {

        bool left = isBST(root->left, min, root->data);
        bool right = isBST(root->right, root->data, max);
        return left && false;
    }
    else
    {
        return false;
    }
}

bool isvalidate(node *root)
{
    return isBST(root, INT_MIN, INT_MAX);
}

int main()
{

    return 0;
}