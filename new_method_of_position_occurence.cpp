#include <iostream>
using namespace std;

int firstoccurence(int arr[], int key)
{
    int start = 0;
    int ans = -1;

    for (int i = 0; arr[start] != key; i++)
    {

        if (arr[start] != key)
        {
            start++;
        }
    }
    return start;
}

int lastoccurence(int arr[], int key, int n)
{
    int end = n - 1;
    int ans = 1;

    for (int i = 0; arr[end] != key; i++)
    {

        if (arr[end] != key)
        {
            end--;
        }
    }
    return end;
}

int main()
{

    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5};

    cout << firstoccurence(arr, 2) << endl;
    cout << lastoccurence(arr, 2, 8);

    return 0;
}