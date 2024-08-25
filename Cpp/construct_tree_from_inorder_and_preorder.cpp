#include <iostream>
#include <map>
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

void mapping(int in[], map<int, int> &nodetoindex, int n)
{

    for (int i = 0; i < n; i++)
    {
        nodetoindex[in[i]] = i;
    }
}

node *solve(int in[], int pre[], int &index, int inorderstart, int inorderend, int n, map<int, int> &nodetoindex)
{

    // base case
    if (index >= n || inorderstart > inorderend)
    {
        return NULL;
    }

    // create a root node for element
    int element = pre[index++];
    node *root = new node(element);

    // finding index in inorder
    int position = nodetoindex[element];

    // rescursive calls
    root->left = solve(in, pre, index, inorderstart, position - 1, n, nodetoindex);
    root->right = solve(in, pre, index, position + 1, inorderend, n, nodetoindex);

    return root;
}

node *buildtree(int in[], int pre[], int n)
{

    int preorderindex = 0;
    map<int, int> nodetoindex;
    // create nodes to index mapping
    mapping(in, nodetoindex, n);
    node *ans = solve(in, pre, preorderindex, 0, n - 1, n, nodetoindex);

    return ans;
}

int main()
{

    return 0;
}