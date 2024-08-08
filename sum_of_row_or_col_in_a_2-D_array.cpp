#include <iostream>
using namespace std;

void sumrow(int arr[3][3], int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }
}

void sumcol(int arr[3][3], int row, int col)
{

    for (col = 0; col < 3; col++)
    {
        int sum = 0;

        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << endl;
    }
}

int main()
{

    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    sumrow(arr, 3, 3);

    sumcol(arr, 3, 3);

    return 0;
}