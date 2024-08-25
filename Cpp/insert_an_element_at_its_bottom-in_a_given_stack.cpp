#include <iostream>
#include<stack>
using namespace std;

void solve(stack<int>&s , int x){

    // base case
    if(s.empty()){
        s.push(x);
        return ;
    }

    int num = s.top();
    s.pop();

    solve(s, x);

    s.push(num);


}

stack<int> pushatbottom(stack<int>& mystack , int x){

    solve(mystack , x);
    return mystack;

}

int main()
{
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(4);
    s.push(1);
    s.push(9);
    s.push(0);

    pushatbottom(s, s.size());


    return 0;
}