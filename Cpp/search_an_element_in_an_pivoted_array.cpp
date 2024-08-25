#include <iostream>
using namespace std;

int getpivot(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key)
{

    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    for (int i = 0; start <= end; i++)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

int findkey(int arr[], int n, int k)
{

    int pivot = getpivot(arr, n);

    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        return binarysearch(arr, pivot, n - 1, k);
    }

    else
    {
        return binarysearch(arr, 0, pivot - 1, k);
    }
}

int main()
{
    int arr[] = {7, 8, 9, 1, 2};

    int key;
    cin >> key;

    findkey(arr, 5, key);

    return 0;
}