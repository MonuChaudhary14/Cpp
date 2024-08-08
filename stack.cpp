#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(4);
    s.push(9);
    s.push(2);
    s.push(7);
    s.push(3);
    s.push(8);

    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"The size of stack is "<<s.size();

    return 0;
}