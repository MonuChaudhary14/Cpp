#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &stack, int num)
{

    if (stack.empty() || (!stack.empty() && stack.top() < num))
    {

        stack.push(num);
        return ;
    }

    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

void sortstack(stack<int> &stack)
{

    if (stack.empty())
    {
        return ;
    }

    int num = stack.top();
    stack.pop();

    sortstack(stack);

    sortedInsert(stack, num);
}

int main()
{

    return 0;
}