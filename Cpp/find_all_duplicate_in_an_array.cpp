#include <iostream>
using namespace std;/*This is not working*/

void duplicate(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)

            if (arr[i] ^ arr[j] == 0)
            {
                cout << arr[i] << " ";
            }
    }
}

int main()
{

    int arr[] = {1, 1, 2, 3, 4, 5, 3, 9, 6};

    duplicate(arr, 9);

    return 0;
}