#include <iostream>
using namespace std;

bool prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int countprimes(int n)
{
    int count = 0;

    for (int i = 2; i < n; i++)
    {

        if (prime(i))
        {
            cout<<i<<" ";
            cout<<endl;
            count++;
        }
    }
    return count;
}

int main()
{

    int n;
    cin >> n;

    cout << countprimes(n);

    return 0;
}