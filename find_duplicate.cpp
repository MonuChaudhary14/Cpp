#include <iostream>
using namespace std;

// In this we have to find the duplicate of a number 
// Condition 1: The array contain n elements
// Condition 2: The value of elements are [1,n-1] , so every element atleast come one and a single element come twice

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;

    return 0;
}