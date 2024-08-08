#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *nextaddress;

    node(int data)
    {
        this->data = data;
        this->nextaddress = NULL;
    }
};

void reverse(node *&head, node *curr, node *prev)
{

    if (curr == NULL)
    {
        prev = head;
        return;
    }

    node *forward = curr->nextaddress;
    reverse(head, forward, curr);
    curr->nextaddress = prev;
}

node *reverselinkedlist(node *head)
{
    node *curr = head;
    node *prev = NULL;
    reverse(head, curr, prev);
    return head;
}

node *reverse1(node *head)
{

    if (head == NULL || head->nextaddress == NULL)
    {
        return head;
    }

    node *head1 = reverse1(head->nextaddress);

    head->nextaddress->nextaddress = head;
    head->nextaddress = NULL;

    return head1;
}

int main()
{

    return 0;
}