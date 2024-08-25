#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputstack, int count, int size)
{

    if (count == size / 2)
    {
        inputstack.pop();
        return;
    }

    int num = inputstack.top();
    inputstack.pop();

    solve(inputstack, count + 1, size);

    inputstack.push(num);
}

void deletemiddle(stack<int> &inputstack, int n)
{

    int count = 0;
    solve(inputstack, count, n);
}

int main()
{

    return 0;
}