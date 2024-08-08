#include<iostream>
#include<unordered_map>
using namespace std;

class node{
    public:

    int data;
    node * next;
    node * random;

    node(int d){
        data = d;
        next = NULL;
        random = NULL;
    }
};

void insertattail(node * head , node * tail ,int d){

    node * newnode = new node(d);

    if(head == NULL){
        head = newnode;
        tail = newnode;
        return ;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}

node * copylist(node * head){

    node * clonehead = NULL;
    node * clonetail = NULL;

    node * temp = head;

    while(temp != NULL){
        insertattail(clonehead , clonetail , temp->data);
        temp = temp->next;
    }
    // Create a map
    unordered_map<node*,node *> oldtonew;

    node * originalnode = head;
    node * clonenode = clonehead;

    while(originalnode != NULL){
        oldtonew[originalnode] = clonenode;
        originalnode = originalnode->next;
        clonenode = clonehead->next;
    }
    originalnode = head;
    clonenode = clonehead;

    while(originalnode != NULL){

        clonenode->random = oldtonew[originalnode->random];
        originalnode = originalnode->next;
        clonenode = clonenode->next;
    }
    return clonehead;
}
 
int main(){
    
    return 0;
}