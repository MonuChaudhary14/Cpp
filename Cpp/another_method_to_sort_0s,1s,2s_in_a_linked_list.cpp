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
        node *next = NULL;
    }
};

void insertattail(node *&tail, node *curr)
{
    tail->next = curr;
    tail = curr;
}

node *sortlist(node *head)
{

    node *zerohead = new node(-1);
    node *zerotail = zerohead;
    node *onehead = new node(-1);
    node *onetail = onehead;
    node *twohead = new node(-1);
    node *twotail = twohead;

    node *curr = head;

    // Create seperate list
    while (curr != NULL)
    {

        int value = curr->data;

        if (value == 0)
        {
            insertattail(zerotail, curr);
        }
        else if (value == 1)
        {
            insertattail(onetail, curr);
        }
        else if (value == 2)
        {
            insertattail(twotail, curr);
        }
    }

    // merge # sublist

    if (onehead->next != NULL)
    {
        zerotail->next = onehead->next;
    }
    else
    {
        zerotail->next = twohead->next;
    }

    onetail->next = twohead->next;
    twotail->next = NULL;

    // setup head
    head = zerohead->next;

    // delete dummy nodes
    delete zerohead;
    delete onehead;
    delete twohead;
}

int main()
{

    return 0;
}