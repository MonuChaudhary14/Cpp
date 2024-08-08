#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

vector<long long> printfirstnegativeinteger(long long int a[], long long int N, long long int k)
{

    deque<long long int> dq;
    vector<long long> ans;

    // first window of k size
    for (int i = 0; i < k; i++)
    {

        if (a[i] < 0)
        {
            dq.push_back(i);
        }
    }

    // store answer of first k size window

    if (dq.size() > 0)
    {
        ans.push_back(a[dq.front()]); // dq.push_back(i) stores i and here its value is used
    }
    else
    {
        ans.push_back(0);
    }

    // process for remaining window

    for (int i = k; i < N; i++)
    {

        // removal
        if (!dq.empty() && i - dq.front() >= k)
        {
            dq.pop_front();
        }

        // addition
        if (a[i] < 0)
        {
            dq.push_back(i);
        }

        // ams store
        if (dq.size() > 0)
        {
            ans.push_back(a[dq.front()]);
        }
        else
        {
            ans.push_back(0);
        }
    }
    return ans;
}

int main()
{

    return 0;
}