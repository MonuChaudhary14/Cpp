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

node *reverse(node *head)
{

    node *curr = head;
    node *prev = NULL;
    node *forward = NULL;

    while (curr != NULL)
    {

        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        ;
    }
    return prev;
}

void insertattail(struct node *&head, struct node *&tail, int digit)
{

    node *temp = new node(digit);

    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

struct node *add(struct node *first, struct node *second)
{

    int carry = 0;

    node *anshead = NULL;
    node *anstail = NULL;

    while (first != NULL && second != NULL)
    {

        int sum = carry + first->data + second->data;

        int digit = sum % 10;

        insertattail(anshead, anstail, digit);

        carry = sum / 10;
        first = first->next;
        second = first->next;
    }

    while (first != NULL)
    {
        int sum = carry + first->data;
        int digit = sum % 10;

        insertattail(anshead, anstail, digit);

        carry = sum / 10;
        first = first->next;
    }

    while (second != NULL)
    {
        int sum = carry + second->data;
        int digit = sum % 10;

        insertattail(anshead, anstail, digit);

        carry = sum / 10;
        second = first->next;
    }

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;

        insertattail(anshead, anstail, digit);
        carry = sum / 10;
    }
    return anshead;
}

struct node *addtwolist(struct node *first, struct node *second)
{

    first = reverse(first);
    second = reverse(second);

    node *ans = add(first, second);

    ans = reverse(ans);

    return ans;
}

int main()
{

    return 0;
}