#include <iostream>
using namespace std;

int setbit(int n)
{
    int count = 0;
    for (int i = 1; n != 0; i++)
    {
        if (n & 1 == 1)
        {
            count++;
        }
        n = n >> 1;
    }
    cout << count << endl;
    return count;
}

int main()
{
    // Total number of set bit(means 1) in a and b

    int a, b;

    cin >> a;
    setbit(a);

    cout << endl;

    cin >> b;
    setbit(b);

    cout << "The total number of setbit in a and b is " << setbit(a) + setbit(b) << endl;

    return 0;
}