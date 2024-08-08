#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a = 'A';

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char b = a + i + j - 2; /*Video no.4   Time- 41 min*/
            cout << b;
        }
        cout << endl;
    }
    cout << endl;

    int n1;
    cin >> n1;
    char e = 'D';

    for (int i = 1; i <= n1; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            char c = e - i + j;
            cout << c;
        }
        cout << endl;
    }
    cout << endl;

    // Another method

    int n2;
    cin >> n2;

    for (int i = 1; i <= n2; i++)
    {
        char start = 'A' + n2 - i;

        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start++;
        }
        cout << endl;
    }

    int n3;
    cin >> n;

    int row = 1;
    while (row <= n3)
    {

        int col = 1;
        char start = 'A' + n3 - row;
        while (col <= row)
        {
            cout << start;
            start++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}