#include <iostream>
#include<stack>
using namespace std;


void insertatbottom(stack<int> &s , int element){

    // base class
    if(s.empty()){

        s.push(element);
        return ;
    }
    int num = s.top();
    s.pop();

    insertatbottom(s, element);

    s.push(num);

}

void reversestack(stack<int>& stack){

    // base clase
    if(stack.empty()){
        return ;
    }

    int num = stack.top();
    stack.pop();

    reversestack(stack);

    insertatbottom(stack , num);

}

int main()
{

    return 0;
}