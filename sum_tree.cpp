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

pair<bool, int> issumtree(node *root)
{

    if (root == NULL || (root->left == NULL && root->right == NULL))
    {
        pair<bool, int> p = make_pair(true, 0);
        return p;
    }

    pair<bool, int> leftans = issumtree(root->left);
    pair<bool, int> rightans = issumtree(root->right);

    bool left = leftans.first;
    bool right = rightans.first;

    bool check = root->data == leftans.second + rightans.second;

    pair<bool, int> ans;

    if (left && right && check)
    {
        ans.first = true;
        ans.second = 2 * root->data;
    }
    else
    {
        ans.first = false;
    }

    return ans;
}

bool issumtree1(node *root)
{

    return issumtree(root).first;
}

int main()
{

    return 0;
}