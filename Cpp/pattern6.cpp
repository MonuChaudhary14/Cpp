#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    int n1;
    cin >> n1;

    for (int i = 0; i < n; i++)
    {

        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    int n2;
    cin >> n2;

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= n - i + 1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    int n3;
    cin>>n3;
    int a = 1;

    for(int i = 1 ; i <= n3; i++){

        for (int j = 1; j <= i-1; j++){
            cout<<" ";
        }
        for (int k = 1; k <= n3-i+1; k++){
            cout<<a;
        }
        a++;
        cout<<endl;
    }

    return 0;
}