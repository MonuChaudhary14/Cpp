#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "2 * " << i << " = " << 2 * i << endl;
    }

    cout << endl;
    for (int j = 10; j >= 1; j--)
    {
        cout << 3 * j << endl;
    }

    for (int k = 1; k <= 10; k++)
    {
        cout << "Table of " << k << endl;
        for (int l = 1; l <= 10; l++)
        {
            cout << k << " * " << l << " = " << k * l << endl;
        }
    }
    return 0;
}