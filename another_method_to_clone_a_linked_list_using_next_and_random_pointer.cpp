#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *random;

    node(int d)
    {
        data = d;
        next = NULL;
        random = NULL;
    }
};

void insertattail(node *&head, node *&tail, int d)
{

    node *newnode = new node(d);

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail->next = newnode;
        tail = newnode;
    }
}

node *copylist(node *head)
{

    // Create a clone list
    node *clonehead = NULL;
    node *clonetail = NULL;

    node *temp = head;

    while (temp != NULL)
    {
        insertattail(clonehead, clonetail, temp->data);
        temp = temp->next;
    }

    // clonenodes add in between original list
    node *originalnode = head;
    node *clonenode = clonehead;

    while (originalnode != NULL && clonenode != NULL)
    {
        node *next = originalnode->next;
        originalnode->next = clonenode;
        originalnode = next;

        next = clonenode->next;
        clonenode->next = originalnode;
        clonenode = next;
    }

    // random pointer copy

    temp = head;

    while (temp != NULL)
    {

        if (temp->next != NULL)
        {

            temp->next->random = temp->random ? temp->random->next : temp->random;

            // if(temp->random != NULL){    the above one line represent this whole code
            //     temp->next->random = temp->random->next;
            // }
            // else{
            //     temp->next = temp->random;
            // }
        }

        temp = temp->next->next;
    }

    // revert changes done in step 2

    originalnode = head;
    clonenode = clonehead;

    while (originalnode != NULL && clonenode != NULL)
    {

        originalnode->next = clonenode->next;
        originalnode = originalnode->next;

        if (originalnode != NULL)
        {
            clonenode->next = originalnode->next;
        }
    }
    // return ans
    return clonehead;
}

int main()
{

    return 0;
}