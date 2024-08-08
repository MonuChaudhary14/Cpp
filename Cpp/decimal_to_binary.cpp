#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        cout<<bit<<endl;
        ans = ((bit * pow(10, i))+ ans);
        cout<<ans<<endl;
        n = n >> 1;
        cout<<n<<endl;
        i++;
    }

    cout << ans;

    return 0;
}