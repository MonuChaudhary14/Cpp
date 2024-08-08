#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node *prevaddress;
    node *nextaddress;

    // constructor
    node(int d)
    {
        this->data = d;
        this->prevaddress = NULL;
        this->nextaddress = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (nextaddress != NULL)
        {
            delete nextaddress;
            nextaddress = NULL;
        }
        cout << "Memory is free for node with data " << value << endl;
    }
};

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

int getlength(node *head)
{
    int length = 0;
    node *temp = head;

    while (temp != NULL)
    {
        length++;
        temp = temp->nextaddress;
    }
    return length;
}

void insertathead(node *&head, node *&tail, int d)
{

    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->nextaddress = head;
        head->prevaddress = temp;
        head = temp;
    }
}

void insertattail(node *&head, node *&tail, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->nextaddress = temp;
        temp->prevaddress = tail;
        tail = temp;
    }
}

void insertatposition(node *&head, node *&tail, int position, int d)
{

    if (position == 1)
    {
        insertathead(head, tail, d);
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
        insertattail(head, tail, d);
        return;
    }

    node *nodetoinsert = new node(d);

    nodetoinsert->nextaddress = temp->nextaddress;
    temp->nextaddress->prevaddress = nodetoinsert;
    temp->nextaddress = nodetoinsert;
    nodetoinsert->prevaddress = temp;
}

void deletenodes(node *&head, int position)
{

    if (position == 1)
    {
        node *temp = head;
        temp->nextaddress->prevaddress = NULL;
        head = temp->nextaddress;

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
        
        curr->prevaddress = NULL;
        prev->nextaddress = curr->nextaddress;
        curr->nextaddress = NULL;
        delete curr;
    }
}

int main()
{

    // node* node1 = new node(10);
    // node* head = node1;
    // node* tail = node1;

    node *head = NULL; /*we can also use the upper case*/
    node *tail = NULL;

    print(head);

    cout << "The length of list is " << getlength(head) << endl;

    insertathead(head, tail, 15);

    print(head);
    cout << endl;

    insertattail(head, tail, 5);
    print(head);

    cout << endl;

    insertatposition(head, tail, 3, 45);
    print(head);

    insertatposition(head, tail, 1, 100);
    print(head);

    deletenodes(head, 2);
    print(head);

    deletenodes(head, 3);
    print(head);

    cout << head->data << endl;
    cout << tail->data << endl; /*Check it not working properly*/

    return 0;
}