#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

bool poweroftwo(int n)
{

    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);

        if (ans == n)
        {
            return true;
        }
    }
    return false;
}

// OR

bool powerof2(int n)
{
    int ans = 1;

    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            return true;
        }
        if (ans < INT_MAX / 2)
        {
            ans = ans * 2;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    if (poweroftwo(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    cout << endl;

    if (powerof2(n))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}