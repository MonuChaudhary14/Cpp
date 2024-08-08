#include <iostream>
using namespace std;

void sum(int arr[], int n, int S)
{

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            for (int k = j + 1; k < n; k++)
            {

                if (arr[i] + arr[j] + arr[k] == S)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int arr1[] = {1, 2, 4, 6, 7, 9, 3, 5, 6, 8};

    sum(arr1, 9, 10);

    return 0;
}