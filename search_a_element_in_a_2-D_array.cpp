#include <iostream>
using namespace std;

bool ispresent(int arr[][4 /*we must have to write column*/], int row, int col, int element)
{

    for (int row = 0; row, 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {

            if (arr[row][col] == element)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    if (ispresent(arr, 3, 4, 4))
    {
        cout << "Found";
    }
    else
    {
        cout << "Not found";
    }
    return 0;
}