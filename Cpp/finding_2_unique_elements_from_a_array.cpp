#include <iostream>
#include<vector>
using namespace std;

bool setbit1(int n, int position)
{
    if (n & (1 << position) != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

vector<int> unique(int arr[], int n)
{
    vector<int> ans(2);

    int xorsum = 0;

    for (int i = 0; i < n; i++)
    {

        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;

    int setbit = 0;
    int position = 0;

    while (setbit != 1)
    {

        setbit = xorsum & 1;
        position++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;

    for (int i = 0; i < n; i++)
    {

        if (setbit1(arr[i], position - 1))
        {
            newxor = newxor ^ arr[i];
        }
    }

    ans.push_back(newxor);

    ans.push_back(newxor ^ tempxor);
}

int main()
{

    return 0;
}