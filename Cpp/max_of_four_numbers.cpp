#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{

    if ((a > b) && (a > c) && (a > d))
    {
        cout << a;
        return a;
    }
    else if ((b > c) && (b > a) && (b > c))
    {
        cout << b;
        return b;
    }
    else if ((c > b) && (c > a) && (c > d))
    {
        cout << c;
        return c;
    }
    else if ((d > b) && (d > c) && (d > a))
    {
        cout << d;
        return d;
    }
}

int main()
{
    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    max_of_four(a, b, c, d);

    return 0;
}