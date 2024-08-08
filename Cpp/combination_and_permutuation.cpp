#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int nCr(int n, int r)
{
    int d = factorial(n) / (factorial(r) * factorial(n - r));
    cout << d<<endl;
    return d;
}

int nPr(int n , int r){
    int e = factorial(n)/factorial(n-r);
    cout<<e<<endl;
    return e;
}


int main()
{
    int n;
    cin >> n;
    int r;
    cin >> r;

    nCr(n, r);

    return 0;
}


/*Ways in which fuction called*/
// Main()-> ncr() -> factorial() -> ncr() -> factorial() -> ncr() -> factorial() -> ncr() -> main()