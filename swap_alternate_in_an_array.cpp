#include <iostream>
using namespace std;

void swapalternate(int arr[], int n)
{

    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 <= n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void print(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n = 6;
    // cin>>n;

    int arr[] = {4, 5, 6, 3, 2, 1};

    swapalternate(arr, n);

    print(arr, n);

    return 0;
}