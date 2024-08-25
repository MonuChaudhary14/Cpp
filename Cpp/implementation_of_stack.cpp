#include <iostream>
using namespace std;

class stack
{

public:
    int *arr;
    int top;
    int size;

    stack(int size)
    {
        this->size = size;
        int top = -1;
        arr = new int[size];
    }

    void push(int element)
    {

        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {

        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {

        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    stack s(5);;

    s.push(4);
    s.push(8);
    s.push(2);
    s.push(9);
    s.push(3);

    cout << "The peek element is " <<s.peek() << endl;

    if(s.isempty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    return 0;
}