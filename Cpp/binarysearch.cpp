#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;

    int mid = (start + ((end - start) / 2));

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = end - 1;
        }
        mid = (start + ((end - start) / 2));
    }
    return -1;
}

int main()
{
    int arr[5] = {1, 5, 7, 8, 9};

    int index = binarysearch(arr, 5, 8);

    cout << index << endl;
    return 0;
}