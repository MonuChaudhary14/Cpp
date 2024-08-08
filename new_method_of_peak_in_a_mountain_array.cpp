#include <iostream>
using namespace std;

int binarysearch(int arr[], int n)
{
    int start = 0;
    for (int i = 0; arr[start] < arr[start + 1]; i++)
    {
        start++;
    }
    return start;
}

int binarysearch1(int arr[], int n)
{
    int end = n - 1;
    for (int i = 0; arr[end] < arr[end - 1]; i++)
    {
        end--;
    }
    return end;
}

int main()
{
    int arr[] = {1, 3, 5, 4, 2};

    cout << binarysearch(arr, 5) << endl;
    cout << binarysearch1(arr, 5) << endl;

    return 0;
}