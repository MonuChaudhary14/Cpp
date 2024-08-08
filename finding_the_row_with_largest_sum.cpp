#include <iostream>
#include <climits>
using namespace std;

int largestrow(int arr[3][3], int row, int col)
{
    int max1 = INT_MIN;
    int rowindex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        if (max1 < sum)
        {
            max1 = sum;
            rowindex = row;
        }
    }
    cout << max1 << endl;
    return rowindex;
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 20, 6, 7, 8, 9};

    cout << largestrow(arr, 3, 3);

    return 0;
}