#include <iostream>
#include<climits>
using namespace std;

int reverse(int n)
{
    int ans = 0;
    for (int i = 0; n != 0; i++)
    {
        int a = n % 10;
        n = n / 10;
        ans = ans * 10 + a;
    }

    if ((ans > INT_MAX/10) || (ans < INT_MIN/10)){
        cout<<"Error";
        return 0;
    }
    // cout << ans;
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout<<reverse(n);

    return 0;
}