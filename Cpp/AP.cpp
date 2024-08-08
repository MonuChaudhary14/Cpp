#include <iostream>
using namespace std;

int AP(int n)
{

    int a, b;

    cout << "Enter a AP";
    cin >> a >> b;
    int AP = a * n + b;
    cout << a << " * n + " << b << endl;

    cout << "The nth term of the AP is " << AP << endl;
}
int main()
{
    // AP
    int n;
    cin >> n;

    AP(n);

    return 0;
}