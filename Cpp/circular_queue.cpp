#include <iostream>
using namespace std;

class CircularQueue{

    int * arr;
    int front;
    int rear;
    int size;

    public:

    CircularQueue(int n){

        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // enqueues 'x' into the queue. Return true if it gets pushed into the stack

    bool enqueue(int value){

        if(front == 0 && rear == size-1 || (rear == (front-1) % (size-1))){
            cout<<"Queue is full"<<endl;
            return false;
        }
        else if(front == -1){  //first element to push
            front = rear = 0;
       
        }
        else if(rear == size-1 && front != 0){
            rear = 0;
          
        }
        else{
            rear++;
            
        }
             arr[rear] = value;
             return true;

        }

    // Dequeue top element from queue. Returns -1 if the queue is empty

    int dequeue(){

        if(front == -1){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int ans = arr[front];
        arr[front] = -1;

        if(front == rear){  //Single element
            front = -1;
            rear = -1;
        }
        else if(front == size-1){
            front = 0;
        }
        else{
            front++;
        }
        return ans;
    }



    

};

int main()
{

    return 0;
}