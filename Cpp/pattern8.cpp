#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = 1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout << d;
            d++;
        }
        for (int n = 1; n <= i; n++)
        {
            d--;
        }
        int e = i - 1;
        for (int m = 1; m <= i - 1; m++)
        {

            cout << e;
            e--;
        }
        cout << endl;
    }

    // 1234554321
    // 1234**4321
    // 123****321
    // 12******21
    // 1********1

    int n1;
    cin >> n1;
    int a = 1;

    for (int i = 1; i <= n1; i++)
    {

        for (int j = 1; j <= n1 - i + 1; j++)
        {
            cout << a;
            a++;
        }

        for (int l = 1; l <= i - 1; l++)
        {
            cout << "*";
        }

        for (int l = 1; l <= i - 1; l++)
        {
            cout << "*";
        }

        for (int k = 1; k <= n1 - i + 1; k++)
        {
            a--;
            cout << a;
        }

        cout << endl;
    }

    /*   for(int i = 1; i <= n; i++){
        int row = n-i+1;

        for(int j = 1; j <= n-i+1; j++){
            cout<<j;
        }
        for(int k = 1; k <= i-1; k++){
            cout<<"*";
        }
        for(int l = 1; l <= i-1; l++){
            cout<<"*";
        }
        for(int m = 1; m <= n-i+1; m++){
            cout<<row;
            row--;
        }
        cout<<endl;
    }*/

    return 0;
}