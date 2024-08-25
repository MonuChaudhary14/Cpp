#include <iostream>
using namespace std;

int unique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i]; /*We use XOR in this case because two elements are same*/
    }
    return ans;
}

int main()
{ /*This is done when it conatin 2n+1 elements and all the elements come 2 times except one*/
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The unique element is " << unique(arr, n);

    return 0;
}