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

int getlength(node* head){
    int count = 0;

    while(head != NULL){
        count++;
        head = head->nextaddress;
    }
    return count;
}

node * findmiddle(node *& head){
    int length = getlength(head);
    int ans = (length/2);

    node* temp = head;
    int count = 0;
    while(count < ans){
        temp= temp->nextaddress;
        count++;
    }
    return temp;
}

node* getmiddle(node * head){

    if(head == NULL || head->nextaddress == NULL){
        return head;
    }

    if(head->nextaddress->nextaddress == NULL){
        return head->nextaddress;
    }

    node * slow = head;
    node * fast = head->nextaddress;

    while(fast != NULL){
        fast = fast->nextaddress;
        if(fast != NULL){
            fast = fast-> nextaddress;
        }
        slow = slow->nextaddress;
    }
    return slow;
}

int main()
{

    return 0;
}