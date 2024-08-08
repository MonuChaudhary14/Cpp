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

node * getmid(node * head){
    node * slow = head;
    node * fast = head->next;

    while(fast != NULL && fast->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

node * reverse(node * head){
    node * curr = head;
    node * prev = NULL;
    node * next = NULL;

    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool ispalindrome(node * head){

    if(head->next == NULL){
        return true;
    }
         
    node * mid = getmid(head);

    node * temp = mid->next;
    mid->next = reverse(temp);

    node * head1 = head;
    node * head2 = mid->next;

    while(head2 != NULL){

        if(head1 ->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    temp = mid->next;
    mid->next = reverse(temp);
}

int main()
{

    return 0;
}