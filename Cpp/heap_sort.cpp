#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {
        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n)
{

    int size = n;

    while (size > 1)
    {

        // swap first and last element because 1st element is largest
        swap(arr[size], arr[1]);

        // decrease size because last is in right position
        size--;

        // placing the first element into right place so that largest element comes at first place
        heapify(arr, size, 1);
    }
}

int main()
{

    int arr[] = {-1, 55, 50, 53, 45, 40, 35};
    int n = 5;

    heapsort(arr, n);

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}