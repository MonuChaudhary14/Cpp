#include <iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + ((end - start) / 2));
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    cout << ans << endl;
    return ans;
}

int lastoccurence(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;
    int mid = (start + ((end - start) / 2));
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    cout << ans << endl;
    return ans;
}

int main()
{
    // int n;
    // cin>>n;

    int arr[] = {4, 5, 6, 6, 8};

    firstoccurence(arr, 5, 6);
    lastoccurence(arr, 5, 6);

    cout << "Total number of occurence is " << (lastoccurence(arr, 5, 6) - firstoccurence(arr, 5, 6)) + 1;

    return 0;
}