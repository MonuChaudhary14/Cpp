#include <iostream>
using namespace std;

long long int findsqrt(int n)
{
    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    int ans = n;

    for (int i = 0; start <= end; i++)
    {
        long long int square = mid * mid;
        if (square == n)     /* Means the suare of mid is equsl to the sqaure of number we are finding*/
        {
            return mid;
        }

        else if (square > n)
        {
            end = mid - 1;
        }
        else if (square < n)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}

double morePrecision(int n, int precision, int tempsol)
{

    double factor = 1;
    double ans = tempsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}
int main()
{

    int n;
    cin >> n;

    cout << "The square root of 36 is " << findsqrt(n);

    int tempsol = findsqrt(n);

    cout << "Answer is " << morePrecision(n, 3, tempsol) << endl;

    return 0;
}