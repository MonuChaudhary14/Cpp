#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << i - j + 1;
        }
        cout << endl;
    }
    cout << endl;

    int n1;
    cin >> n1;
    char ch = 'A';

    for (int i = 0; i < n1; i++)
    {

        for (int j = 1; j <= n1; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }

    // Another method of above pattern
    int n3;
    cin >> n3;
    for (int i = 1; i <= n3; i++)
    {

        for (int j = 1; j <= n3; j++)
        {
            char chh = 'A' + i - 1;
            cout << chh;
            chh++;
        }
        cout << endl;
    }
    cout << endl;

    int n4;
    cin >> n4;
    char c = 'A';

    for (int i = 0; i < n4; i++)
    {

        for (int j = 0; j < n4; j++)
        {
            cout << c;
            c++;
        }
        cout << endl;
    }

    return 0;
}