#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int S;
    cin >> S;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {

        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] + arr[k] == S)
            {
                int d = min(arr[j], arr[k]);
                int e = max(arr[k], arr[j]);
                cout << d << " " << e << " " << endl;
            }
        }
    }

    // If we try to get triplet(means 3 elements) to get a given number then use a loop from k+1 to n-1
    return 0;
}