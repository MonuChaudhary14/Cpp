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

        for (int k = 0; k < n; k++)
        {

            for (int l = 0; l < n; l++)
            {
                if (arr[j] + arr[k] + arr[l] == S)
                {
                    cout << arr[j] << " " << arr[k] << " " << arr[l] << endl;
                }
            }
        }
    }

    return 0;
}