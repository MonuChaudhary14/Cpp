#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* nextaddress;

    node(int d){
        this->data = d;
        this->nextaddress = NULL;
    }

    ~node(){
        if(this->nextaddress != NULL){
            delete nextaddress;
            nextaddress = NULL;
        }
        cout<<"Memory is free for node with data "<<data<<endl;
    }
};

void insertnode(node* &tail , int element , int d){


    // empty list
    if(tail == NULL){
    node* newnode = new node(d);
    tail = newnode;
    newnode->nextaddress = newnode;
    }
    else{
    // assuming that the element is present in the list

    node* curr = tail;

    while(curr->data != element){
        curr = curr-> nextaddress;
    }

    node* temp = new node(d);
    temp->nextaddress = curr->nextaddress;
    curr->nextaddress = temp;
    }

}

void print(node* tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }

    node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->nextaddress;
    }while(tail != temp);
    cout<<endl;
}

void deletenode(node* &tail , int value){

    if(tail == NULL){
        cout<<"Error";
        return ;
    }

    node* prev = tail;
    node* curr = prev->nextaddress;

    while(curr->data != value){
        prev = curr;
        curr = curr->nextaddress;
    }
    prev->nextaddress = curr->nextaddress;

    if(curr == prev){
        tail = NULL;
    }
    else if(tail == curr){
        tail = prev;
    }
    curr->nextaddress = NULL;
    delete curr;
}

bool iscircularlist( node * &head){

    if(head == NULL){
        return true;
    }

    node *temp = head->nextaddress;

    while (temp != NULL && temp != head){
        temp = temp->nextaddress;
    }

    if(temp == head){
        return true;
    }
    return false;
}
 
int main(){

    node* tail = NULL;

    insertnode(tail , 5 ,3);
    print(tail);

    insertnode(tail , 3 , 6);
    print(tail);

    insertnode(tail , 6 , 7);
    print(tail);

    insertnode(tail , 3 , 9);
    print(tail);

    // deletenode(tail , 3);
    // print(tail);

    // deletenode(tail , 6);
    // print(tail);

    // deletenode(tail , 7);
    // print(tail);

    // deletenode(tail , 9);
    // print(tail);


    if(iscircularlist(tail)){
        cout<<"Circular";
    }
    else{
        cout<<"Not circular";
    }


    
    
    return 0;
}