#include <iostream>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the number";
    // cin >> n;
    for (int n = 0; n < 5; n++)
    {
        if (n % 2 == 0)
        {
            cout << "This is even number" << endl;
        }

        else
        {
            cout << "This is odd number" << endl;
        }
    }

    cout << endl;

    for (int j = 1; j <= 20; j + 2)
    {
        cout << "These are odd numbers" << endl;
        cout << j;
    }

    cout << endl;

    cout << "These are even numbers" << endl;
    for (int i = 0; i <= 20; i += 2)
    {
        cout << i << endl;
    }
    return 0;
}