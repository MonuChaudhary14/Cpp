#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *nextaddress;

    // constructor
    node(int data)
    {
        this->data = data;
        this->nextaddress = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->nextaddress != NULL)
        {
            delete nextaddress;
            this->nextaddress = NULL;
        }
        cout << "Memory is free for value " << value << endl;
    }
};

void insertathead(node *&head, int d)
{
    // Creating a new node
    node *temp = new node(d);
    temp->nextaddress = head;
    head = temp;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->nextaddress;
    }
    cout << endl;
}

void insertattail(node *&tail, int d)
{

    node *temp = new node(d);
    tail->nextaddress = temp;
    tail = temp;
}

void insertatposition(node *&head, node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertathead(head, d);
        return;
    }

    node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->nextaddress;
        count++;
    }

    if (temp->nextaddress == NULL)
    {
        insertattail(tail, d);
        return;
    }

    node *nodetoinsert = new node(d);
    nodetoinsert->nextaddress = temp->nextaddress;
    temp->nextaddress = nodetoinsert;
}

void deletenodes(node *&head, int position)
{

    if (position == 1)
    {
        node *temp = head;
        head = head->nextaddress;
        temp->nextaddress = NULL;
        delete temp;
    }
    else
    {

        node *curr = head;
        node *prev = NULL;

        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->nextaddress;
            count++;
        }
        prev->nextaddress = curr->nextaddress;
        curr->nextaddress = NULL;
        delete curr;
    }
}



int main()
{
    node *node1 = new node(10);
    node *head = node1;

    print(head);

    insertathead(head, 12);
    print(head);

    insertathead(head, 15);
    print(head);

    cout << endl;

    node *tail = node1;
    print(tail);

    insertattail(tail, 12);
    print(tail);

    insertattail(tail, 15);
    print(tail);

    cout << endl;

    insertatposition(head, tail, 1, 22);
    print(head);

    insertatposition(head, tail, 7, 45); /*In this position is on last but so we need to update tail to last position*/
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl;

    deletenodes(head, 1);
    print(head);

    deletenodes(head, 6);
    print(head);

    cout << "Head " << head->data << endl;
    cout << "Tail " << tail->data << endl; /*Not working properly*/

    return 0;
}