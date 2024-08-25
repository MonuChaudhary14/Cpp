#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *kreverse(node *&head, int k)
{

    // base call
    if (head == NULL)
    {
        return NULL;
    }

    // Step1: reverse k nodes
    node *forward = NULL;
    node *curr = head;
    node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Step 2: Use rescurtion

    if (forward != NULL)
    {
        head->next = kreverse(forward, k);
    }

    // returning head of reversed list
    return prev;
}

int main()
{

    return 0;
}