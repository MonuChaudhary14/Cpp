#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    int b;
    cin >> b;

    for (int k = 1; k <= b; k++)
    {
        for (int l = 1; l <= b; l++)
        {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}