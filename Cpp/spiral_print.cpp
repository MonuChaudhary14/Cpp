#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralorder(vector<vector<int>> &matrix)
{

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    while (count < total)
    {

        // for starting row
        for (int index = startingcol; count < total && index <= endingcol; index++)
        {
            ans.push_back(matrix[startingrow][index]);
            count++;
        }
        startingrow++;

        // for ending column
        for (int index = startingrow; count < total && index <= endingrow; index++)
        {
            ans.push_back(matrix[index][endingcol]);
            count++;
        }
        endingcol--;

        // for ending row
        for (int index = endingcol; count < total && index >= startingcol; index--)
        {
            ans.push_back(matrix[endingrow][index]);
            count++;
        }

        // for starting column
        for (int index = endingrow; count < total && index >= startingrow; index--)
        {
            ans.push_back(matrix[index][startingcol]);
            count++;
        }
        startingcol++;
    }
    return ans;
}

int main()
{
    vector<int> arr[3][3] = {{
                                 1,
                                 2,
                                 3,
                             },
                             {4, 5, 6},
                             {7, 8, 9}};

    cout << spiralorder(vector<int> arr);

    return 0;
}