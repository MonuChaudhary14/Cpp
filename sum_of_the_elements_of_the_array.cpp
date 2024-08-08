#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of elements of array is " << sum << endl;
}
int main()
{
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the value of arr[" << i << "] ";
        cin >> arr[i];
    }

    sum(arr, size);

    return 0;
}