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

void insertathead(node *&head, int d)
{
    // Creating a new node
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *sortlist(node *head)
{
    int zerocount = 0;
    int onecount = 0;
    int twocount = 0;

    node *temp = head;

    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zerocount++;
        }
        else if (temp->data == 1)
        {
            onecount++;
        }
        else
        {
            twocount++;
        }
        temp = temp->next;
    }

    temp = head;
    while (temp != NULL)
    {

        if (zerocount != 0)
        {
            temp->data = 0;
            zerocount--;
        }
        else if (onecount != 0)
        {
            temp->data = 1;
            onecount--;
        }
        else if (twocount != 0)
        {
            temp->data = 2;
            twocount--;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{

    node *node1 = new node(1);
    node *head = node1;

    insertathead(head, 2);
    insertathead(head, 1);
    insertathead(head, 0);
    insertathead(head, 2);

    print(head);

    sortlist(head);

    print(head);

    return 0;
}