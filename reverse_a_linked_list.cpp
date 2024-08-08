#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node * nextaddress;

    node(int data){
        this->data = data;
        this->nextaddress = NULL;
    }
};

// void insertathead(node *&head, int d)
// {
//     // Creating a new node
//     node *temp = new node(d);
//     temp->nextaddress = head;
//     head = temp;
// }

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

// void insertattail(node *&tail, int d)
// {

//     node *temp = new node(d);
//     tail->nextaddress = temp;
//     tail = temp;
// }

// void insertatposition(node *&head, node *&tail, int position, int d)
// {
//     if (position == 1)
//     {
//         insertathead(head, d);
//         return;
//     }

//     node *temp = head;
//     int count = 1;

//     while (count < position - 1)
//     {
//         temp = temp->nextaddress;
//         count++;
//     }

//     if (temp->nextaddress == NULL)
//     {
//         insertattail(tail, d);
//         return;
//     }

//     node *nodetoinsert = new node(d);
//     nodetoinsert->nextaddress = temp->nextaddress;
//     temp->nextaddress = nodetoinsert;
// }

node * reverse(node* &head){

    if((head == NULL) || (head->nextaddress == NULL)){
        return head;
    }

    node * prev = NULL;
    node * curr = head;
    node * forward = NULL;

    while(curr != NULL){
        forward = curr->nextaddress;
        curr->nextaddress = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

int main()
{

    node* node1 = new node(48);
    node * head = node1;

    // insertathead(head , 2);
    // insertattail(head , 45);

    print(head);

    reverse(head);

    print(head);

    return 0;
}