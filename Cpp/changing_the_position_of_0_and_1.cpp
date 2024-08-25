#include <iostream>
using namespace std;

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {

        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        swap(arr[left], arr[right]);
        left++;
        right++;
    }
}

int main()
{
    int arr[] = {1, 0, 0, 0, 1, 0, 1, 1};

    sort(arr, 8);
    print(arr, 8);

    return 0;
}