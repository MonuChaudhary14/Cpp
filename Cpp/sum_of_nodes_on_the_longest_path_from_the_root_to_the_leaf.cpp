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

void solve(node *root, int sum, int &maxsum, int length, int &maxlength)
{

    // base case
    if (root == NULL)
    {

        if (length > maxlength)
        {
            maxlength = length;
            maxsum = sum;
        }
        else if (length == maxlength)
        {
            maxsum = max(sum, maxsum);
        }
        return;
    }

    sum = sum + root->data;

    solve(root->left, sum, maxsum, length + 1, maxlength);
    solve(root->right, sum, maxsum, length + 1, maxlength);
}

int sumoflongest(node *root)
{

    int length = 0;
    int maxlength = 0;
    int sum = 0;
    int maxsum = INT_MIN;

    solve(root, sum, maxsum, length, maxlength);

    return maxsum;
}

int main()
{

    return 0;
}