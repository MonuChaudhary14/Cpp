#include <iostream>
using namespace std;

class node{
    public:

    int data;
    node * next;

    node(int d){
        data = d;
        node * next = NULL;
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

void insertattail(node *&tail, int d)
{

    node *temp = new node(d);
    tail->next = temp;
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
        temp = temp->next;
        count++;
    }

    if (temp->next == NULL)
    {
        insertattail(tail, d);
        return;
    }

    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

node * uniquesortedlist(node * head){

    if(head == NULL){
        return NULL;
    }

    node * curr = head;

    while(curr != NULL){

        if(curr->data == curr->next->data && curr->next != NULL){
            node * next_next = curr->next->next;

            node * nodetodelete = curr->next;
            delete(nodetodelete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
} 

int main()
{
    node *node1 = new node(20);
    node *head = node1;

    // print(head);

    insertathead(head, 18);
    // print(head);

    insertathead(head, 18);
    // print(head);

    insertathead(head, 18);
    // print(head);

    insertathead(head, 12);
    // print(head);

    insertathead(head, 10);
    // print(head);

    insertathead(head, 05);
    print(head);

    cout << endl;


    uniquesortedlist(head);
    print(head);


    
    return 0;
}