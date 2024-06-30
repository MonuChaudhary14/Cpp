#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool flag = 0;
    cout << "Enter a number" << endl;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "It is not a prime";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "It is a prime";
    }

    

    return 0;
}

// Prime number from 1 to 100
// Sum of digitds of a number
// Reverse of a number
