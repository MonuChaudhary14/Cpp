#include <iostream>
using namespace std;

class Queue{

    int * arr;
    int first;
    int rear;
    int size;

    public:

    Queue(){
        size = 100001;
        arr= new int[size];
        first = 0;
        rear = 0;
    }

    void push(int data){

        if(rear == size){
            cout<<"Queue is full";
        }
        else{
            arr[rear] = data;
            rear++;
        }

    }

    int pop(){

    if(first == rear){
    return -1;
    }
    else{
        int ans = arr[first];
        arr[first] = -1;
        first++;


        if(first == rear){
            first = 0;
            rear = 0;
        }
         return ans;
    }
       
    }

    int front(){

        if(first == rear){
            return -1;
        }
        else{
            return arr[first];
        }

    }

    bool isempty(){

        if(first == rear){
            return true;
        }
        return false;
    }

};

int main()
{

    return 0;
}