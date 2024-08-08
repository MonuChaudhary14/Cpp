#include <iostream>
using namespace std;

int main()
{   
    // int n;
    // cout << "Enter the number";
    // cin >> n;
    for (int n = 0; n < 200; n++)
    {
        if (n % 2 == 0)      {
            cout << "This is even number";
        }

        else
        {
            cout << "This is odd number";
        }
    }
    return 0;
}