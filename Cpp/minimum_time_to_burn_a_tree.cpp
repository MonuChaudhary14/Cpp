#include <iostream>
#include <queue>
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

    node *createparentmapping(node *root, int target, map<node *, node *> &nodetoparent)
    {

        node *res = NULL;

        queue<node *> q;

        q.push(root);
        nodetoparent[root] = NULL;

        while (!q.empty())
        {

            node *front = q.front();
            q.pop();

            if (front->data == target)
            {
                res = front;
            }

            if (front->left)
            {
                nodetoparent[front->left] = front;
                q.push(front->left);
            }

            if (front->right)
            {
                nodetoparent[front->left] = front;
                q.push(front->left);
            }
        }
        return res;
    }

    int burntree(node *root, map<node *, node *> &nodetoparent)
    {

        map<node *, bool> visited;
        bool flag;
        queue<node *> q;

        q.push(root);
        visited[root] = true;

        int ans = 0;

        while (!q.empty())
        {
            bool flag = 0;

            int size = q.size();

            for (int i = 0; i < size; i++)
            {

                // process neighbouring node
                node *front = q.front();
                q.pop();

                if (front->left && !visited[front->left])
                {
                    flag = 1;
                    q.push(front->left);
                    visited[front->left] = 1;
                }

                if (front->right && !visited[front->right])
                {
                    flag = 1;
                    q.push(front->right);
                    visited[front->right] = 1;
                }

                if (nodetoparent[front] && !visited[nodetoparent[front]])
                {
                    flag = 1;
                    q.push(nodetoparent[front]);
                    visited[nodetoparent[front]] = 1;
                }
            }
        }

        if (flag == 1)
        {
            ans++;
        }

        return ans;
    }

    int mintime(node *root, int target)
    {

        // step1: create nodetoparent mapping
        // step2: find target node
        // step3: burn the tree in min time

        map<node *, node *> nodetoparent;
        node *targetnode = createparentmapping(root, target, nodetoparent);

        int ans = burntree(targetnode, nodetoparent);

        return ans;
    }
};

int main()
{

    return 0;
}