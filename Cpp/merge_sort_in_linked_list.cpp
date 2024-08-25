#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data = d;
        next = NULL;
    }
};

node *findmid(node *head)
{
    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && slow != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

node *merge(node *left, node *right)
{

    if (left == NULL)
    {
        return right;
    }
    if (right == NULL)
    {
        return left;
    }

    node *ans = new node(-1);
    node *temp = ans;

    // merge two sorted list

    while (left != NULL && right != NULL)
    {

        if (left->data < right->data)
        {
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while (left != NULL)
    {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL)
    {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    ans = ans->next;
    return ans;
}

node *mergesort(node *head)
{

    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    // break linked list into two half
    node *mid = findmid(head);

    node *left = head;
    node *right = mid->next;
    mid->next = NULL;

    // rescursive calls to sort both half
    left = mergesort(left);
    right = mergesort(right);

    // merge both left and right half
    node *result = merge(left, right);

    return result;
}

int main()
{

    return 0;
}