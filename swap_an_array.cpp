#include <iostream>
using namespace std;

void swap(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}
int main()
{
    int arr[] = {4, 5, 3, 1, 8};
    swap(arr);

    cout << arr[0];
    cout << arr[1];

    return 0;
}